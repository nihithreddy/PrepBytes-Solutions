// Complete the findLowestAncestor function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

node* findLowestAncestor(node* root,int v1, int v2)
{
    if(root->value>v1 && root->value>v2 && root->left!=NULL){
      return findLowestAncestor(root->left,v1,v2);
    }
    else if(root->value<v1 && root->value<v2 && root->right!=NULL){
      return findLowestAncestor(root->right,v1,v2);
    }
    else{
      return root;
    }
}
