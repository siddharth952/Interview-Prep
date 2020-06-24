/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.
class Solution {
public:
    int countNodes(TreeNode* root) {
        
        if(!root)
            return 0;
        
        // Depth at right  \
        //                  \
        
        TreeNode * r = root->right;
        int levelsRight = 1;
        while(r){
            r = r->right;
            levelsRight ++;
        }
        
        //Depth at left     /
        //                 /
        TreeNode * l = root->left;
        int levelsLeft = 1;
        while(l){
            l = l->left;
            levelsLeft ++;
        }
        
        //If nodes in left and right are equal then we apply formula for calculating nodes in a perfect binary tree
        if(levelsRight == levelsLeft)
            return pow(2,levelsRight) - 1 ;
        
        //Recursively solve
        return 1 + countNodes(root->left) + countNodes(root->right); 
        
    }
};

// MARK: Mistakes

//at line 45 there was supposed to be +1 
