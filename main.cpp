#include <iostream>

struct Node{
    int info;
    Node *left,*right, *height;
};
Node *start=NULL;
Node *create(int info){
        Node *n= new Node();
        n->info=info;
        n->right=NULL;
        n->left=NULL;
        n->height=1;

    return n;
}
Node *leftrotate(Node *n){
    Node *x=n->right;
    Node *y=x->left;

    x->left=n;
    n->right=y;
    n->height=height(n);
    x->height=height(x);
}
Node *rightrotate(Node *n){
    Node *x=n->left;
    Node *y=x->right;

    x->right=n;
    n->left=y;
    n->height=height(n);
    x->height=height(x);
}
int max(int a, int b){
    if(a>b)
      return a;
    else{return b;}
}
int balance(int left, int right){
    return left-right;
}
int height(Node *n){
  int num;
        num=1+max(n->left->height, n->right->height);
        return num;
}

void insert(Node *n,int num){
 
    if(n->info>num){
        insert(n->left,num);
    }
    else if(n->info<num){
      insert(n->right,num);
    }
    else{cout<<"Equal numbers not allowed"; return;}

  
    int b=balance(n->left,n->right);

    if(b<-1 && num<n->left-info){
          n->right=rightrotate(n->right);
          return leftrotate(n->left)
    }
}
int main() {
  
  int n;
  

}