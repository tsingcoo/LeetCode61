//
// Created by 王青龙 on 24/02/2017.
//

#ifndef LEETCODE61_SOLUTION_H
#define LEETCODE61_SOLUTION_H

struct ListNode{
    int val;
    ListNode * next;
    ListNode(int x):val(x), next(nullptr){}
};

class Solution{
public:
    ListNode * rotateRight(ListNode* head, int k);
};

#endif //LEETCODE61_SOLUTION_H
