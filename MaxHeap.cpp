#include "MaxHeap.h"
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

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
    swap(heap[i], heap[i/2]);
    i = i/2;
  }
}

//print function
void MaxHeap::print(){
  //print every value
  for (int i = 1; i <= size; i++) {
    cout << heap[i] << " ";
  }
  cout << endl;   
}

//remove root
//help from copilot
int MaxHeap::removeMax(){
  if (size == 0){
    cout << "error" << endl;
    return 0;
  }
  //get root then move last number to root and remove 
  int maxValue = heap[1];
  heap[1] = heap[size];
  size--;
  int i = 1;
  int running = 1;
  while (running == 1) {
    int left = i * 2;
    int right = i * 2 + 1;
    //stop if there are no children
    if (left > size) {
      break;
    }
    //find a larger child
    int larger = left;
    if (right <= size && heap[right] > heap[left]){
      larger = right;
    }
    //stop if parent is larger
    if (heap[i] >= heap[larger]) {
      break;
    }
    //if not then keep going
    else {
      swap(heap[i], heap[larger]);
      i = larger;
    }
  }
  cout << maxValue << endl;
  return maxValue;
}

void MaxHeap::removeAll(){
  while (size > 0) {
    int removed = removeMax();
    cout << removed << " ";
  }
  cout << endl;
}
