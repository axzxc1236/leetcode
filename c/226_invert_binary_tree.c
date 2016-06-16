//question : https://leetcode.com/problems/invert-binary-tree/
//runtime  : 0ms
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root==NULL) return NULL;
    invertTree(root->left);
    invertTree(root->right);
    struct TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    return root;
}