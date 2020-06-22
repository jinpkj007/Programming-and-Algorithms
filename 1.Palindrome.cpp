#include<iostream>
using namespace std;


int main()

{

int n, rev=0,q,r;

cout<<"enter the number you want to check \n";
cin>>n;

int temp=n;

while(temp != 0)
{
q = temp/10;
r = temp%10;
rev = rev*10 + r;
temp =q;

}
cout<<rev;


return 0;
}
