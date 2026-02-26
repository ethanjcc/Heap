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
    else if (strcmp(input, "FILE") == 0) {
      int value;
      char name[100];
      cout << "what file do you want?: " << endl;
      cin >> name;
      ifstream file(name);
      if (!file) {
        cout << "Couldn't open" << endl;
      }
      else {
        int value;
        while (file >> value) {
        h.insert(value);
        }
      file.close();
      cout << "file fully uploaded" << endl;
      }
    }
    else if (strcmp(input, "DELALL") == 0) {
      h.removeAll();
    }
    
    else if (strcmp(input, "QUIT") == 0) {
      return 0;
    }
  }
  return 0;
}
