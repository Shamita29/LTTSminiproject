#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#ifndef TYPES_H
#define TYPES_H

int getdata();
void menu();
void admin();
void details();
void customer();
void addrecord();


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
int t;


#endif
