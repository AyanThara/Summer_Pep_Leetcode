class Node {
public:
    int key, value;
    Node *prev, *next;
    Node(int k, int v) {
        key = k;
        value = v;
        prev = next = NULL;
    }
};
class LRUCache {
private:
    int cap;
    unordered_map<int, Node*> mp;
    Node *head;
    Node *tail;
        void addNode(Node* node) {     // Add node right after head
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }void deleteNode(Node* node) {  // Remove node from list
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
public:
    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }
    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;
        Node* node = mp[key];
        deleteNode(node);
        addNode(node);
        return node->value;
    }
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;
            deleteNode(node);
            addNode(node);
            return;
        }
        if (mp.size() == cap) {
            Node* lru = tail->prev;
            deleteNode(lru);
            mp.erase(lru->key);
            delete lru;
        }
        Node* newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
    }
};