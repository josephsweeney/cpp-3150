#ifndef __LIST_H
#define __LIST_H
#include <memory>
#include <iostream>

using namespace std;

template <class T>
class List {
public:
   class Node {
      friend class List<T>;
      // TODO
   };
private:
   // TODO
public:
   List() {}  // TODO
   ~List() {} // TODO
   void insert(const T& v) {} // TODO
   void append(const T& v) {} // TODO
   void forEach(std::function<void(const T&)> body) {} // TODO
   // TODO
   // Recall that you may have to add extra methods beyond the ones
   // listed here!
};


#endif
