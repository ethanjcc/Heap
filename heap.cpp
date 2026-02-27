#include "MaxHeap.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
  MaxHeap h;
  char input[20];
  int going = 1;
  while (going == 1) {
    cout << "what do you want" << endl;
    cin >> input;
    //adds a value to the array
    if (strcmp(input, "ADD") == 0) {
      int value;
      cout << "what number: " << endl;
      cin >> value;
      h.insert(value);
    }
    //prints all values in the order of a binary tree
    else if (strcmp(input, "PRINT") == 0){
      h.print();
    }
    //deletes the root
    else if (strcmp(input, "DELMAX") == 0) {
      int removed = h.removeMax();
      if (removed = -1) {
	cout << "its empty" << endl;
      }
      else {
	cout << "removed" << endl;
      }
    }
    //takes all numbers in a file and puts them into the array
    else if (strcmp(input, "FILE") == 0) {
      int value;
      char name[100];
      //asks for what file you want to open
      cout << "what file do you want?: " << endl;
      cin >> name;
      //opens file
      ifstream file(name);
      //if it dosent exist
      if (!file) {
        cout << "Couldn't open" << endl;
      }
      //insert all values into the heap
      else {
        int value;
        while (file >> value) {
        h.insert(value);
        }
      file.close();
      cout << "file fully uploaded" << endl;
      }
    }
    //deletes all numbers in the array
    else if (strcmp(input, "DELALL") == 0) {
      h.removeAll();
    }
    
    //prints a visual binary tree of all numbers in the array
    else if (strcmp(input, "PICTURE") == 0) {
      //int heap[101];
      int lastIndex = h.size + 1;
      int curIndex = 1;
      int depth = 0;
      //cout << lastIndex << endl;
      //cout << curIndex << endl;
      //cout << depth << endl;
      h.printTree(h.heap, lastIndex, curIndex, depth);
    }

    //quit
    else if (strcmp(input, "QUIT") == 0) {
      return 0;
    }
  }
  return 0;
}
