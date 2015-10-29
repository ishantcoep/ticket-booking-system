#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functions.h"

int main() {
	int w, i;
	char *admin = "ishant";
	char *admin_pass = "123456789";
	char *a, *b;
	
	
	FILE *files[10];
	for (i = 0; i < 10; i++) {
		char filename[15];
		sprintf(filename, "show%d.txt", i);
		files[i] = fopen(filename, "w");
		fclose(files[i]);
	}
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
			if(strcmp(a, admin) == 0){
				printf("\nNow enter admin password :");
				scanf("%s", b);
				if(strcmp(a, admin_pass) == 0)
					printf("Welcome Mr. Admin !!");
					//admin_page(); //incomplete*******
			}
			else
				printf("You're not the admin !! Please Login or Register !!");
				main();
			break;
		default :
			printf("Please enter a valid choice!!");
			break;

	}
	return 0;
}



