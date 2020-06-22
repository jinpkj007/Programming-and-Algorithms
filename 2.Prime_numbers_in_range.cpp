#include<iostream>

using namespace std;



int main()



{

int a,b,i,j;

cout<<"enter the first number in the range \n";
cin>> a;

cout<< "enter the second number in the range \n";
cin>>b;

//can add check to verify if b is greater than or equal to a

for ( i=a;i<=b;i++)
{
   int flag=0;
   for ( j=1;j<=i/2;j++)  //dont divide by 0
           {
               if(i%j==0)
                flag++;

            }
   if (flag==1)   //1 and itself
   cout<<i;




}



return 0;
}
