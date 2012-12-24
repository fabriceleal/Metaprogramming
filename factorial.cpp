#include <iostream>
using namespace std;

// Declaration
template<int> struct factorial;


// Definition
template<int i>
struct factorial
{
  enum { value = i * factorial<i-1>::value };
};


template<>
struct factorial<0>
{
  enum { value = 1 };
};
/**/

int factOf4 = factorial<4>::value;

int main(int argc, char** argv)
{
  cout << factOf4 << endl;
  return 0;
}
