#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
  char str0[81];
  char str[81];
  char str2[81];
  
  cin.get(str0, 81);
  

  
  //cout << str0 << endl;

     int size = strlen(str0);

     int count = 0;
     
  for (int i = 0; i <= size-1; i++){
    if (isalnum(str0[i])) {
      str[count] = tolower(str0[i]);
      count++;
    }

  
    
    
  }
  
  str[count] = '\0';

  //cout << "fixedstr" << str << endl;  
      
     
  int j = 0;

  for (int i = count - 1; i >= 0; i--){
    str2[j] = str[i];
    j++;
  }

  str2[j] = '\0';

  //cout << str2 << endl;
  int cmp = strcmp(str, str2);

  if (cmp == 0) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a Palindrome" << endl;
  }
  
  
  return 0;
}
