#include<iostream>

using namespace std;

int factorial(int);


int factorial(int n)
{
     if(n==0)
      return(1);

     return(n*factorial(n-1));

}

int main()


{
int i=0,n;
int fact=1;

cout<<"enter the number \n";
cin >> n;

//for (i=1;i<=n;i++)
//fact = fact*i;

//aternately 

fact = factorial(n);

cout<<fact;



}




