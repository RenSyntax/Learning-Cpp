#include <iostream>
#include <typeinfo>
using namespace std;


int main() {
  // learned about the auto type specifier (its seriously very useful)
  auto Hello{67.76};
  cout << Hello << endl;

  // learned about decltype specifier (can't think of when i will use it but still handy to have)
  // hard to remmember the syntax tho 😅
  decltype(54.58*454.24) expression;
  cout << typeid(expression).name() << endl;

  // also today i finished the basics and started with oprators, honestly very excited.
  // unary opreator
  int var{-45};
  cout << -var << endl;

  // binary opretor, most opretors i alreast know but this one is unique, called modulus.
  int var2{535};
  int var3{43};
  cout << var2 % var3 << endl;

  // also learned that dicision by 0.0 gives inf or NaN (dont know where 😅, but still good to know)
  cout << 3/0.0 << endl;

  return 0;

  
}
