#include<stdio.h>
#include<stdlib.h>
#include"cust.h"



FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;



void customer()
{   int n;
	printf("    1. Veg\n    2. Nonveg\n    3. Cold drinks\n    4. Cancel the order");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		         veg();
		         break;

		case 2:  
		          nonveg();
		          break;

		case 3:
		        printf("\n\n        Sorry for the inconvienve, soft drinks are not available        \n\n");
		        break;

		case 4: 
                printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
                break;
         
        default: 
                     printf(" Re-enter THe Correct Option\n\n");
                     if(getchar())
                       customer();
                   break;

  
  }
}



void veg()
{
  int choice;
  int again;
  int quantity;
  
  double price=0;
    char v;
  FILE *vmenu;
  
    vmenu=fopen("vegmenu.txt","rt");
  while((v=getc(vmenu))!=EOF)
        {
          printf("%c",v);
    }
         fclose(vmenu);
    printf("\n\nEnter What You Want :");
    printf("\n\n");
    scanf("%d",&choice);
  if(choice==1)
  {
    printf("Quantity :  ");
    scanf("%d",&quantity);
    total=total + 40*(quantity);
    printf("\n");
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf("%d",&again);
    printf("\n");
    if(again==1)
    {
       printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
      details();
    }
   else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==2)
  {
    printf("Quantity :");
    scanf("%d",&quantity);
    total=total + 60*(quantity);
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
  
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==3)
  {
    printf("Quantity :  ");
    scanf("%d",&quantity);
    total=total + 45*(quantity);
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
  
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==4)
  {
    printf("Quantity :");
    scanf("%d",&quantity);
    total=total + 35*(quantity);
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
  
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
 
  else if(choice==5)
  {
    system("cls");
    customer();
  }
  else
  {
    printf(" Re-enter THe Correct Option\n\n");
    if(getch())
    veg();
  }
}

void nonveg()
{
	int choice;
  int again;
  int quantity;
  char c;
  double price=0;
  printf("               Non Veg. Menu\n");
  printf("--------------------------------------------------\n");
  char n;
  FILE *f;
  f = fopen("nonveg.txt","r");
  c = fgetc(f);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(f);
    }
  printf("\n\nEnter your choice :");
  printf("\n\n");
  scanf("%d",&choice);
  if(choice==1)
  {
    printf("Quantity : ");
    scanf(" %d",&quantity);
    total=total + 100*(quantity);
    printf("\n");
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is :%.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==2)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 120*(quantity);
    printf("\n");
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is :%.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==3)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 85*(quantity);
    printf("\n");
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      // printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is :%.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
      details();
    }
    else if(again==3){
    	  printf(" \n\n  THANKYOU FOR YOUR VISIT HERE   \n\n");
    	  exit(1);
    	}
  }
  else if(choice==4)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 35*(quantity);
    printf("\n");
    printf("1. To Order Again :\n2. Get your bill\n3. Cancel the order\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      char ans;
      printf("veg(v) or nonveg(n):  \n");
      scanf("%s", &ans);
      switch(ans)
      {
      	case 'v': veg();
      	        break;
      	case 'n':
              nonveg();
              break;
       }
    }
    else if(again==2)
    {
      printf("Your Total Amount Is :%.2lf\n\n",total);
      int totl = total;
      FILE *ttl;
      ttl = fopen("order.txt","a");
      fprintf(ttl,"\nGrand Total : %d\n",totl);
      fclose(ttl);
      details();
    }
  }
  else if(choice==5)
  {
    system("cls");
    customer();
  }
  else
  {
    printf(" Re-enter THe Correct Option\n\n");
    nonveg();
  }
}

void details()
{
  char fname[20];
  long long int phone;
  char address[40];
  printf("Please Give Your Contact Details \n");
  printf(" First Name : ");
  scanf("%s",fname);
  printf("Phone : ");
  scanf("%lld",&phone);
  printf("Address : ");
  scanf("%s",address);
 FILE *cust;
  cust = fopen("order.txt","a");
  fprintf(cust,"Order Placed By : %s \nPhone number : %lld\n",fname,phone);
  fclose(cust);

  
  printf("\n\nThanks for the order! \n\nPress Any To The Main page.");
  if(getchar())
  customer();
}
