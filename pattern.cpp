#include <iostream>
using namespace std;

int main()
{
int count=0;
int n;
cin>> n;
  for (int i=1; i<=n; i++)
  {
    cout<<endl;
    int flag=0;

    for (int j=1; j<n-i+1; j++)
    cout<<" ";
    count =0;
    for (int j=1; j<=2*i-1; j++)
    {
      if (flag%2==0)
      cout<<" ";
      else
      {cout<<count;
      count++;}
      flag++;
    }
  }
  return 0;

}
