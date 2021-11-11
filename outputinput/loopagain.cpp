#include<iostream>
using namespace std;

int main()
{
	int i, j;
    for(i=1; i<=5; i++)           //  6<=5
    {
        for(j=i; j<5; j++)       //   5<5
        {
        	cout << " ";       //    "____*"
        }//                           ___**
        //                            __*_*
        //                            _*__*
        //                            *****
        for(j=1; j<=i; j++)//6<=5
        {
            if(i==5 || j==1 || j==i)//
            {
            	cout << "*";                
            }
            else
            {
               cout << " ";
            }
        }
        cout <<endl;
    }
    return 0;
}
