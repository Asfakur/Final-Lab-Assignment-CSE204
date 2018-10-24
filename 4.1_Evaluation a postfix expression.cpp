//4.1_Evaluation a postfix expression1ression
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <string.h>

using namespace std;

bool OperatorChack(char c); ///operator checking function
int Operation(int operand1, int operand2, char Operator);   ///do operator

int main()
{
    char expression1[100];
    char increment[15];
    int intstr;
    int i,len,j;
    int operand1, operand2, operated;

    stack<int> st;  ///stl stack declaration

    cout<<"The given Postfix expression is 5,6,2,+,*,12,4,/,- "<<endl;
    //expression1="5 6 2 + * 12 4 / - ";
    strcpy(expression1,"5 6 2 + * 12 4 / -");
    len = strlen(expression1);   ///length of the given string
    j = 0;
    for(i=0; i<len;i++){

        if(expression1[i]>='0' && expression1[i]<='9'){
            increment[j++] = expression1[i];
        }
        else if(expression1[i]==' '){
            if(j>0){
                increment[j] = '\0';
                intstr = atoi(increment);   ///atoi is a string operating
                st.push(intstr);            ///library function that converts string to integer
                j = 0;
            }
        }

        else if(OperatorChack(expression1[i])){
            operand1 = st.top();
            st.pop();
            operand2 = st.top();
            st.pop();
            operated=Operation(operand1, operand2, expression1[i]);

            st.push(operated);
        }
    }


    cout<<"The answer is "<<st.top()<<endl;

    return 0;
}
bool OperatorChack(char c)
{
    if (c=='+' || c=='-' || c=='*' || c=='/')
        return true;
    else
        return false;
}
int Operation(int operand1, int operand2, char Operator)
{
    int output;
    switch(Operator){
    case '+':
        output = operand2 + operand1;
        break;
    case '-':
        output = operand2 - operand1;
        break;
    case '*':
        output = operand2 * operand1;
        break;
    case '/':
        output = operand2 / operand1;
        break;
    }
    return output;
}
