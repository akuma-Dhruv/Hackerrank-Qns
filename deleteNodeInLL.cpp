//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if (head==NULL)
        return head;
        SinglyLinkedListNode* temp= head;
        if(position==0)
        {
        head=head->next;
        delete temp;
        return head;
        }
    for (int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    //will get previous node
    SinglyLinkedListNode* p;
    SinglyLinkedListNode* q;
    p=temp->next;//one to be deleted
    q=p->next;//next node 
    temp->next=q;//detached node in mid
    delete p;
    return head;  


}
