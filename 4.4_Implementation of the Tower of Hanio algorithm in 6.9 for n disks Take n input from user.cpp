//4.4_Implementation of the Tower of Hanio algorithm in 6.9 for n disks Take n input from user
#include <iostream>
using namespace std;

void towerHanoi(int N, char BEG, char AUX, char END);

int main()
{
    int n;

    cout<<"Please Enter the quantity of disk "<<endl;
    cin>>n;
    cout<<"The hanoi moves are given bellow "<<endl;
    towerHanoi(n, 'A', 'B', 'C');
    return 0;
}
void towerHanoi(int N, char BEG, char AUX, char END)
{
    if (N == 1)
    {
        cout<<N<< " moves  from "<<BEG<<" to "<<END<<endl;
        return;
    }
    towerHanoi(N-1,BEG,END,AUX);
    cout<<N<<" moves from "<<BEG<<" to "<<END<<endl;
    towerHanoi(N-1,AUX,BEG,END);
}
