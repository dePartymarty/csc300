
#include "Card.hpp"

#include <iostream>
#include <string.h>

using namespace std;

void getContents(string str){
   int count = 0, i;
   int n = str.length();
   
   for (i = 1; i < n - 1; i++) {
      
      if (str[i] == ']') {

         cout << str[i];
         count++;
      }
      
      else if (str[i] == '[' && count != 0) {
         count--;
      }
      
      else if (str[i] != ')') 
         cout << str[i];
   }
      if (count != 0){
      for (i = 0; i < count; i++)
      cout << ")";
      }
    

}




int main(int argc, char** argv)
{
    string str = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";

    getContents(str);
    return 0;
}