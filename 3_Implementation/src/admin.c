#include<stdlib.h>
#include<stdio.h>
#include "admin.h"


void menu()
{
	system("cls");
	int n;
	printf("\n\n          Welcome to the Food's Villa          \n");
	printf("-------------------------------------------------\n");
	printf("    1. Admin\n\n    2. Customer\n\n    3. Exit\n\n");
	printf("Enter your option\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		    admin();
		    break;

		case 2:
		     customer();
		     break;
        
        case 3: 
              exit(0);
		 default:
		   printf("Enter valid input\n");
		   break;
	}
}


void admin()
{
	  
	system("cls");
	printf("          1. Add New Employee\n\n          2. view records \n\n          3.View orders\n\n          4. Back To Main Menu \n\n             Enter Your Choice --->");
	int n;
	scanf("%d",&n);
		printf("\n\n");
	
	printf("\n\n");
	if(n==1)
	{ 	//printf("veg\n");

		addrecord();
	}
	
	else if(n==2)
	{
			printf("veg\n");
         viewrecord();
	}

	else if(n==3)
	{
		FILE *list;
		char viw;
		list = fopen("order.txt","rt");
		while((viw=fgetc(list))!=EOF)
		{
			printf("%c",viw);
		}
		fclose(list);
		printf(" Press ENTER to return to main menu");
      if(getc()==13)
      admin();
	}
	else if(n==4)
	{
		menu();
	}
	else
	{
		printf("Please Re-enter The Correct input");
		if(getch())
		admin();
	}
}
