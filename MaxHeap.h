//#include <iostream>

class MaxHeap{
 public:
  MaxHeap();
  void insert(int value);
  void print();
  int removeMax();
  void removeAll();
  void printTree(int heap[], int lastIndex, int curIndex, int depth);
  int heap[101];
  int size;
};
