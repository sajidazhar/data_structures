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
  
string postTopre(string str) { 
  stack<string> s; 
  int length = str.size(); 
  for (int i = 0;i<length;i++) { 
    if (isOperator(str[i])) { 
      string s1 = s.top();   s.pop(); 
      string s2 = s.top();   s.pop(); 
      string temp = str[i]+s2+s1; 
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
    cout<<postTopre(str);
    return 0;
}
