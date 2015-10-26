void first_time() {
	int j = 0, k = 0, l = 0, m = 0;
	FILE *login;
	login = fopen("login_ids.txt", "a");
	char a[10], b[10], c[10], d[25], e[10], f[15];
	printf("You are a new user to us. Please register before continuing !!\n\n");
	
	printf("Enter Your First Name :");                                     //takes first name
	scanf("%s", a);
	strcpy(login[i].firstname, a);

	printf("Enter Your Last Name :");                                       // takes last name
	scanf("%s", b);
	strcpy(login[i].lastname, b);

	printf("\nEnter Your Username (should not contain a space) :");          //takes username and checks wheter it is repaeted or not
	scanf("%s", c);
	while(j < i)
		if(strcmp(c, login[j++].username) = 0)
			printf("This username already exists. Type another one!!");
			scanf("%s", c);
	strcpy(login[i].username, c);

	printf("\nEnter Your Email ID :");                                       //takes email id form the user and checks whether repeated
	scanf("%s", d);
	while(k < i)
		if(strcmp(c, login[k++].email) = 0)
			printf("This email id already exists. Type another one!!");
			scanf("%s", d);
	strcpy(login[i].email, d);

	printf("\nEnter your phone number* (Optional) :");                        //takes phone number and checks if it is repeated or not
	scanf("%s", e);
	while(l < i)
		if(strcmp(c, login[l++].phonenum) = 0)
			printf("This phone number already exists. Type another one!!");
			scanf("%s", e);
	strcpy(login[i].phonenum, e);

	printf("\nCreate a password :");                                         //creates a unique password for every username
	scanf("%s", f);
	strcpy(login[i].password, f);

	if(strlen(f) < 5) {                   					//checks the length of password (should be greater than 5)
		printf("Your password is too short. Try a new one !!");
		printf("Renter the password (should be more than 5 characters!) :");
		scanf("%s", f);	
	}

	fprintf(login, "\n%s\t%s\t%s\t%s\t%s\t%s", a, b, c, d, e, f);           //prints everything in a file named 'login_ids.txt'
	fclose(login);

	login = fopen("login_ids.txt", "r");
	while(login != EOF){ 							//prints the file data to the corresponding arrays
		fscanf(login, "\n%s\t%s\t%s\t%s\t%s\t%s", login[m].firstname, login[m].lastname, login[m].username, login[m].email, login[m].phonenum, login[m].password);
	m++;
	}

	printf("Please Enter Your username and password again!!");
	repeated_user();       // Enters the repeated user function and then continues it from there
}




void repeated_user() {
	int c = 0;
	char a[10];
	char b[15];
	printf("Welcome to the login page !!");
	

	printf("Enter your username :");
	scanf("%s", a);
	while(login[c].username != NULL) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, a) = 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!");
			c++;
			break;
		}
	}
	passwordcheck(int c);
	
	printf("Please enter the choice you want to do :");
	ticketdisplay();
}

void passwordcheck(int c) {
	char *b;
	printf("Enter your password :");
	scanf("%s", b);
	
	if(strcmp(login[c].password, b) = 0)
		printf("Password matched !!");
	else	
		printf("Password is Incorrect !!");
}


void ticketdisplay() {
	int a;
	
	show_display();
	
	printf("1. Book tickets\n");
	printf("2. Cancel tickets\n");
	printf("3. Rate and comment on a movie\n");
	
	printf("Enter the choice you want to do:\n");
	scanf("%d", a);
	
	switch(a)
		CASE 1 :
			ticketbooking();
			return;
			ticketbookingandpayment();
		CASE 2 :
			ticketcancellation();
			return;
			//incomplete***
		CASE 3 :
			rate_movie();
			return;
			//incomplete***
		default :
			printf("Enter a valid choice!");
		
}



void ticketbookingandpayment() {
	int a, b, d, g;
	char e, f;
	
	printf("Select the show for which u want to book tickets for :\n");
	while(show[i++] != NULL)
		printf("\n%s", show[i++].showname);	
	printf("Enter your choice :");
	scanf("%d", a);
	

	printf("Enter the number of tickets:");
	scanf("%d", &b);
		
	for(d = 0; d < b; d++){	
		if(show[a].seats > b) {
			printf("Enter the name of %b viewer:");
			scanf("%s", seat.name);
			seatbooking();
			show[a].seats--;
		}			
		else 
			printf("The show you are trying to book is housefull !!");
	}
	printf("Please reenter your username:");
	scanf("%s", e);
	while(login[c].username != NULL) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, a) = 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!");
			c++;
			break;
		}	
	printf("Please reenter your password:");
	scanf("%s", f);
	passwordcheck(int c);

	
	printf("Congratulations, You have successfully booked your tickets for %b members !! Please carry your ticket with you while coming!!");
	printf("Your ticket :");
	ticketprint(a, b);


}

void seatbooking(){
	printf("Now please select the Seat Number:");
	printf("Enter the row number:");
	scanf("%c", f);
	switch(f) {
		case 'A': 
			for(k = 0; k < 20; k++)
				printf("%s   ", show[a].seat_nums[0][j++]);
			for(d = 0; d < b; d++){				
				printf("Enter the seat number:");
				scanf("%d ", g);
				show[a].seat_nums[0][g] = '*';
			}
			break;
    		case 'B':
			for(l = 0; l < 20; l++)
				printf("%s   ", show[a].seat_nums[1][j++]);
			for(d = 0; d < b; d++){				
				printf("Enter the seat number:");
				scanf("%d ", g);
				show[a].seat_nums[1][g] = '*';
			} 
			break;
    		case 'C':
			for(m = 0; m < 20; m++)
				printf("%s   ", show[a].seat_nums[2][j++]);
			for(d = 0; d < b; d++){				
				printf("Enter the seat number:");
				scanf("%d ", g);
				show[a].seat_nums[2][g] = '*';
			}
			break;
    		case 'D':
			for(n = 0; n < 20; n++)
				printf("%s   ", show[a].seat_nums[3][j++]);
			for(d = 0; d < b; d++){				
				printf("Enter the seat number:");
				scanf("%d ", g);
				show[a].seat_nums[3][g] = '*';
			}			
			break;
		case 'E':
			for(o = 0; o < 20; o++)
				printf("%s   ", show[a].seat_nums[0][j++]);
			for(d = 0; d < b; d++){				
				printf("Enter the seat number:");
				scanf("%d ", g);
				show[a].seat_nums[0][g] = '*';
			}			
			break;
		default :
			printf("Please enter a valid alphabet !!");
	}
}


void ticketprint(int a, int b) {
	printf("\n\n\n\t\t\t****************************************\n\t\t\tNAME OF THE MOVIE:%s \n\t\t\tNUMBER OF TICKETS:%d \n\t\t\tSEAT NUMBER:%s \n\t\t\tTIME:%s \n\t\t\tSCREEN NO.: %d\n\t\t\tTOTAL PRICE: %d\n\t\t\t****************************************\n", show[a].showname, b, seat.seat_num, show[a].time, show[a].screen_num, show[a].price);

	printf("Thank You for booking %d tickets from our system !! Have a happy movie !");
	printf("Please do come back for more tickets and movies !");
}


void ticketarray() {
	int i, j, d = 65;
	char c[2], str[3];
	
	typedef struct tip{
		char *a[5][20];
	}tip;
	tip t;


	for(i = 0; i < 5; i++) {
		for(j = 0; j < 20; j++) {
			sprintf(str, "%d", j+1);	
			sprintf(c ,"%c", d);
			strcat(c, str);
			
			
			t.a[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
			strcpy(t.a[i][j], c);
			printf("%s   ", t.a[i][j]);
		}
		printf("\n");
		d++;
	}	

	
void show_display() {
	int i = 0;
	FILE *s = fopen("shows.txt", "r");
	FILE *p = s;
	while(s != EOF){
		while(p != '\n'){ 							//prints the file data to the corresponding arrays
			fscanf(p, "%s\t%s\t%d\t%d", show[i].showname, show[i].time, show[i].screen_num, show[i].price);
			i++;
		}
	}
	for(j = 0; j < i; j++) {
		printf("%s\t%s\t%d\t%d", show[i].showname, show[i].time, show[i].screen_num, show[i].price));
	}
}
