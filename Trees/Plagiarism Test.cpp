// Complete the function PlagiarismTest() given below.
// For your reference:
/*
struct node
{
    int value;
    node *left;
    node *right;
};

node *createNode(int value)
*/

int PlagiarismTest(struct node *root, int x) {
    if(root == NULL || root->value == x) return 0;
    int left_sum = PlagiarismTest(root->left,x);
    int right_sum = PlagiarismTest(root->right,x);
    return left_sum+root->value+right_sum;
}
