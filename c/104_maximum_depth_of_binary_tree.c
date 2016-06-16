//question : https://leetcode.com/problems/maximum-depth-of-binary-tree/
//runtime  : 4ms
int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else {
        int length_left = maxDepth(root->left);
        int length_right = maxDepth(root->right);
        return length_left>length_right?length_left+1:length_right+1;
    }
}