// lab06.cpp
#include "Stack.cpp"
#include  <string>
int main()
{
  Stack<char> sc;
  char c; bool b;
  b=true;
  cout << "\nEnter the sequence: \n";
  cin >> c;
  while(c != 'x')
  {
    if(c == '(')
      sc.push(c);
    else
    {
      if(sc.empty())
      {
        b = false;
        break;
      }
      else
        sc.pop();
    }
    cin >> c;
  }
  if(!sc.empty() || b == false)
    cout << "\nThe parentheses are unbalanced.\n";
  else
    cout << "\nThe parentheses are balanced.\n";
  return 0;
}