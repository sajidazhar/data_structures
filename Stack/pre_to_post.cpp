#include<stdlib.h>
#include <iostream> 
#include <stack> 
using namespace std; 
bool isOperator(char x) { 
  switch (x) { 
  case '+': 
  case '-': 
  case '/': 
  case '*': 
    return true; 
  } 
  return false; 
} 
  
string preTopost(string str) { 
  stack<string> s; 
  int length = str.size(); 
  for (int i = length - 1; i >= 0; i--) { 
    if (isOperator(str[i])) { 
      string s1 = s.top();   s.pop(); 
      string s2 = s.top();   s.pop(); 
      string temp = s1+s2+str[i]; 
      s.push(temp); 
    } 
    else { 
      s.push(string(1, str[i])); 
    } 
  } 
  return s.top(); 
}
int main(int argc,const char* argv[])
{
    string str;
    str=argv[1];
    cout<<preTopost(str);
    return 0;
}
