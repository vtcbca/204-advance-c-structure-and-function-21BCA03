/* WAP to create inventary structure */
#include<stdio.h>
#include<conio.h>
struct inventory
{
     int iid,qty,rate;
     char iname[20];
}x[3];
void main()
{
     struct inventory x[3];
     int i;
     clrscr();
     for(i=0;i<3;i++)
     {
	     printf("\n enter item id:");
	     scanf("%d",x[i].iid);
	     printf("\n enter item name:");
	     scanf("%s",x[i].iname);
	     printf("\n enter item quantity:");
	     scanf("%d",x[i].qty);
	     printf("\n enteritem rate:");
	     scanf("%d",x[i].rate);
     }
     printf("\n..........................");
     for(i=0;i<3;i++)
     {
	    printf("\n id:%d",x[i].iid);
	    printf("\n iname:%s",x[i].iname);
	    printf("\n qty:%d",x[i].qty);
	    printf("\n rate:%d",x[i].rate);
     }
     getch();
}

