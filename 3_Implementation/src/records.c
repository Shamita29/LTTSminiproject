#include<stdlib.h>
#include<stdio.h>
#include"types.h"

void addrecord()
{
    system("cls");
	fp=fopen("record.txt","a");
	if(getdata()==1)
	{
		fseek(fp,0,SEEK_END);
		fwrite(&emp,sizeof(emp),1,fp);
		fclose(fp);
		printf("\n\n");
		printf("The Record Is Successfully Saved ! !\n\n");
		printf("Save any more?(Y / N): ");
		if(getchar()=='n')
	    	admin();
		else
	    	system("cls");
	    	addrecord();
	}	
}

int checkid(int c)  
{
	fp=fopen("record.txt","r");
	while(fread(&emp,sizeof(emp),1,fp)==1)
	if((fp==NULL)||emp.id==c)
	   return 0; 
   else 
	   return 1;
     
}

int getdata()
{
	int is_leap = 0, flag = 1;
	printf("        Employee ID :\t");
	scanf("%d",&t);
	if(checkid(t)==1)
	{
		printf("\n\n");
		printf("\a        The Employee Record Already Exists !!!\a");
		getchar();
		menu();
		return 0;
	}
	emp.id=t;
	printf("        Employee Name : ");
	scanf("%s",emp.name);
	printf("        Date Of Birth (dd/mm/yyyy) :");
	scanf("%d/%d/%d",&emp.dd,&emp.mm,&emp.yy);
      
    if (emp.yy >= 1800 && emp.yy <= 9999) 
    {
        if ((emp.yy % 4 == 0 && emp.yy % 100 != 0) || (emp.yy % 400 == 0)) 
        {
            is_leap = 1;
        }
        if(emp.mm >= 1 && emp.mm <= 12)
        {
             if (emp.mm == 2)
            {
                if (is_leap && emp.dd == 29) 
                {
                    flag = 1;
                }
                else if (emp.dd > 28) 
                {
                    flag = 0;
                }
            }
            else if (emp.mm == 4 || emp.mm == 6 || emp.mm == 9 || emp.mm == 11) 
            {
                if (emp.dd > 30)
                {
                    flag = 0;
                }
            }
            else if(emp.dd > 31)
            {            
                flag = 0;
            }        
        }

        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }


  if(flag)
  {
	printf("        Year OF Joining :");
	scanf("%d",&emp.YOJ);
	printf("        Place :");
	scanf("%s",emp.place);
	printf("        Department :");
	scanf("%s",emp.department);
	return 1;
  }
  else
  {
  	printf("Enter valid details\n Press enter to retype or X to get back to menu");
    if(getch()==13) 
  	 addrecord();
  	else
  		admin();
  }
}



void viewrecord() 
{
    system("cls");
    printf("              Employee Details\n\n");
    printf("            DEPARTMENT        ID        EMPLOYEE NAME        D.O.B        Y.O.J        PLACE\n\n");
    
    fp=fopen("record.txt","r");
    while(fread(&emp,sizeof(emp),1,fp)==1)
    {
		printf("%s",emp.department);
		printf("%d",emp.id);
		printf("%s",emp.name);
		printf("%d/%d/%d",emp.dd,emp.mm,emp.yy);
		printf("%d",emp.YOJ);
		printf("%s",emp.place);
	}
      
      fclose(fp);
      printf(" Press ENTER to return to main menu");
      if(getch()==13) 
      admin();
      
}


