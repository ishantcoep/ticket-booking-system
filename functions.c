#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functions.h"


char *seatbooking(int a, int b, int d) {
	int i, j, k, l, m, n, o, v = 65, g, f;
	char str[3], c[2];
	int q = 0;
	FILE *fp;
	char *ch;
	
	
	printf("Now please select your seats:\n");
	printf("Enter the row number (A, B, C, D, E):\n");
	printf("Enter 1 for row A\n2 for row B\n3 for row C\n4 for row D\n5 for row E\n");
	scanf("%d", &f);
	
	
	
	switch(f) {
		case 1: 
			
			for(k = 0; k < 20; k++) {
				printf("%s\t", show[a].seat_nums[0][k]);
			}
				
			
			//arraynavigation(a); //incomplete********************			
			printf("Enter the seat number(Enter the number which is not starred !!):");
			scanf("%d", &g);
			fp = fopen(filename, "w");
			d = 65;
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					if(strcmp(show[a].seat_nums[i][j], "*") != 0) {
						show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
						strcpy(show[a].seat_nums[i][j], c);
					}
					if(i == 0 && j == g) {
						strcpy(ch, show[a].seat_nums[0][g]);
						strcpy(show[a].seat_nums[0][g], "*");   //replaces this string as "*" in the file
					}
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]); //prints the double array to the file
				}
				v++;
			}
			fclose(fp);
			return ch;	
			break;
    		case 2:
			for(l = 0; l < 20; l++) {
				printf("%s   ", show[a].seat_nums[1][l]);
			}	
			d = 65;				
			printf("Enter the seat number(Enter the number which is not starred !!):\n");
			scanf("%d", &g);
			fp = fopen(filename, "w");
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20 ; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					if(strcmp(show[a].seat_nums[i][j], "*") != 0) {
						show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
						strcpy(show[a].seat_nums[i][j], c);
					}
					if(i == 1 && j == g) {
						strcpy(ch, show[a].seat_nums[1][g]); 						
						strcpy(show[a].seat_nums[1][g], "*");
						 
					}
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]);
						
				}
				v++;
			}
	 		fclose(fp);
			return ch;
			break;
    		case 3:
			for(m = 0; m < 20; m++) {
				printf("%s   ", show[a].seat_nums[2][m]);
			}	
			d = 65;				
			printf("Enter the seat number(Enter the number which is not starred !!):\n");
			scanf("%d", &g);
			fp = fopen(filename, "w");
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20 ; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					if(strcmp(show[a].seat_nums[i][j], "*") != 0) {
						show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
						strcpy(show[a].seat_nums[i][j], c);
					}
					if(i == 2 && j == g) {
						strcpy(ch[d], show[a].seat_nums[2][g]);						
						strcpy(show[a].seat_nums[2][g], "*");
						  
					}
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]);
						
				}
				v++;
			}
			fclose(fp);
			return ch;	
			break;
    		case 4:
			for(n = 0; n < 20; n++) {
				printf("%s   ", show[a].seat_nums[3][n]);
			}	
			d = 65;				
			printf("Enter the seat number(Enter the number which is not starred !!):");
			scanf("%d", &g);
			fp = fopen(filename, "w");
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20 ; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					if(strcmp(show[a].seat_nums[i][j], "*") != 0) {
						show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
						strcpy(show[a].seat_nums[i][j], c);
					}
					if(i == 3 && j == g) {
						strcpy(ch[d], show[a].seat_nums[3][g]); 						
						strcpy(show[a].seat_nums[3][g], "*");
						
					}
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]);
						
				}
				v++;
			}
			fclose(fp);
			return ch;				
			break;
		case 5:
			for(o = 0; o < 20; o++) {
				printf("%s   ", show[a].seat_nums[4][o]);
			}
			d = 65;				
			printf("Enter the seat number(Enter the number which is not starred !!):");
			scanf("%d", &g);
			fp = fopen(filename, "w");
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20 ; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					if(strcmp(show[a].seat_nums[i][j], "*") != 0) {
						show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
						strcpy(show[a].seat_nums[i][j], c);
					}
					if(i == 4 && j == g) {
						strcpy(ch[d], show[a].seat_nums[3][g]); 						
						strcpy(show[a].seat_nums[4][g], "*");
						 
					}
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]);
						
				}
				v++;
			}
			fclose(fp);
			return ch;				
			break;
		default :
			printf("Please enter a valid row number !! ");
			seatbooking(a, b, d);
			fclose(fp);			
			break;
			
	}
	
}


void show_display() {
	
	int m = 0, j;
	char str[200];
	
	char *tmp;
	FILE *s = fopen("shows.txt", "r");
	
	while (fgets(str,200,s)) { 
		
		tmp = strtok(str,"\t");
		
		strcpy(show[m].showname, tmp);

                tmp = strtok(NULL,"\t");
		
		show[m].time = atoi(tmp);

                tmp = strtok(NULL,"\t");
		show[m].screen_num = atoi(tmp);

                tmp = strtok(NULL,"\t");
		show[m].price = atoi(tmp);

		tmp = strtok(NULL,"\n");             
		show[m].seats = atoi(tmp);

                m++;							//prints the file data to the corresponding arrays
	}
	fclose(s);

	for(j = 0; j < m; j++) {                                       //prints the arrays on the screen
		printf("\t%d. %s\t%d\t%d\t%d\t%d\n", j+1, show[j].showname, show[j].time, show[j].screen_num, show[j].price, show[j].seats);
	}
}


void ticketarray(int a) {
		
	int i, j;
	FILE *fp;
	char filename[15];
	sprintf(filename, "show%d.txt", a);
	
	fp = fopen(filename, "r");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 20; j++) {
			fscanf(fp, "%s\t", show[a].seat_nums[i][j]);
		}
	}
	
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 20; j++) {
			printf("%s   ", show[a].seat_nums[i][j]);
		}
		printf("\n");
	}
}		


void ticketbookingandpayment() {
	int a, b, d, g, i, h, c = 0, j, m = 0, t;
	char *e, *f, *s;
	char str[120];
	char *tmp;
	FILE *fp;
	char *ch;
	char filename[15];
	
	
	//scan the contents of show.txt, login_ids.txt in the respective arrays before proceeding
	
	printf("Select the show for which u want to book tickets for :\n");
	
	show_display();

	/*printf("Please enter the current time in the 24-hour format:\n");
	scanf("%d", j);
	if(j > 12) {
		printf("Today's show after %d:00 :\n", j-12);
	}
	printf("Today's shows after %d:00 :", j);
	time_sorted = fopen("timesorted.txt", "r");   //incomplete********

	while(show[i].time != NULL) {
		if(strcmp(j, show[i].time) < 0) {
			fprintf(time_sorted, "%s\t%s\t%s\n", show[i].showname, show[i].time, show[i].price);
			printf("%d. Showname:%s\tTime:%s\tPrice:%d\n", i+1, show[i].showname, show[i].time, show[i].price);
			i++;
		}
	}*/
	
	printf("Enter your choice :");
	scanf("%d", &h);
	a = h - 1;
	
	sprintf(filename, "show%d.txt", a);
	
	fp = fopen(filename, "a+");
	
	if(fp == NULL) {
		printf("\nMovie is being cancelled for today !! Try anoter show !! sorry for the inconvinience caused !\n");
		ticketbookingandpayment();
		return;
	}
	else {
		show[a].seat_nums[0][0] = (char *)malloc(4 * sizeof(char));
		
		while(fscanf(fp, "%s", show[a].seat_nums[0][0]) != EOF ) {
		q = -1;
		}
		fclose(fp);
		
		
		if(q == 0) {
			printf("You are the first person to book a ticket for this show !!\n");
			fp = fopen(filename, "w");
			d = 65;
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					sprintf(str, "%d", j+1);
					sprintf(c ,"%c", v);
					strcat(c, str);
					show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1));	
					strcpy(show[a].seat_nums[i][j], c);
					fprintf(fp, "%s\t", show[a].seat_nums[i][j]);
					
				}
				v++;
			}
			fclose(fp);
		}
		fp = fopen(filename, "r");
			 for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
				show[a].seat_nums[i][j] = (char *)malloc(4 * sizeof(char));
				fscanf(fp, "%s\t", show[a].seat_nums[i][j]); 
			}
		}
		 
		fclose(fp);
	}
	
	printf("Enter the number of tickets:");
	scanf("%d", &b);
		
	for(d = 0; d < b; d++) {	
		if(show[a].seats > b) {
			printf("Enter the name of %d viewer:", d+1);
			scanf("%s", show[a].seat[(show[a].seats)].name);
			
		        strcpy(ch, seatbooking(a, b, d)); 
			printf("You have successfully booked the tickets !! Your seats have been confirmed :\n");
			ticketarray(a);
			show[a].seats--;   //seat number counting and storing ?????*****************
		}			
		else { 
			printf("The show you are trying to book is housefull !! Please select any other show timing !!");
			ticketbookingandpayment();
			break;
		}
	}

	printf("please enter your username !");
	scanf("%s", s);
	while(c < m) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, s) == 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!\n");
			t = 1;
			break;           
		}
		c++;
		}
	if(t != 1) { 
		printf("Username not found.Login once again !!\n");
		ticketbookingandpayment();
		}
	passwordcheck(c);

	

	
	printf("Congratulations, You have successfully booked your tickets for %d members !! Please carry your ticket with you while coming!!\n", b);
	printf("Your ticket :\n");
	ticketprint(a, b, ch);          //check whether the ticket details has been updated or not
}

	

void ticketdisplay() {
	int a;
	printf("\t\t\t1. Book tickets\n");
	printf("\t\t\t2. Cancel tickets\n");
	printf("\t\t\t3. Rate and comment on a movie\n");
	printf("\t\t\t4. Edit your personal details\n");
	
	printf("Enter the choice you want to do:");
	scanf("%d", &a);
	
	switch(a) {
		case 1 :
			ticketbookingandpayment();
			break;
		case 2 :
			//ticketcancellation(struct );
			break;
			//incomplete***
		case 3 :
			//rate_movie(struct movie);
			break;
			//incomplete***
		case 4 :
			//edit_details(struct details);
			break;
			//incomplete***
		default :
			printf("Enter a valid choice! Enter again !");
			ticketdisplay();
			break;
	}
		
}


void first_time() {
	int i = 0, j = 0, k = 0, l = 0, n = 0, w;
	int m = 0;
	char str[200];
	char *tmp;
	
	
	FILE *fp;
	char a[15], b[15], c[15], d[30], e[10], f[15];

	fp = fopen("login_ids.txt", "a+");
	if(fp == NULL) {
		printf("File opening failed !");
	}
	
	while (fgets(str,200,fp)) { 
		
		tmp = strtok(str,"\t");
		
		strcpy(login[m].firstname, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].lastname, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].username, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].email, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].phonenum, tmp);
                
                tmp = strtok(NULL,"\n");
		
                strcpy(login[m].password, tmp);
                
                m++;							//prints the file data to the corresponding arrays
	}
	
	
	fclose(fp);
	
	printf("You are a new user to us. Please register before continuing !!\n\n");
	
	printf("Enter Your First Name :");                                     //takes first name
	scanf("%s", a);
	

	printf("\nEnter Your Last Name :");                                       // takes last name
	scanf("%s", b);
	

	printf("\nEnter Your Username (should not contain a space) :");          //takes username and checks wheter it is repaeted or not
	scanf("%s", c);
	while(j < m) {
		if(strcmp(c, login[j].username) == 0) {
			printf("This username already exists. Enter new username.");
			scanf("%s", c);
		}
		j++;
	}

	printf("\nEnter Your Email ID :");                                       //takes email id form the user and checks whether repeated
	scanf("%s", d);
	while(k < m){
		if(strcmp(d, login[k].email) == 0) {
			printf("This email id already exists. Enter new email id.");
			scanf("%s", d);
		}
		k++;
	}

	printf("\nEnter your phone number* (Optional) :");                        //takes phone number and checks if it is repeated or not
	scanf("%s", e);
	while(l < m) {
		if(strcmp(e, login[l].phonenum) == 0) {
			printf("This phone number already exists. Enter new phone number.");
			scanf("%s", e);
		}
		l++;
	}

	printf("\nCreate a password :");                                         //creates a unique password for every username
	scanf("%s", f);
	if(strlen(f) < 5) {                   					//checks the length of password (should be greater than 5)
		printf("Your password is too short. Try a new one !!\n");
		printf("Renter the password (should be more than 5 characters!) :");
		printf("New password:");
		scanf("%s", f);	
	}
	fp = fopen("login_ids.txt", "a");
	fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", a, b, c, d, e, f);           //prints everything in a file named 'login_ids.txt'
	fclose(fp);
	
	
	
	printf("Please Enter Your username and password again!!");
	repeated_user();       // Enters the repeated user function and then continues it from there

}


void repeated_user() {
	int c = 0, m = 0, t = 0;  
	char str[200];
	char *tmp;
	char a[10];
	
	FILE *fd;
	
	printf("\n\t\t\tWelcome to the login page !!\n");
	fd = fopen("login_ids.txt", "r");
	
	while (fgets(str,200,fd)) { 
		
		tmp = strtok(str,"\t");
		
		strcpy(login[m].firstname, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].lastname, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].username, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].email, tmp);

                tmp = strtok(NULL,"\t");
		
		strcpy(login[m].phonenum, tmp);
                
                tmp = strtok(NULL,"\n");
		
                strcpy(login[m].password, tmp);
                
                m++;							//prints the file data to the corresponding arrays
	}
	
	fclose(fd);

	printf("Enter your username :");
	scanf("%s", a);
	while(c < m) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, a) == 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!\n");
			t = 1;
			break;           
		}
		c++;
		}
	if(t != 1) { 
		printf("Username not found.Login once again !!\n");
		repeated_user();
		}
	passwordcheck(c);
	
	printf("Please enter the choice you want to do :");
	ticketdisplay(); 
}
void passwordcheck(int c) {
	char b[15];
	printf("Enter your password :");
	scanf("%s", b);
	
	if(strcmp(login[c].password, b) == 0)
		printf("Password matched !!\n");
	else	
		printf("Password is Incorrect !!\n");
	}

void ticketprint(int a, int b, char **ch) {
	FILE *fp;
	int i, j, d;
	char filename[15];
	sprintf(filename, "show%d.txt", a);
	fp = fopen(filename, "r");
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 20; j++) {
			fscanf(fp, "%s\t", show[a].seat_nums[i][j]);
		}
	}
	fclose(fp);
	for(d = 0; d < b; d++) {
	printf("\n\n\n\t\t\t****************************************\n\t\t\tNAME OF THE MOVIE:%s \n\t\t\tSEAT NUMBER : %s\n\t\t\tTIME:%d \n\t\t\tSCREEN NO.: %d \n\t\t\tTOTAL PRICE: %d \n\t\t\t****************************************\n", show[a].showname, ch, show[a].time, show[a].screen_num, b*show[a].price); //printing ticket seat number gives problem
	}

	printf("\n\t\t\tThank You for booking %d tickets from our system !! Have a happy movie !\n", b);
	printf("\n\t\t\tPlease do come back for more tickets and movies !\n");
}


/*void admin_page() {
	int b;
	char *a;
	int m = 0, j, g;
	char str[200];
	char *tmp, *c, *d, *e, *f;
	printf("\nEnter your secret password !!\n");
	scanf("%s", a);
	if(strcmp(a, "ishant@123") == 0)
		printf("Password is correct");
	else
		printf("The password you have typed is wrong !! Please login again !");
		admin_page();
		break;
	printf("\n\t\t\t\tWelcome Admin");
	
	printf("\n\t\t\t1.Enter new movie details\n\t\t\t2.List of the members\n\t\t\t3.List of the viewers of a movie\n\t\t\t4.Remove the movie from the list\n\t\t\t5.Change password");
	printf("Enter the choice you want to do :");
	scanf("%d", b);
	
	switch (b) {
		case 1 :
			s = fopen("shows.txt", "a+");
			printf("\nEnter the name of the movie :");
			scanf("%s", c);
			printf("\nEnter the time of the movie :");
			scanf("%s", d);
			printf("\nEnter the screen number :");
			scanf("%s", e);
			printf("\nEnter the price of the movie :");
			scanf("%s", f);
			printf("Enter the number of tickets :");
			scanf("%d", g);
			fprintf(fp, "%s\t%s\t%s\t%s\t%s", c, d, e, f);
			printf("\n\t\t\tUpdate successfull !!!\n");
			fclose(s);
			break;
		case 2 :
			s = fopen("login_ids.txt", "r");
				while (fgets(str,200,fd)) { 
		
					tmp = strtok(str,"\t");
		
					strcpy(login[m].firstname, tmp);

                			tmp = strtok(NULL,"\t");
		
					strcpy(login[m].lastname, tmp);

                			tmp = strtok(NULL,"\t");
		
					strcpy(login[m].username, tmp);

                			tmp = strtok(NULL,"\t");
		
					strcpy(login[m].email, tmp);

                			tmp = strtok(NULL,"\t");
		
					strcpy(login[m].phonenum, tmp);
                
                			tmp = strtok(NULL,"\n");
		
                			strcpy(login[m].password, tmp);
                			printf("%s\t%s\t%s\t%s\t%s\t%s\n", login[m].firstname, login[m].lastname, login[m].username, login[m].email, login[m].phonenum, login[m].password);
                			m++;	                   //prints the file data to the corresponding arrays
				}
			
			break;
		case 3 :
			viewer_list(a);
			break;
		case 4 :
			remove_movie(a);
			break;
		case 5 :
			admin_pass_change();
			break;
		default :
			printf("Enter a valid choice !!");
			admin_page();
			break;
	}

}	
*/


char *arraynavigation (int a, char *ch) {
	
	int b, i, j;
	char **p;
	strcpy(ch, show[a].seat_nums[0][0]);   //should be declared in the calling function
	p = *(show[a].seat_nums); //should be declared in the calling function
	
	printf("Enter '1' for up----'2' for down----'3' for left----'4' for right----'5' to confirm the seat\n");
	scanf("%d", &b);
	
	switch (b) {
		case 1 :
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					if(strcmp(ch, show[a].seat_nums[i][j]) == 0) {
						t = i-1;
					}
				}
			}
			if(t < 0) {
				printf("Cannot go further up !!");
				arraynavigation(a, ch);
				break;	
			}
			else {
				for(i = 0; i < 5; i++) {
					for(j = 0; j < 20; j++) {
						if(j == t) {
							printf("[%s]\t", show[a].seat_nums[i][t]);
							strcpy(ch, show[a].seat_nums[i][t]);
						}
						else {
							printf("%s\t", show[a].seat_nums[i][j]);
						}
					}
				}
			}
			arraynavigation(a, ch);
			break;

		case 2 :
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					if(strcmp(ch, show[a].seat_nums[i][j]) == 0) {
						t = i+1;
					}
				}
			}
			if(t >= 20) {
				printf("Cannot go further down !!");
				arraynavigation(a, ch);
				break;	
			}
			else {				
				for(i = 0; i < 5; i++) {
					for(j = 0; j < 20; j++) {
						if(j == t) {
							printf("[%s]\t", show[a].seat_nums[i][t]);
							strcpy(ch, show[a].seat_nums[i][t]);
						}
						else {
							printf("%s\t", show[a].seat_nums[i][j]);
						}
					}
				}
			}
			arraynavigation(a, ch);
			break;

		case 3 :
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					if(strcmp(ch, show[a].seat_nums[i][j]) == 0) {
						t = j-1;
					}
				}
			}
			if(t < 0) {
				printf("Cannot go further left !!");
				arraynavigation(a, ch);
				break;	
			}
			else {				
				for(i = 0; i < 5; i++) {
					for(j = 0; j < 20; j++) {
						if(j == t) {
							printf("[%s]\t", show[a].seat_nums[i][t]);
							strcpy(ch, show[a].seat_nums[i][t]);
						}
						else {
							printf("%s\t", show[a].seat_nums[i][j]);
						}
					}
				}
			}
			arraynavigation(a, ch);
			break;
			
		case 4 :
			for(i = 0; i < 5; i++) {
				for(j = 0; j < 20; j++) {
					if(strcmp(ch, show[a].seat_nums[i][j]) == 0) {
						t = j+1;
					}
				}
			}
			if(t >= 20) {
				printf("Cannot go further up !!");
				arraynavigation(a, ch);
				break;	
			}
			else {				
				for(i = 0; i < 5; i++) {
					for(j = 0; j < 20; j++) {
						if(j == t) {
							printf("[%s]\t", show[a].seat_nums[i][t]);
							strcpy(ch, show[a].seat_nums[i][t]);
						}
						else {
							printf("%s\t", show[a].seat_nums[i][j]);
						}
					}
				}
			}
			arraynavigation(a, ch);
			break;

		case 5 :
				for(i = 0; i < 5; i++) {
					for(j = 0; j < 20; j++) {
						if(strcmp(ch, show[a].seat_nums[i][j]) == 0) {
							strcpy(show[a].seat_nums[i][j], "*"); //this can be coloured**************
						}
						else {
							printf("%s\t", show[a].seat_nums[i][j]);
						}
					}
			}
			break;						

		default :
			printf("Enter valid key !!\n");
			arraynavigation(a);
			break;
	}
	
}


