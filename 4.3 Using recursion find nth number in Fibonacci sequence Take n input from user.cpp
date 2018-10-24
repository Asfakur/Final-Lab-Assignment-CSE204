//4.3 Using recursion find nth number in Fibonacci sequence Take n input from user
#include<iostream>
#include<stdio.h>

using namespace std;

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int a;
    cout<<"Please enter the number " <<endl;
    scanf("%d", &a);
    printf("%d", fib(a));


    return 0;
}
