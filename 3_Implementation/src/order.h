#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void administration();
void customer();

void addrecord();
void deleterecord();
void viewrecord();

void vegmenu();
void nonvegmenu();
void details();
int getdata();

struct employee
{

	char name[30];
	int id;
	int dd; int mm; int yy;
	int YOJ;
	char place[20];
	float salary;
	char department[20];
};
struct employee emp;

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;
