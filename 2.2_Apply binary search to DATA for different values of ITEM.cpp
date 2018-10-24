//2.2_Apply binary search to DATA for different values of ITEM
#include<iostream>

using namespace std;

int main()
{
    int DATA[13]={11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    int BEG=0, END=12, MID=(BEG+END)/2;
    int ITEM, LOC=NULL;

    cout<<"Please Enter the ITEM do you want to search : ";
    cin>>ITEM;
    cout<<endl;

    while(BEG<=END && DATA[MID]!=ITEM)
    {
        if(ITEM<DATA[MID])
        {
            END=MID-1;
        }
        else BEG=MID+1;

        MID=(BEG+END)/2;
    }
    if(DATA[MID]==ITEM)
    {
        LOC=MID;
    }
    else LOC=-1;

    if(LOC<0)
    {
        cout<<"The ITEM is not present in the DATA List "<<endl;
    }
    else cout<<"ITEM index is found "<<LOC<<endl;

    return 0;
}
