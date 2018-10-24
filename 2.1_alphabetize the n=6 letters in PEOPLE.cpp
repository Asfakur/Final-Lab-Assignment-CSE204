//Alphabet sorting by bubble sorting algorithm
//2.1_alphabetize the n=6 letters in PEOPLE
#include<iostream>

using namespace std;

int main()
{
    //int i,j;
    char str[7]={"PEOPLE"};
    char temp;
    int C=0, D=0;

    cout<<"The main word is = "<<str<<endl;
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            C++;
            if(str[j]>str[j+1])
            {
                temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
                D++;
            }
        }

    }

    cout<<"The alphabetized letter is "<<str<<endl;
    cout<<"The Comparisons C = "<<C<<endl;
    cout<<"The interchanges D = "<<D<<endl;

    return 0;
}
