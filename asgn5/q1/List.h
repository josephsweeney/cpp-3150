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
    Node *next;
    Node(T&& v) {val = std::move(v); next = nullptr;}
    Node(const T& v) {val = v; next = nullptr;}
  };
private:
   // TODO
public:
  Node *head;
  List() { head = nullptr; }
  ~List() {
    Node *curr = head;
    while(curr != nullptr) {
      Node *n = curr->next;
      delete curr;
      curr = n;
    }
  }
  void insert(Node *n) {
    n->next = head;
    head = n;
  }
  void append(Node *n) {
    if(head == nullptr) {
      head = n;
    }
    else {
      Node *curr = head;
      while(curr->next != nullptr) {curr = curr->next;}
      curr->next = n;
    }
  }

  void insert(const T& v) {
    insert(new Node(v));
  }
  void insert(T&& v) {
    insert(new Node(std::move(v)));
  }

  void append(const T& v) {
    append(new Node(v));
  }
  void append(T&& v) {
    append(new Node(std::move(v)));
  }
 
  void forEach(std::function<void(const T&)> body) {
    Node *curr = head;
    while(curr != nullptr) {
      body(curr->val);
      curr = curr->next;
    }
  }
  // TODO
  // Recall that you may have to add extra methods beyond the ones
  // listed here!
};


#endif
