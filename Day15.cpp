Node* insert(Node *head,int data)
{
  if(head==NULL){
      head=new Node(data);
      return head;
  } else {
     head->next=insert(head->next,data);
      return head;
  }
}
