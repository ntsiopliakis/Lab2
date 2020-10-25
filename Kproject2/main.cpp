#include <iostream>

using myType = float;
myType var1 = 4'000'000'001.0f;

int main()
{
  using namespace std;
  var1+=1.0f;
  return 0;
}
