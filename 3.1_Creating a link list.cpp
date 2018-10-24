//3.1_Creating a link list
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
class Node
{
public:

    int data;
    Node *link;
};

Node *head;
void insert();
void print();
int finder(int item);
void remover(int item);
void clrscr();

int main()
{
    head=NULL;

    start:
    clrscr();
    cout<<"*****The main Menu*****\n";
    cout<<"0....Exit\n1....Insert data to the list\n2....Show the elements\n3....find an element\n";
    cout<<"4....Delete an element"<<endl;
    cout<<"\nPlease enter the key for what operation you want to do: ";

    int n;
    cin>>n;
    if(n==0){
        return 0;
    }
    else if(n==1)
    {   clrscr();
        insert();
        cout<<"\n\n\nPress any key for the main menu:\n";
        getch();
        goto start;
    }
    else if(n==2)
    {
        clrscr();
        print();
        cout<<"\n\n\nPress any key for the main menu:\n";
        getch();
        goto start;
    }
    else if(n==3)
    {
        clrscr();
        cout<<"Please enter the item that you want to search "<<endl;
        int p;
        cin>>p;
        finder(p);
        cout<<"\n\n\nPress any key for the main menu:\n";
        getch();
        goto start;
    }
    else if(n==4)
    {
        clrscr();
        cout<<"Please enter the item do you want to delete "<<endl;
        int q;
        cin>>q;
        remover(q);
        cout<<"\n\n\nPress any key for the main menu:\n";
        getch();
        goto start;
    }






    return 0;
}


void insert()
{
    int n;
    cout<<"Please enter the quantity of integer "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cout<<"Please enter the "<<i+1<<"th value "<<endl;
        cin>>value;

        Node *temp=new Node;
        temp->data=value;

        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            Node *t;
            t=head;
            while(t->link!=NULL){
                t=t->link;
            }
            t->link=temp;
        }
    }
}
void print()
{
    cout<<"This list contains the given Data "<<endl;
    Node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}

int finder(int item)
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(item==temp->data)
        {
            cout<<"The item is present in the list Item = "<<temp->data<<endl;
            //LOC=temp->link;
            return 0;
        }
        else temp=temp->link;

    }
    cout<<"Sorry! item is not present in the list"<<endl;

    return 0;


}
void remover(int item)
{
    Node* temp = head;
    Node* next = temp;
    while(temp != NULL) {
        if(temp->data == item)
        {
            break;
        }
        else {
            next = temp;
            temp = temp->link;
        }
    }
    if(temp == NULL)
    {
        cout << "Item is not found in the list\n";
    }
    else {
        cout << "The Node has been deleted\n";
        delete temp;
        temp = next->link;
    }
}
void clrscr()
{
    system("@cls||clear");
}
