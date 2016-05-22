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
		//shell output
	cout<<"Compute Factorial"<<endl<<endl;

		//factorial examples
  cout<<" 0!="<<F(0)<<endl;
  cout<<" 1!="<<F(1)<<endl;
  cout<<" 2!="<<F(2)<<endl;
  cout<<" 3!="<<F(3)<<endl;
  cout<<"16!="<<F(16)<<endl;
}