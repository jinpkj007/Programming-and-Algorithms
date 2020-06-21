#include <iostream>
using namespace std;


int main()
{

int sArray[100], dArray[100], n, index=0, k=0;

cout<<"# of elements? \n";
cin>>n;

for (int i=0;i<n;i++)     
	cin>>sArray[i];   // fill all the elements in source array


for (int j=0;j<n;j++)  // iterate over source array
 {
          for ( k=0 ;k<index;k++)  //iterate over destination array
             {
              if(sArray[j]==dArray[k])        //duplicte check
                 break;   
             }

           if( k == index) // no match in destination array
            {
              dArray[index] = sArray[j];   //replace
              index++;  // size of dest array
              
            }
 

}

for (int l=0; l<index;l++)
  cout<<dArray[l];

return 0;
}

