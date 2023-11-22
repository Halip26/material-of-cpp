// Program to find sum of all powers of 2 till the user input number
#include<iostream>

using namespace std;

int main() {
  int i,n,sum=0;
  
  do {
    cout<<"\nEnter The Number Upto Which Terms Should Be Generated: ";
    cin>>n;

    if(n<0){
        cout<<"\nNegative numbers not allowed!\n";
    }

  } while(n<0);

  cout<<"\nSeries Generated: ";
  
  for(i=1;i<=n;i*=2)
  {
  sum+=i;
  cout<<i<<" ";
  }
  cout<<"\n\nSum Of Above Series: ";
  cout<<sum <<endl;

  return 0;
}