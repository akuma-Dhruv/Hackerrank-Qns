//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

        vector <int> g;

SinglyLinkedListNode* p=head1;
    while(head1->next!=NULL)
    {
        g.push_back(head1->data);
        head1=head1->next;
    }
    g.push_back(head1->data);
        head1->next=head2;
    while(head2)
    {
        g.push_back(head2->data);
        head2=head2->next;
    }
    head1=p;
     sort(g.begin(),g.end()); 
    for(int i=0;i<g.size();i++)
    {
        p->data=g.at(i);
        cout<<g.at(i)<<" ";
        p=p->next;
    }

return head1;
}
