//4.2_Using recursion calculate factorial of a user provided number
#include<iostream>

using namespace std;
int factf(int n);

int main()
{
    int n, fact;

    cout<<"Please Enter the Number "<<endl;
    cin>>n;
    fact=factf(n);
    cout<<"The factorial of "<<n<<" is "<<fact<<"\n";


    return 0;
}
int factf(int n)
{
    if(n==0)
    {
        return 1;

    }
    else return (n*factf(n-1));
}
