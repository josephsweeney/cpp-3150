#include <iostream>


bool is_palindrome(std::string s) {
  int len = s.length();
  int i = 0;
  int j = len - 1;

  for(i; i < len/2; i++) {
    if(s[i] != s[j]) {
      return 0;
    }
    j--;
  }

  return 1;
  
}

int main()
{
   /*
    * This program is supposed to take (on the standard input) a string (C++)
    * and produce on its standard output a yes/no answer depending on 
    * whether the string is indeed a palindrome (reads the same both forward
    * and backward. 
    * For this first version, use all the C++ facilities covered so far to 
    * implement the code.
    */

  using namespace std;

  cout << "Enter a word: ";
  
  string s;
  cin >> s;
  cout << s << endl;

  
  cout << is_palindrome(s) << endl;
  return 0;
}
