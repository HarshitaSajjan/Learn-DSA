#include<bits/stdc++.h>
using namespace std;

struct TreeNode { // Changed 'Class' to 'struct' for TreeNode definition
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};



Class Solution{
    public:
    vector<int>preinPostTraversal(TreeNode *root){
        stack<pair<TreeNode*, int>>st;
        st.push({root,1});
        vector<int> pre, in, post;
        if(root==NULL)return;
        while(!st.empty()){
            auto it = st.top();
            st.pop();

            if(it.second =1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first!=NULL){
                    st.push({it.first->left,1});
                }
            }
            else if(it.second==2){
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                if(it.first->right!=NULL){
                    st.push({it.first->right,1});
                }
            }
            else{
                post.push_back(it.first->val);
            }
        }
    }
};



/*#include <bits/stdc++.h>
using namespace std;

struct TreeNode { // Changed 'Class' to 'struct' for TreeNode definition
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<vector<int>> preInPostTraversal(TreeNode *root) { // Changed return type to vector<vector<int>>
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        vector<int> pre, in, post;

        if (root == nullptr) return {pre, in, post}; // Added check for empty root

        while (!st.empty()) {
            auto it = st.top();
            st.pop();

            if (it.second == 1) { // Changed '=' to '==' for comparison
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if (it.first->left != nullptr) { // Corrected nullptr check
                    st.push({it.first->left, 1});
                }
            }
            else if (it.second == 2) {
                in.push_back(it.first->val);
                it.second++;
                st.push(it);

                if (it.first->right != nullptr) { // Corrected nullptr check
                    st.push({it.first->right, 1});
                }
            }
            else {
                post.push_back(it.first->val); // Corrected 'ot' to 'it'
            }
        }

        return {pre, in, post}; // Changed to return a vector of vectors
    }
};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<vector<int>> result = sol.preInPostTraversal(root);

    cout << "Pre-order: ";
    for (int val : result[0]) cout << val << " ";
    cout << "\nIn-order: ";
    for (int val : result[1]) cout << val << " ";
    cout << "\nPost-order: ";
    for (int val : result[2]) cout << val << " ";

    return 0;
}
*/