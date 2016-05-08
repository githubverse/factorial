#include <iostream>

using namespace std;

	//compute factorial
int F(int n)
{
  if (n==0) return 1;
  else      return n*F(n-1);
}

main()
{
  cout<<F(0)<<endl;
  cout<<F(1)<<endl;
  cout<<F(2)<<endl;
  cout<<F(3)<<endl;
  cout<<F(16)<<endl;
}