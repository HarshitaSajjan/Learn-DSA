/*Inorder successor or predecessor
*/

/*briute force
store inorder 
which is sorted always
and for scc is the next element
pre is before that
if no then return null

tc O(n)
sc O(n)


morrix traversal
tcO(n)
sc O(1)
*/
/*
successor =null
then go right or left 

tc O(h)
scO(1)
*/

class Solution{
    public:
    TreeNode* inordersucc(TreeNode* root, TreeNode*p){
        TreeNode* succ = NULL;
        while(root!=NULL){
            if(p->val>=root->val){
                root=root->right;
            }else{
                succ=root;
                root=root->left;
            }
        }
        return succ;
    }
}