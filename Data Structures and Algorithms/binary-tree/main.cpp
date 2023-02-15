#include <stdio.h>
#include <iostream>

using namespace std;

struct node{
    int info;
    node *left;
    node *right;
};

node *root = NULL;
node *temp = NULL;

void inorder(node *p){
    if(p!=nullptr){
        inorder(p->left);
        cout << p->info << " ";
        inorder(p->right);
    }
}

void preorder(node *p){
    if(p!=nullptr){
        cout << p->info << " ";
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(node *p){
    if(p!=nullptr){
        postorder(p->left);
        postorder(p->right);
        cout << p->info << " ";
    }
}

node *insert(node *p, int input){
    if(p==nullptr){
        temp=new(node);
        temp->info=input;
        return temp;
    }
    else if(p->info>input){
        p->left=insert(p->left, input);
    }
    else if(p->info<input){
        p->right=insert(p->right, input);
    }
    else{
        cout<<"Number already in tree"<<endl;
    }
    return p;
}

node *deleteNode(node *p, int input){
    if (p==NULL){
        cout<<"What you have entered isn't in the tree."<<endl;
    }
    else if (p->info>input){
        p->left=deleteNode(p->left, input);
    }
    else if (p->info<input){
        p->right=deleteNode(p->right, input);
    }
    else if (input==p->info){
        if(p->right==nullptr && p->left==nullptr){
            temp=p;
            p=nullptr;
            delete temp;
        }
        else if (p->right==nullptr && p->left!=nullptr){
            temp=p;
            p=p->left;
            delete temp;
        }
        else if (p->right!=nullptr && p->left==nullptr){
            temp=p;
            p=p->right;
            delete temp;
        }
        else{
            node *current=p;
            temp=p->left;
            while(temp->right!=nullptr){
                current=temp;
                temp=temp->right;
            }
            p->info=temp->info;
            if(current->left==temp){
                current->left=temp->left;
            }
            else{
                current->right=temp->left;
            }
            delete temp;
        }
    }
    return p;
}

int main()
{
    int choice;
    int x=0;
    int input;
    
    while(x==0){
        cout<<"1- Insert a new node "<<endl; 
        cout<<"2- Print the tree using inorder traversal "<<endl;
        cout<<"3- Print the tree using preorder traversal "<<endl;
        cout<<"4- Print the tree using postorder traversal "<<endl;
        cout<<"5- Delete a node "<<endl;
        cout<<"6- Exit "<<endl;
        cout<<"7- Insert example "<<endl;
        cout<<endl;
        cout<<"Enter: ";
        cin>>choice;
        
        if(choice==1){
            cout << "Enter info: ";
            cin >> input;
            root=insert(root, input);
        }
        else if(choice==2){
            inorder(root);
            cout<<endl;
        }
        else if(choice==3){
            preorder(root);
            cout<<endl;
        }
        else if(choice==4){
            postorder(root);
            cout<<endl;
        }
        else if(choice==5){
            cout << "Enter info: ";
            cin >> input;
            root = deleteNode(root, input);
        }
        else if(choice==6){
            x=1;
        }
        else if(choice==7){
            //for quick testing
            root=insert(root, 70);
            root=insert(root, 60);
            root=insert(root, 92);
            root=insert(root, 50);
            root=insert(root, 63);
            root=insert(root, 82);
            root=insert(root, 94);
            root=insert(root, 40);
            root=insert(root, 68);
            root=insert(root, 72);
            root=insert(root, 88);
            root=insert(root, 98);
            root=insert(root, 20);
            root=insert(root, 45);
            root=insert(root, 65);
            root=insert(root, 75);
            root=insert(root, 85);
            root=insert(root, 96);
            root=insert(root, 35);
            root=insert(root, 80);
            root=insert(root, 78);
        }
        else{
            cout<<"Try again."<<endl;
        }
    }
    return 0;
}
