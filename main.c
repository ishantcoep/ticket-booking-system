/*****************************************************************************
 * Copyright (C) ISHANT PAKMODE ishant22696@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 *****************************************************************************/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functions.h"

int main() {
	int w;
	char *admin_pass = "123456789";
	char a[8], b[10];
	
	
	
	printf("\t\t\tWelcome to Movie Ticket Booking System:\n");
	printf("\t\t\tNew to this system ??? Sign up for free !!!\n");
	printf("Choose :\n\t\t\t 1. Register/Sign up\n\t\t\t2. User Login\n\t\t\t3. Admin login\n");
	printf("Enter your choice:");
	scanf("%d", &w);
	switch(w) {
		case 1 :
			first_time();
			break;
		case 2 :
			repeated_user();
			break;
		case 3 :
			printf("Enter admin username :");
			scanf("%s", a);
			if(strcmp(a, "admin") == 0) {
				admin_page(); 
			}
			else {
				printf("You're not the admin !! Please Login or Register !!");
				main();
			}
			break;
		default :
			printf("Please enter a valid choice!!");
			break;

	}
	return 0;
}



