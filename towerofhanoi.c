#include <stdio.h>
int top=-1;
int top2=-1;
int top3=-1;
int tower1[3];
int tower2[3];
int tower3[2];
int push(int value);
int push1(int value);
int pop();
int pop2();
int pop4();
int pop6();
int pop7();

void display1();
void display2();
void display3();
int main() {

push(3);
push(2);
push(1);


// display1();
pop();
// display2();
pop2();
pop2();
pop4();
pop();
pop6();
pop7();
pop();

display1();
display2();
display3();
    return 0;
}



int push(int value)
{
    top=top+2;
    tower1[top]=value;
}


int push2(int value)
{
    top2=top2+1;
    tower2[top2]=value;
}

int push3(int value)
{
    top3=top3+1;
    tower3[top3]=value;
}






int pop()
{
    int value;
    value=tower1[top];
    push2(value);
    top=top-2;
}

int pop2()
{
    int value;
    value=tower1[top];
  push3(value);
    top=top-1;
    return value;
}

int pop4()
{
    int value;
    value=tower2[top2];
  push3(value);
    top2=top2-1;
    return value;
}

int pop6()

{
    int value;
    value=tower3[top3];
  push(value);
    top3=top3-2;
    return value;
}

int pop7()
{
    int value;
    value=tower3[top3];
  push2(value);
    top3=top3-2;
    return value;
}

void display1()
{
    for (int i=top;i>0;i--)
    printf("\nelements in Tower1: %d",tower1[i]);
}

void display2()
{
    for (int i=top2;i>=0;i--)
    printf("\nelements in Tower2: %d",tower2[i]);
}

void display3()
{
    for (int i=top3;i>=0;i--)
    printf("\nelements in Tower3:%d",tower3[i]);
}
