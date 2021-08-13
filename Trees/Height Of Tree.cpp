// Complete the calculateHeight function below.
/* For your reference
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int calculateHeight(node* node)
{
   if(node == NULL) return 0;
   int left_height = calculateHeight(node->left);
   int right_height = calculateHeight(node->right);
   return max(left_height,right_height)+1;
}
