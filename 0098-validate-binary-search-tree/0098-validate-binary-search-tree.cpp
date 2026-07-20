class Solution {
public:
     TreeNode* prev = NULL;//create prev pointer mark it null not visited
    bool inorder(TreeNode* root) {//inorder traversal 
        if (root == NULL)//if root is null return true as it is stiill a valid binaruy tree
            return true;
        if (!inorder(root->left))
            return false;
        if (prev != NULL && prev->val >= root->val)
            return false;
        prev = root;
        return inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        return inorder(root);
    }
};