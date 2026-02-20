#include "MaxHeap.h"
#include <algorithm>
//#include <iostream>

MaxHeap::MaxHeap() {
  size = 0;
}

//insert function
void MaxHeap::insert(int value){
  //increase size by 1 
  size++;
  heap[size] = value;
  int i = size;
  //check for if it is larger than the parent
  while (i > 1 && heap[i] > heap[i/2]) {
    std::swap(heap[i], heap[i/2]);
    i = i/2;
  }
}
