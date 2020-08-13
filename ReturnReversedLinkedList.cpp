//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem


SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    vector <int> g;
    SinglyLinkedListNode* temp=head;
    while(temp)
    {
        g.push_back(temp->data);
        temp=temp->next;
    }
    temp=head;
    for (int i=g.size()-1;i>=0;i--)
    {
        temp->data=g.at(i);
        temp=temp->next;

    }
return head;


}
