// Complete the checkMirrorTree function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

bool checkMirrorTree(node* a, node* b)
{
    if(a==NULL && b==NULL) return true;
    if(a==NULL || b==NULL) return false;
    return (a->value == b->value && checkMirrorTree(a->left,b->right) && checkMirrorTree(a->right,b->left)); 
}
