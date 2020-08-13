//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

void reversePrint(SinglyLinkedListNode* head) {
    vector <int> g;

    while(head)
    {
        g.push_back(head->data);
        head=head->next;
    }
    for (int i=g.size()-1;i>=0;i--)
    {
        cout<<g.at(i)<<endl;

    }


}
