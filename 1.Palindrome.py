#include<iostream>
using namespace std;


int main()

{

int n, rev=0;

cout<<"enter the number you want to check \n";
cin>>n;

int temp=n;
int q,r;

do
{

q = temp/10;
r = temp%10;
rev = rev*10 + r;
temp =q;

}while(temp/10 != 0);
cout<<temp;


return 0;
}
