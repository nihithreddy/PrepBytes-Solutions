// Complete the calculateSize function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int calculateSize(node* node)
{
    if(node == NULL) return 0;
    int left_size = calculateSize(node->left);
    int right_size = calculateSize(node->right);
    return 1+left_size+right_size;
}
