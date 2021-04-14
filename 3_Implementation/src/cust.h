#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void customer();

void vegmenu();
void nonvegmenu();
void details();
int getdata();
void front();

struct employee
{

	char name[30];
	int id;
	int dd; int mm; int yyyy;
	int YOJ;
	char place[20];
	float salary;
	char department[20];
	
	int quantity;
};
struct employee e;

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;
