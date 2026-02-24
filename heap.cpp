#include "MaxHeap.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  MaxHeap h;
  char input[20];
  int going = 1;
  while (going == 1) {
    cout << "what do you want" << endl;
    cin >> input;

    if (strcmp(input, "ADD") == 0) {
      int value;
      cout << "what number: " << endl;
      cin >> value;
      h.insert(value);
    }
    else if (strcmp(input, "PRINT") == 0){
      h.print();
    }
    else if (strcmp(input, "DELMAX") == 0) {
      int removed = h.removeMax();
      if (removed = -1) {
	cout << "its empty" << endl;
      }
      else {
	cout << "removed" << endl;
      }
    }
    else if (strcmp(input, "QUIT") == 0) {
      return 0;
    }
  }
  return 0;
}
