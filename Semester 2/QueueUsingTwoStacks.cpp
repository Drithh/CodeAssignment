/*
A queue is an abstract data type that maintains the order in which elements
 were added to it, allowing the oldest elements to be removed from the front 
 and new elements to be added to the rear. This is called a First-In-First-Out 
 (FIFO) data structure because the first element added to the queue (i.e., 
 the one that has been waiting the longest) is always the first one to be removed.

A basic queue has the following operations:

Enqueue: add a new element to the end of the queue.
Dequeue: remove the element from the front of the queue and return it.
In this challenge, you must first implement a queue using two stacks. T
hen process q queries, where each query is one of the following 3 types:

1 Enqueue element x into the end of the queue.
2 Dequeue the element at the front of the queue.
3 Print the element at the front of the queue.
*/

#include <bits/stdc++.h>
  
int main() {
    std::stack<int> st1, st2;

    int total;
    std::cin >> total;
    
    while(total--) {
        int type,x;
        std::cin >> type;

        if(type == 1) {
            std::cin >> x;
            st2.push(x);
            continue;
        }
        if(st1.empty()) {
            while(st2.empty() == false) {
                st1.push(st2.top());
                st2.pop();
            }
        }
        if(st1.empty() == false) {
            if(type == 2) {
                st1.pop();
            } 
            else if(type == 3) {
                std::cout << st1.top() << std::endl;
            }
        }
    }
}