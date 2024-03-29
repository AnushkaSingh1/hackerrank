SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* mhead;
    SinglyLinkedListNode* temp1;
    SinglyLinkedListNode* temp2;
    SinglyLinkedListNode* current;
    temp1 = head1;
    temp2 = head2;
    if (!head1){
        return head2;
    }
    if (!head2){
        return head1;
    }
    if (head1->data < head2->data){
        mhead = head1;
        current = head1;
        temp1 = temp1->next;
    } else {
        mhead = head2;
        current = head2;
        temp2 = temp2->next;
    }
    while (temp1 && temp2) {
        if (temp1->data < temp2->data){
            current->next = temp1;
            current = temp1;
            temp1 = temp1->next;
        } else {
            current->next = temp2;
            current = temp2;
            temp2 = temp2->next;
        }
    }
    if (!temp1) {
        current->next = temp2;
    }
    if (!temp2) {
        current->next = temp1;
    }
    return mhead;
}





















This challenge is part of a tutorial track by MyCodeSchool

Given pointers to the heads of two sorted linked lists, merge them into a single, sorted linked list. Either head pointer may be null meaning that the corresponding list is empty.

Example
 refers to 
 refers to 

The new list is 

Function Description

Complete the mergeLists function in the editor below.

mergeLists has the following parameters:

SinglyLinkedListNode pointer headA: a reference to the head of a list
SinglyLinkedListNode pointer headB: a reference to the head of a list
Returns

SinglyLinkedListNode pointer: a reference to the head of the merged list
Input Format

The first line contains an integer , the number of test cases.

The format for each test case is as follows:

The first line contains an integer , the length of the first linked list.
The next  lines contain an integer each, the elements of the linked list.
The next line contains an integer , the length of the second linked list.
The next  lines contain an integer each, the elements of the second linked list.

Constraints

, where  is the  element of the list.
Sample Input

1
3
1
2
3
2
3
4
Sample Output

1 2 3 3 4 
Explanation

The first linked list is: 

The second linked list is: 

Hence, the merged linked list is: 
