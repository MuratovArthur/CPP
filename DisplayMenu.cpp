#include <iostream>
#include <string>
using namespace std;

void diplayMenu() {
  cout << "1: Read data from the customer file" << endl;
  cout << "2: Add a customer" << endl;
  cout << "3: Search for a customer" << endl;
  cout << "4: Terminates the program" << endl;
}

void ReadFile() {
  cout << "Read file code";
}

int main() {
  const int i = 3;
  diplayMenu();
  int NoOfAttempts = 0;
  int Choice;

  do {
    cout << "Enter choice (1..4): ";
    cin >> Choice;
    NoOfAttempts++;
  }
  while (!((Choice >= 1 && Choice <= 4) || NoOfAttempts == i));

  if (Choice == 1) {
    ReadFile();
  } else if (Choice == 2) {
    cout << "Add customer code";
  } else if (Choice == 3) {
    cout << "Search customer code";
  } else {
    exit(1);
    return 1;
  }

  return 0;
}
