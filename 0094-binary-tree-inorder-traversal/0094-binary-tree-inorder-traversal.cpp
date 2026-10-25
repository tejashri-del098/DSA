/*class Solution {
public:

    void inorder(TreeNode* root, vector<int>& ans) {

        if(root == NULL)
            return;

        inorder(root->left, ans);

        ans.push_back(root->val);

        inorder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        inorder(root, ans);

        return ans;
    }
};*/

class Solution{
    public:
    vector<int> inorderTraversal(TreeNode* root){
        stack<TreeNode*>st;
        vector<int>v;
        TreeNode* node = root;
        while(node != nullptr || !st.empty()){
            while(node != nullptr){
                st.push(node);
                node= node->left;
            }
            node = st.top();
            st.pop();
            v.push_back(node->val);
            node= node->right;
            


        }
        return v;
    }
};