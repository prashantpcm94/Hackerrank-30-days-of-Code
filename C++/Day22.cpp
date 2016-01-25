int getHeight(Node* root){
    if(root==NULL){
        return 0;
    }
  return 1+max(getHeight(root->left),getHeight(root->right));
}
