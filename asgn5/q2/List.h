#ifndef __LIST_H
#define __LIST_H
#include <memory>
#include <iostream>

// authors: jds13019 rdp12004

using namespace std;
template <class T>
class List {
public:
   class Node {
      friend class List<T>;
      T val;
      unique_ptr<Node> next;
      Node(T&& v) {val = std::move(v); next = nullptr;}
      Node(const T& v) {val = v; next = nullptr;}
   };
private:
   // TODO
public:
   unique_ptr<Node> head;
   List() { head = nullptr; }
   ~List(){ head = nullptr; }
   void insert(unique_ptr<Node> n) {
     n->next = move(head);
     head = move(n);
   }
   void append(unique_ptr<Node> n) {
     if(head == nullptr) {
       head = move(n);
     }
     else {
       unique_ptr<Node> *curr = &head;
       while((*curr)->next != nullptr) {
	 curr = &(*curr)->next;
       }
       (*curr)->next = move(n);
     }
   }

   void insert(const T& v) {
     insert(unique_ptr<Node>(new Node(v)));
   }
   void insert(T&& v) {
     insert(unique_ptr<Node>(new Node(std::move(v))));
   }

   void append(const T& v) {
     append(unique_ptr<Node>(new Node(v)));
   }
   void append(T&& v) {
     append(unique_ptr<Node>(new Node(std::move(v))));
   }
 
   void forEach(std::function<void(const T&)> body) {
     unique_ptr<Node> *curr = &head;
     while(*curr != nullptr) {
       body((*curr)->val);
       curr = &(*curr)->next;
     }
   }
   // TODO
   // Remember that you may have to add methods to meet all the requirements. 
};

#endif
