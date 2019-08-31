#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menu();
void bus();
void cycle();
void riksha();
void showdata();
void delete();
int nor=0,nob=0,noc=0,amount=0,count=0;
void main()
{   
 while(1)
 {
    switch(menu())
    {
    	case 1:
    		bus();
    		break;
        case 2:
        	cycle();
        	break;
        case 3:
        	riksha();
        	break;
        case 4:
        	showdata();
        	break;
        case 5:
        	delete();
        	break;
        case 6:
        	exit(0);
        default :
        	printf("\n Invailid choice");
	}
	getch();
 }
} 
int menu()
{   
    int ch;
	printf("\n1. Enter bus:");
	printf("\n2. Enter cycle:");
	printf("\n3. Enter riksha:");
	printf("\n4. Show data:");
	printf("\n5. Delete Data");
	printf("\n6. Exit");
	printf("\n\n Enter your choice:\n");
	scanf("%d",&ch);
	return(ch);
}
void delete()
{   printf("\n Data deleted");
	nob=0;
	noc=0;
	nor=0;
	amount=0;
	count=0;
}
void showdata()
{
	printf("\n Number of bus=%d",nob);
	printf("\n Number of cycle=%d",noc);
	printf("\n Nember of riksha=%d",nor);
	printf("\n Total number of vehical=%d",count);
	printf("\n Total gain ammount=%d",amount);
}
void riksha()
{   printf("\n Entery successful");
   	nor++;
   	amount=amount+50;
   	count++;
}
void cycle()
{   printf("\n Entery successful");
	noc++;
	amount=amount+20;
	count++;
}
void bus()
{   printf("\n Entery successful");
	nob++;
	amount=amount+100;
	count++;
}
