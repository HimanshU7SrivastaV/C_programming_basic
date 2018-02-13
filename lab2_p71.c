#include<stdio.h>
#include<conio.h>
struct ABC
{
int a;
float b;
char c;
};
void main()
{
struct ABC *ptr=(struct ABC *)0;
ptr++;
printf("Size of structure is: %d",*ptr);
getch();
return(0);
}
