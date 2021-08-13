// Complete the findAverageLevel function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void findAverageLevel(node* a)
{
    queue<node*> q;
    q.push(a);
    while(!q.empty()){
      int p = q.size();
      long long sum = 0;
      int cnt=p;
      while(p--){
        node* front = q.front();q.pop();
        sum+=front->value;
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
      }
      printf("%.2lf ",(1.0*sum)/cnt);
    }
}
