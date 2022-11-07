#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  if (num == 1) return 1;
  return FirstFactorial(num - 1) * num;

}

int main(void) {
 int num;
 cin >> num;
  // keep this function call here
  cout << FirstFactorial(num);
  return 0;

}
