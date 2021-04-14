void customer()
{

  system("cls");
  printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
  printf("       1. Veg\n\n               2. Non-Veg\n\n               3. Soft\n\n               4. Chats\n\n               5. Back To Main Menu\n\n   Enter Your Choice  -->");
  int k;
  scanf("%d",&k);
  
  if(k==1)
  {
    system("cls");
    vegmenu();
  }
  else if(k==2)
  {
    system("cls");
    nonvegmenu();
  }
  if(k==3)
  {
    system("cls");
    //drinksMenu();
  }

  if(k==4)
  {
    system("cls");
    //chatsmenu();
  }
  else if(k==5)
  {
    system("cls");
    main();
  }
  else
  {
    printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
    customer();
  }
}


void nonvegmenu()
{
  int choice;
  int again;
  int quantity;
  double price=0;
  printf("                                    **********************************************\n");
  printf("                                                  Non Veg. Menu\n");
  printf("                                    **********************************************\n");
  char n;
  FILE *nmenu;
  nmenu = fopen("nonveg.txt","rt");
  while((n=getc(nmenu))!=EOF)
  {
    printf("%c",n);
  }
  printf("\n\nEnter What You Want :");
  printf("\n\n");
  scanf("%d",&choice);
  if(choice==1)
  {
    printf("Quantity : ");
    scanf(" %d",&quantity);
    total=total + 100*(quantity);
    printf("\n");
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      nonvegmenu();
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
  else if(choice==2)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 120*(quantity);
    printf("\n");
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      nonvegmenu();
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
  else if(choice==3)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 85*(quantity);
    printf("\n");
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      nonvegmenu();
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
  else if(choice==4)
  {
    printf("Quantity :");
    scanf(" %d",&quantity);
    total=total + 35*(quantity);
    printf("\n");
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf(" %d",&again);
    if(again==1)
    {
      printf("\n\n");
      nonvegmenu();
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
    printf("Wrong Input! Re-enter THe Correct Option\n\n");
    nonvegmenu();
  }
}
void details()
{
  char name1[20];
  char name2[20];
  long long int phone;
  char address[40];
  char landmark[30];
  printf("Please Give Your Contact Details \n");
  printf(" First Name : ");
  scanf("%s",name1);
  printf("Last Name : ");
  scanf("%s",name2);
  printf("Phone : ");
  scanf("%lld",&phone);
  printf("Address : ");
  scanf("%s",address);
  printf("Landmark : ");
  scanf("%s",landmark);
  printf("\n\n");
  printf("Your Entered Details Are --->\n");
  FILE *cust;
  cust = fopen("order.txt","a");
  fprintf(cust,"Order Placed By : %s %s\nPhone number : %lld\n",name1,name2,phone);
  fclose(cust);
  printf("    -->First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%lld \n    -->Address  :%s \n    -->Landmark  :%s \n",name1,name2,phone,address,landmark);
  printf("\n\n\n");
  printf("                          THANK YOU.. HAVE A GOOD DAY!!\n");
  
  printf("Press Any To The Main page.");
  if(getch())
  customer();
}



void vegmenu(void)
{
  int choice;
  int again;
  int quantity;
  
  double price=0;
  
  printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
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
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf("%d",&again);
    printf("\n");
    if(again==1)
    {
      printf("\n\n");
      vegmenu();
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
  }
  else if(choice==2)
  {
    printf("Quantity :");
    scanf("%d",&quantity);
    total=total + 60*(quantity);
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      vegmenu();
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
  }
  else if(choice==3)
  {
    printf("Quantity :  ");
    scanf("%d",&quantity);
    total=total + 45*(quantity);
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      vegmenu();
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
  }
  else if(choice==4)
  {
    printf("Quantity :");
    scanf("%d",&quantity);
    total=total + 35*(quantity);
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      vegmenu();
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
  }
  else if(choice==5)
  {
    printf("Quantity :");
    scanf("%d",&quantity);
    total=total + 150*(quantity);
    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
    scanf("%d",&again);
    if(again==1)
    {
      printf("\n\n");
      vegmenu();
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
      
  }
  else if(choice==6)
  {
    system("cls");
    customer();
  }
  else
  {
    printf("Wrong Input! Re-enter THe Correct Option\n\n");
    if(getch())
    vegmenu();
  }
}

