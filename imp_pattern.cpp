#include <iostream>
using namespace std;
int main()
{
  int n,a=5,z=1;
  cin>>n;
  for (int i=0; i<n; i++)
  {
    cout<<endl;
      for (int j=0;j<n-i;j++)
      {
        cout<<" ";
      }
      for (int j=0; j<2*i-1; j++)
      {cout<<"*";}
  }
// reversing the pattern upside down

for (int i=n-1; i>=1;i--)
  {
    cout<<endl;

    for (int j=n; j>=i;j--)
    {
      cout<<" ";
    }

    for (int j=2; j<2*i-1; j++)
    {
      cout<<"*";
    }
  }



  cout<< " now here is square";
  int i=1;
  for (i; i<=n; i++)
{
  if (i==1 || i==n)
    {
      cout<<endl;
      for (int k=1; k<=n;k++)
    cout<<(" *");}
  else
  {
    cout<<endl;
    cout<<" *";
  for (int k=1; k<=n-1; k++)
    {cout<<"  ";}
    cout<<"*";}
}


  return 0;
}
