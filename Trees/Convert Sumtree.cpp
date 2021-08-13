// Complete the convertToSumTree function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/

int convertToSumTree(node *node)
{
    if(node == NULL) return 0;
    int left_tree_value = convertToSumTree(node->left);
    int right_tree_value = convertToSumTree(node->right);
    int cur_value = node->value;
    node->value = left_tree_value + right_tree_value;
    return node->value + cur_value;
}
