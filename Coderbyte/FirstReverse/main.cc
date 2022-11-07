#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
  return string(str.crbegin(), str.crend());
}

int main(void) {
  string str;
  getline(cin, str);
  // keep this function call here
  cout << FirstReverse(str);
  return 0;

}
