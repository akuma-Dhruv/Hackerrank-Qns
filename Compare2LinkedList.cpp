//https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
if(!head1)
return false;
if(!head2)
return false;

while(head1 && head2)
{
    if(head1->data!=head2->data)
    return false;

    head1=head1->next;
    head2=head2->next;
}
if(head1 && !head2)
return false;
if(!head1 && head2)
return false;

return true;

}
