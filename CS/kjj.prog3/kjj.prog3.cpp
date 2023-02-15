#include <iostream> 
#include <string> 
#include <queue> 
using namespace std; 
  
struct ListNode 
{ 
    int data; 
    ListNode* next; 
}; 
  
struct BinaryTreeNode 
{ 
    int data; 
    BinaryTreeNode *left, *right; 
}; 
  
void push(struct ListNode** head_ref, int new_data) 
{ 
    struct ListNode* new_node = new ListNode; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
BinaryTreeNode* newBinaryTreeNode(int data) 
{ 
    BinaryTreeNode *temp = new BinaryTreeNode; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
void convertList2Binary(ListNode *head, BinaryTreeNode* &root) 
{ 
    queue<BinaryTreeNode *> q; 
    if (head == NULL) 
    { 
        root = NULL;  
        return; 
    } 
    root = newBinaryTreeNode(head->data); 
    q.push(root); 
    head = head->next; 
    while (head) 
    { 
        BinaryTreeNode* parent = q.front(); 
        q.pop(); 
        BinaryTreeNode *leftChild = NULL, *rightChild = NULL; 
        leftChild = newBinaryTreeNode(head->data); 
        q.push(leftChild); 
        head = head->next; 
        if (head) 
        { 
            rightChild = newBinaryTreeNode(head->data); 
            q.push(rightChild); 
            head = head->next; 
        } 
        parent->left = leftChild; 
        parent->right = rightChild; 
    } 
} 

void inorderTraversal(BinaryTreeNode* root) 
{ 
    if (root) 
    { 
        inorderTraversal( root->left ); 
        cout << root->data << " "; 
        inorderTraversal( root->right ); 
    } 
} 

void preorderTraversal(BinaryTreeNode* root)
{
    if (root)
    {
        cout << root->data << " ";
        preorderTraversal( root->left );
        preorderTraversal( root->right );
    }
}

void postorderTraversal(BinaryTreeNode* root)
{
    if (root)
    {
        postorderTraversal( root->left );
        postorderTraversal( root->right );
        cout << root->data << " ";
    }
}
  
int main() 
{ 
    bool x=0;
    int num;
    char answer;
    struct ListNode* head = NULL; 
    
    while(x==0)
    {
        cout << "Insert number: ";
        cin >> num;
        push(&head, num);
        cout << "Is there another number? Y/N ";
        cin >> answer;
        if (answer == 'N' || answer == 'n')
        {
            x=1;
        }
    }
  
    BinaryTreeNode *root; 
    convertList2Binary(head, root); 
  
    cout << "Inorder Traversal: "; 
    inorderTraversal(root); 
    cout << endl;

    cout << "Preorder Traversal: "; 
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: "; 
    postorderTraversal(root);
    cout << endl;
    return 0; 
} 