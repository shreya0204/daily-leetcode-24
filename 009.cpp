//  Leaf-Similar Trees

void fillRootNodes(TreeNode *root, string &s)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        s.push_back(root->val);

    fillRootNodes(root->left, s);
    fillRootNodes(root->right, s);
}

bool leafSimilar(TreeNode *root1, TreeNode *root2)
{

    string l1;
    string l2;

    fillRootNodes(root1, l1);
    fillRootNodes(root2, l2);

    return l1 == l2;
}