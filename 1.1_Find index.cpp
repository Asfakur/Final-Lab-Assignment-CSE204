//1.1_Find index
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string T="A THING OF BEAUTY IS A JOY FOREVER.";
    cout<<"A THING OF BEAUTY IS A JOY FOREVER."<<endl;
    string test;
    cout<<"Please Enter the substring "<<endl;
    cin>>test;
    int pos = T.find(test);
    if(pos>-1)
        {
        cout<<"The index number is "<<pos+1<<endl;
        }
    else cout<<"The string did not match "<<endl;


  return 0;
}
