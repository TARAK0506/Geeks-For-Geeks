class Solution {
public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        map<int, vector<int>> mp;

        queue<pair<Node*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            auto [node, col] = q.front();
            q.pop();
            mp[col].push_back(node->data);
            if (node->left)
                q.push({node->left, col - 1});

            if (node->right)
                q.push({node->right, col + 1});
        }
        for (auto &[col, nodes] : mp) {
            ans.push_back(nodes);
        }
        return ans;
    }
};
