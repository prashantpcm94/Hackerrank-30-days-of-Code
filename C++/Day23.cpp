void levelOrder(Node * root){
  queue<Node*> Q;
  Q.push(root);
  while(Q.size()!=0){
      Node* x=Q.front();
      cout<<x->data<<" ";
      Q.pop();
      if(x->left!=NULL){
          Q.push(x->left);
      } 
      if(x->right!=NULL){
          Q.push(x->right);
      }
  }
}
