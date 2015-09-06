// import java.util.deque;

// public class Solution {
//     public void PrintFromTopToBottom(TreeNode *root) {
//         if (root == null) {
//             return ;
//         }


//         deque<TreeNode> q = new deque<TreeNode>();
//         q.push(root);

//         while (q.size()) {
//             TreeNode pNode = q.front();
//             q.pop();

//             if (pNode.left) {
//                 q.push(pNode.left);
//             }
//             if (pNode.right) {
//                 q.push(pNode.right);
//             }
//         }
         
         
//     }
// }

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        while(!q.empty()){
            root = q.front(); q.pop();
            if(!root) continue;
            res.push_back(root -> val);
            q.push(root -> left);
            q.push(root -> right);
        }
        return res;
    }
};