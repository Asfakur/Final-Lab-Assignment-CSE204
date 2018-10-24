//4.5_Implement different operations of a Queue (add, delete)
#include<iostream>

using namespace std;

void insertq(char Queue[], int& frontq, int& rearq, char ch);
void deleteq(char Queue[], int& frontq, int& rearq);
void showq(char Queue[], int frontq, int rearq);

int main(){
    char Queue[100];
    int frontq = 0 , rearq = 0;

    insertq(Queue, frontq,rearq, 'A');
    showq(Queue, frontq, rearq);
    insertq(Queue, frontq,rearq, 'B');
    insertq(Queue, frontq,rearq, 'C');
    showq(Queue, frontq, rearq);
    deleteq(Queue, frontq, rearq);
    deleteq(Queue, frontq, rearq);
    insertq(Queue, frontq,rearq, 'F');
    deleteq(Queue, frontq, rearq);
    insertq(Queue, frontq,rearq, 'G');
    insertq(Queue, frontq,rearq, 'H');
    deleteq(Queue, frontq, rearq);
    deleteq(Queue, frontq, rearq);
    insertq(Queue, frontq,rearq, 'K');
    deleteq(Queue, frontq, rearq);
    deleteq(Queue, frontq, rearq);
    deleteq(Queue, frontq, rearq);
    showq(Queue, frontq, rearq);

    return 0;
}
void insertq(char Queue[], int& frontq, int& rearq, char ch)
{
    if(rearq >= 100){
        cout<<"The Queue is full"<<endl;
        return;
    }
    else{
        Queue[rearq] = ch;
        rearq++;
    }
}
void deleteq(char Queue[], int& frontq, int& rearq)
{
    if(frontq > rearq){
        cout<<"The Queue is empty."<<endl;
        return;
    }
    frontq++;
    cout<<"Front is deleted...."<<endl;
}
void showq(char Queue[], int frontq, int rearq)
{
    cout<<"Queue is ";
    for(int i=frontq; i<=rearq; i++){
        cout<<Queue[i]<<" ";
        cout<<endl;
    }
}
