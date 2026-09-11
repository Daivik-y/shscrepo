#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[81];
  char str2[81];
  
  cin.get(str, 81);
  
  //  str.Remove()
  
  cout << str << endl;

  int size = strlen(str);

  int j = 0;

  for (int i = size - 1; i >= 0; i--){
    str2[j] = str[i];
    j++;
  }

  str2[j] = '\0';

  cout << str2 << endl;
  
  
  return 0;
}
