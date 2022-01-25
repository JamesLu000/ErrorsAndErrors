/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stddef.h>

void reorderList(struct ListNode* head){
    struct ListNode** llarray[50000];
    int index = 0;
    while (head != NULL){
        llarray[index] = head;
        // printf("%p %i\n",llarray[index],sizeof(llarray[index]));
        head = head->next;
        index += 1;
    }
    for (int i = 0; i < index; i++){
        printf("%p\n",llarray[i]);
        // llarray[i]->next = llarray[index-i];
    }
    // head->next = NULL;

}