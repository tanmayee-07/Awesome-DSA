#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push();
void pop();
void display();
main()
{
top=-1;
printf("Enter the size of stack:\n");
scanf("%d",&n);
printf("STACK MANIPULATION\n\n");
printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
do
{
printf("\n Enter the choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
{
push();
break;}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\tEXIT\n");
break;
}
default:
printf("Invalid Choice\n");
}
}while(ch!=4);
}

void push()
{
if(top==n-1)
printf("\tSTACK OVERFLOW!\n");
else
{
printf("Enter a value to be pushed:\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}

void pop()
{
if(top==-1)
printf("\tSTACK UNDERFLOW\n");
else
{
printf("\tThe popped element is %d\n",stack[top]);
top--;
}

}

void display()
{
if(top>=0)
{
printf("The elements in Stack are:\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
printf("Enter Next Choice\n");
}
else
printf("The Stack is Empty\n");

}
