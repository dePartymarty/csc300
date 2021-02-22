
#include "Card.hpp"

#include <iostream>
#include <string.h>

using namespace std;

void getContents(string str){
   int count = 0, i;
   int n = str.length();
   
   for (i = 0; i < n; i++) {
      
      if (str[i] == ']') {
         
         count--;
      }
      
      else if (str[i] == '[' && count != 0) {
         cout << str[i];
         count++;
      }
      
      else if (str[i] != '[') {
         cout << str[i];
      }
      
    

}
}



int main(int argc, char** argv)
{
    string str = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";

    getContents(str);
    return 0;
}