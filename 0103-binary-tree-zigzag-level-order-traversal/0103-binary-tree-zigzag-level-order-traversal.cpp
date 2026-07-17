class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;//create ans vector of vector
        if (root == NULL)//check if root is null return ans 
            return ans;
        queue<TreeNode*> q;//create a queue 
        q.push(root);//push the root element in the queue
        bool leftToRight = true;//create a bool left to right and start it with true
        while (!q.empty()) {//run till the queue is not empty
            int size = q.size();//calculate the size
            vector<int> level;//create level vector
            for (int i = 0; i < size; i++) {//run a loop till the size of queue
                TreeNode* temp = q.front();//store the front element of queue in temp
                q.pop();//pop 
                level.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            if (!leftToRight) {
                reverse(level.begin(), level.end());
            }
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        return ans;//return ans
    }
};