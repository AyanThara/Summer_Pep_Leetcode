class Solution {
public:
    TreeNode* minValue(TreeNode* root){
        while(root->left != NULL){
            root = root->left;
        }return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key){
        if(root == NULL)
            return NULL;
        if(key < root->val){
            root->left = deleteNode(root->left,key);
        }else if(key > root->val){
            root->right = deleteNode(root->right,key);
        }else{
            if(root->left == NULL && root->right == NULL){// Case 1: No child
                delete root;
                return NULL;
            }if(root->left == NULL){  // Case 2: Only right child
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }if(root->right == NULL){ // Case 2: Only left child
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            TreeNode* successor = minValue(root->right);// Case 3: Two children
            root->val = successor->val;
            root->right = deleteNode(root->right, successor->val);
        }return root;
    }
};