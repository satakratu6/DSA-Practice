void insertatthebeginning(Node *head,int val){
     Node *temp = new Node(val);
    if(head==nullptr){
        head = temp;
      head->next = head;
       return;
    }
    Node *curr = head;
   
  while (curr->next!= head){
        curr = curr->next;
  }
    curr->next = temp;
    temp->next = head;
    head=temp;
}
void insertatend(Node *head,int val){
     Node *temp = new Node(val);
    if(head == nullptr){
        head = temp;
        head->next = head;
        return;
    }
   
    Node *curr = head;
    while (curr->next != head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next=head;


}
