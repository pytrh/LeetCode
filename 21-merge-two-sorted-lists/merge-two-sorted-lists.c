/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *a = list1;
    struct ListNode *b = list2;

    struct ListNode* head = malloc(sizeof(struct ListNode));

    if (a == NULL) {
        return b;
    } else if (b == NULL) {
        return a;
    } else {
        if (a->val < b->val) {
            head->val = a->val;
            head->next = malloc(sizeof(struct ListNode));
            a = a->next;
        } else {
            head->val = b->val;
            head->next = malloc(sizeof(struct ListNode));
            b = b->next;
        }
    }

    struct ListNode* current = head;

    while (a != NULL && b != NULL) {
        if (a->val < b->val) {
            current->next = malloc(sizeof(struct ListNode));
            current->next->val = a->val;
            a = a->next;
        } else {
            current->next = malloc(sizeof(struct ListNode));
            current->next->val = b->val;
            b = b->next;
        }
        current = current->next;
    }
    
    if (a == NULL) {
        current->next = b;
    } else {
        current->next = a;
    }

    return head;
}