#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void main(void)
{
char s = '=';//=��
char ch[5]="+-*/";
char symbol;//�����
int  operand[2]={0};//����������
int num;//��Ŀ��
int i;//ѭ������

int symbol_index;//����������,0->+  1->-  2->*  3->/

while(1)
{
printf("����������õ����������Ŀ(����0�˳�����):");
scanf("%d",&num);
if(!num)
{
break;
}
srand((unsigned int)time(0));

for(i=0; i<num; i++)
{
symbol_index = rand()%4;//����������������
symbol = ch[symbol_index];//������
operand[0] = rand()%10+1;//��һ��������
operand[1] = rand()%10+1;//�ڶ���������

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
