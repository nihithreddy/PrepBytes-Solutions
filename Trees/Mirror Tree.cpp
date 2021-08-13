// Complete the mirror function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void mirror(node* a)
{
    if(a == NULL){
      return;
    }
    mirror(a->left);
    mirror(a->right);
    node* temp = a->left;
    a->left = a->right;
    a->right = temp;
}
