
#include <stdio.h>
#include <stdlib.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int value;
    struct ListNode* next;
};

struct ListNode* createNode(int v1);

int main(){
    

    
    struct ListNode* list1 = createNode(10);
    struct ListNode* l1p1 = createNode(11);
    struct ListNode* l1p2= createNode(13);
    struct ListNode* list2 = createNode(20);
    struct ListNode* l2p1= createNode(21);
    
    list1->next = l1p1;
    l1p1->next = l1p2;
    list2->next = l2p1;
    mergeTwoLists(list1, list2);
    
}


struct ListNode* createNode(int v1){
    struct ListNode* node = malloc(sizeof(struct ListNode));
    if(!node) return NULL;
    
    *node = (struct ListNode){.value = v1, .next = NULL};
    return node;
    
    
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode temp; 
    temp.next = NULL;

    struct ListNode* tail = &temp;
    
    if (!list1) return list2;
        
    if (!list2) return list1;
        
    while(list1 != NULL && list2 != NULL){
        if(list1->value <= list2->value){
            tail->next = list2;
            list2 = list2->next;
        }else {
            tail->next = list1;
            list1 = list1->next;
        }
        tail = tail->next;
    }
    return temp.next;
}
