#include <iostream>
using namespace std;
int main()
{
    int a, b, flag, sum=0, count=0;
    cout<<"starting range: ";
    cin>>a;
    cout<<" ending range: ";
    cin>>b;
    cout << " numbers between "<< a << " and " << b <<" are :";
    for( ; a<b; ++a)
    {
        flag = 0;
        for(int i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << a <<" ";
            count++;
        }
    }
    cout<<"The total number  "<<a<<" to "<<b<<" is: "<<count;   // display result
    return 0;
}
