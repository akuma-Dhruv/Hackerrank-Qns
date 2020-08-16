//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

int getNode(SinglyLinkedListNode* head, int positionFromTail) {

    if (head==NULL)
        return 0;
        SinglyLinkedListNode* temp= head;
        
        int count=0;
        while(temp)
      {
        temp=temp->next;
        count++;
    }
    temp=head;
    count=count-positionFromTail;
    for(int i=0;i<count-1;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
