//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* t= new SinglyLinkedListNode(data);
    if(head==NULL)
    {
        head=t;
        return head;
    }
    SinglyLinkedListNode* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    temp->next=t;
    temp=NULL;
    delete temp;
   return head;


}
