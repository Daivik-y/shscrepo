#include <iostream>

using namespace std;

int main()
{
  int oboard[3][3] = {{1,1,1},
		      {1,1,1},
		      {1,1,1}};
  //  cout << oboard[0][1];
  
  /* for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      
      cout << oboard[i][j] << "\n";
  }
  }
  */
 
  for (int i = 0; i < 3; i++){
    if (oboard[i][0] == oboard[i][1] == oboard[i][2] && oboard[i][0] == 1){
      
      cout << "win ";
    }
  }

  for (int k = 0; k < 3; k++){
    if (oboard[0][k] == oboard[1][k] == oboard[2][k] && oboard[0][k] == 1){

      cout << "win ";
    }

   
    //cout << oboard[i][0] << "\n";
  }
  
  return 0;
}
