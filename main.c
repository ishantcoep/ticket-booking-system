#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functions.h"

void main() {
	int w;
	printf("\t\t\tWelcome to Movie Ticket Booking System:\n");
	printf("\t\t\tNew to this system ??? Sign up for free !!! ");
	printf("\t\t\tPress 1. Login\n\t\t\t2. Register/Sign up\n");
	scanf("%d", w);
	switch(w)
		CASE 1 :
			ticketfirsttimeuser();
			break;
		CASE 2 :
			ticketrepeateduser();
			break;
		default :
			printf("Please enter a valid choice!!");

}
