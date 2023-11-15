/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    } 

    struct ListNode* head = malloc(sizeof(struct ListNode));
    struct ListNode* current = head;

    if (list1->val <= list2->val) {
        head->val = list1->val;
        head->next = malloc(sizeof(struct ListNode));
        list1 = list1->next;
    } else {
        head->val = list2->val;
        head->next = malloc(sizeof(struct ListNode));
        list2 = list2->next;
    }

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            current->next = malloc(sizeof(struct ListNode));
            current->next->val = list1->val;
            list1= list1->next;
        } else {
            current->next = malloc(sizeof(struct ListNode));
            current->next->val = list2->val;
            list2 = list2->next;
        }
        current = current->next;
    }
    
    if (list1 == NULL) {
        current->next = list2;
    } else {
        current->next = list1;
    }

    return head;
}