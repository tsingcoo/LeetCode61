//
// Created by 王青龙 on 24/02/2017.
//

#include "solution.h"

ListNode *Solution::rotateRight(ListNode *head, int k) {
    if(!head){
        return head;
    }

    ListNode * newH = head;
    ListNode * tail = head;

    int len = 1;

    while (tail->next){
        ++len;
        tail = tail->next;
    }

    tail->next = head;

    if(k%=len){
        for(int i = 0; i < len-k; ++i){
            tail = tail->next;
        }
    }

    newH = tail->next;
    tail->next = nullptr;
    return newH;

}
