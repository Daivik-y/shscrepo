#ifndef Media_H
#define Media_H

#include <string>
using namespace std;

class Media {
 private:
  string title;
  int year;

 public:
  Media(string t. int y);

  //getter

  string getTitle();
  int getYear();
    
}
