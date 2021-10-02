vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{

    vector<vector<int>> ans;
    queue<TreeNode *> qe;
    qe.push(root);
    if (root == NULL)
        return ans;
    bool flag = true;
    while (!qe.empty())
    {
        int size = qe.size();
        vector<int> level(size);
        for (int i = 0; i < size; i++)
        {
            TreeNode *node = qe.front();
            qe.pop();
            if (node->left != NULL)
                qe.push(node->left);
            if (node->right != NULL)
                qe.push(node->right);
            int index = (flag) ? i : (size - 1 - i);
            level[index] = node->val;
        }
        flag = !flag;
        ans.push_back(level);
    }
    return ans;
}
