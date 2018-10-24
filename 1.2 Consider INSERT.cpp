//1.2 Consider INSERT(text, position, string) and do following-
//INSERT(‘AAAAA’, 1, ‘BBB’)
#include<iostream>
#include<string.h>
using namespace std;
void INSERT(char text[], int position, char b[])
{
    int len1,len2,nsize;
    len1=strlen(text);
    len2=strlen(b);

    cout<<len1<<endl;
    cout<<len2<<endl;

    cout<<position;
    nsize=len1+len2;
    char temp;
    for(int i=nsize;i>0;i--)
    {
        if(i>position)
        {
            text[i]=b[len2];
                len2--;
            //break;
        }
        else{
        text[i]=text[i-len2];
        }
    }

}

int main()
{
    char str[]={"AAAAA"};
    int pos=2;
    char str2[]={"BBB"};

    INSERT(str,pos,str2);

    cout<<str<<endl;


    return 0;
}
