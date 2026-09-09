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

  int size = sizeof(str);

  for (int i = size - 1; i >= 0; i--){
    //str2.append(str[i])
    cout << str2 << endl;
  }
  
  
  return 0;
}
