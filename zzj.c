#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void main(void)
{
char s = '=';//=号
char ch[5]="+-*/";
char symbol;//运算符
int  operand[2]={0};//两个操作数
int num;//题目数
int i;//循环变量

int symbol_index;//操作符索引,0->+  1->-  2->*  3->/

while(1)
{
printf("请输入你想得到几组随机题目(输入0退出程序):");
scanf("%d",&num);
if(!num)
{
break;
}
srand((unsigned int)time(0));

for(i=0; i<num; i++)
{
symbol_index = rand()%4;//产生操作符的索引
symbol = ch[symbol_index];//操作符
operand[0] = rand()%10+1;//第一个操作数
operand[1] = rand()%10+1;//第二个操作数

switch(symbol_index)
{
case 0:
printf("%d%c%d%c%d\n",operand[0],symbol,operand    [1],s,operand[0]+operand[1]);
break;

case 1:
printf("%d%c%d%c%d\n",operand[0],symbol,operand[1],s,operand[0]-operand[1]);
break;

case 2:
printf("%d%c%d%c%d\n",operand[0],symbol,operand[1],s,operand[0]*operand[1]);
break;

case 3:
printf("%d%c%d%c%f\n",operand[0],symbol,operand[1],s,operand[0]*1.0/operand[1]);
break;

default:
break;
}
}
}
}
