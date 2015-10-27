void first_time(struct details) {
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
	char str[120];
	char *tmp;
	details login[128];
	
	FILE *fp, *fd;
	char a[10], b[10], c[10], d[25], e[10], f[15];

	fd = fopen("login_ids.txt", "r");
	
	while (fgets(str,120,fd) != NULL) { 
		
		tmp = strtok(str,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(login[m].firstname, tmp);

                tmp = strtok(NULL,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(login[m].lastname, tmp);

                tmp = strtok(NULL,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(login[m].username, tmp);

                tmp = strtok(NULL,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(login[m].email, tmp);

                tmp = strtok(NULL,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(login[m].phonenum, tmp);
                
                tmp = strtok(NULL,"\n");
		tmp[strlen(tmp)-1] = '\0';
                strcpy(login[m].password, tmp);
                
                m++;							//prints the file data to the corresponding arrays
	}
	
	fclose(fd);

	fp = fopen("login_ids.txt", "a");
	

	
	printf("You are a new user to us. Please register before continuing !!\n\n");
	
	printf("Enter Your First Name :");                                     //takes first name
	scanf("%s", a);
	

	printf("\nEnter Your Last Name :");                                       // takes last name
	scanf("%s", b);
	

	printf("\nEnter Your Username (should not contain a space) :");          //takes username and checks wheter it is repaeted or not
	scanf("%s", c);
	while(j < i) {
		if(strcmp(c, login[j++].username) == 0)
			printf("This username already exists. Enter new username.");
			scanf("%s", c);
	}

	printf("\nEnter Your Email ID :");                                       //takes email id form the user and checks whether repeated
	scanf("%s", d);
	while(k < i){
		if(strcmp(c, login[k++].email) == 0)
			printf("This email id already exists. Enter new email id.");
			scanf("%s", d);
	}

	printf("\nEnter your phone number* (Optional) :");                        //takes phone number and checks if it is repeated or not
	scanf("%s", e);
	while(l < i) {
		if(strcmp(c, login[l++].phonenum) == 0)
			printf("This phone number already exists. Enter new phone number.");
			scanf("%s", e);
	}

	printf("\nCreate a password :");                                         //creates a unique password for every username
	scanf("%s", f);
	strcpy(login[i].password, f);

	if(strlen(f) < 5) {                   					//checks the length of password (should be greater than 5)
		printf("Your password is too short. Try a new one !!");
		printf("Renter the password (should be more than 5 characters!) :");
		printf("New password:");
		scanf("%s", f);	
	}

	fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\n", a, b, c, d, e, f);           //prints everything in a file named 'login_ids.txt'
	fclose(fp);

	printf("Please Enter Your username and password again!!");
	repeateduser();       // Enters the repeated user function and then continues it from there

}




void repeated_user() {
	int c = 0;
	char a[10];
	char b[15];
	printf("\n\t\t\tWelcome to the login page !!\n");

	printf("Enter your username :");
	scanf("%s", a);
	while(login[c].username != NULL) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, a) == 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!\n");
			c++;
			break;
		}
		else 
			printf("Username not found.Login once again !!");
			repeateduser();
			break;
	}
	passwordcheck(int c);
	
	printf("Please enter the choice you want to do :");
	ticketdisplay();
void passwordcheck(int c) {
	char *b;
	printf("Enter your password :");
	scanf("%s", b);
	
	if(strcmp(login[c].password, b) == 0)
		printf("Password matched !!");
	else	
		printf("Password is Incorrect !!");
	}
	
	

}



	




void ticketdisplay(struct movie) {
	int a;
	
	show_display(struct movie);
	
	printf("1. Book tickets\n");
	printf("2. Cancel tickets\n");
	printf("3. Rate and comment on a movie\n");
	printf("4. Edit your personal details\n");
	
	printf("Enter the choice you want to do:\n");
	scanf("%d", &a);
	
	switch(a)
		CASE 1 :
			ticketbookingandpayment();
			break;
		CASE 2 :
			ticketcancellation(struct );
			break;
			//incomplete***
		CASE 3 :
			rate_movie(struct movie);
			break;
			//incomplete***
		CASE 4 :
			edit_details(struct details);
			break;
		default :
			printf("Enter a valid choice! Enter again !");
			ticketdisplay(struct movie);
			break;
		
}


void ticketbookingandpayment(struct seat, struct movie, struct details) {
	int a, b, d, g, i, h;
	char e, f;
	//scan the contents of show.txt, login_ids.txt in the respective arrays before proceeding
	
	printf("Select the show for which u want to book tickets for :\n");
	showdisplay(struct movie);
	while(show[i] != NULL) {
		printf("\n%d. %s", show[i].showname);
		i++;
	}

	
	printf("Enter your choice :");
	scanf("%d", &h);
	a = h - 1;
	

	printf("Enter the number of tickets:");
	scanf("%d", &b);
		
	for(d = 0; d < b; d++){	
		if(show[a].seats > b) {
			printf("Enter the name of %b viewer:");
			scanf("%s", seat.name);
			ticketarray(a);
			seatbooking(b);
			show[a].seats--;
		}			
		else 
			printf("The show you are trying to book is housefull !!");
			//****************************
	}
	printf("Please reenter your username:");
	scanf("%s", e);
	while(login[c].username != NULL) {   //c is the index of the login array and will be given as the argument to the function. 
		if(strcmp(login[c].username, a) == 0) {       //searches if the username is present in the existing file of login ids.
			printf("Username Found !!");
			break;
		}
	c++;
	}	                                        //c contains the index of the details of the viewer
	printf("Please reenter your password:");
	scanf("%s", f);
	passwordcheck(int c);

	
	printf("Congratulations, You have successfully booked your tickets for %b members !! Please carry your ticket with you while coming!!");
	printf("Your ticket :");
	ticketprint(a, b);
}

	


void ticketprint(int a, int b) {
	printf("\n\n\n\t\t\t****************************************\n\t\t\tNAME OF THE MOVIE:%s \n\t\t\tNUMBER OF TICKETS:%d \n\t\t\tSEAT NUMBER:%s \n\t\t\tTIME:%s \n\t\t\tSCREEN NO.: %d\n\t\t\tTOTAL PRICE: %d\n\t\t\t****************************************\n", show[a].showname, b, seat.seat_num, show[a].time, show[a].screen_num, show[a].price);

	printf("\n\t\t\tThank You for booking %d tickets from our system !! Have a happy movie !\n");
	printf("\n\t\t\tPlease do come back for more tickets and movies !\n");
}

void ticketarray(int a) {
	int i, j, d = 65;
	char c[2], str[3];
	
	typedef struct {
		char showname[20];
		char time[6];
		int screen_num[2];
		int price;
		char *seat_nums[20][5];
		char reviews[128];
	}movie;
	movie show[10];

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 20; j++) {
			sprintf(str, "%d", j+1);
	
			sprintf(c ,"%c", d);

			strcat(c, str);
			
			show[a].seat_nums[i][j] = (char *)malloc((strlen(c)+1) * sizeof(char));
			strcpy(show[a].seat_nums[i][j], c);
			printf("%s   ", show[a].seat_nums[i][j]);
		}
		printf("\n");
		d++;
	}
}
	
void show_display(struct movie) {
	movie show[10];
	int i = 0, m, j;
	char str[120];
	char *tmp;
	FILE *s = fopen("shows.txt", "r");
	
	while (fgets(str,120,s) != NULL) { 
		
		tmp = strtok(str,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(show[m].showname, tmp);

                tmp = strtok(NULL,"\t");
		tmp[strlen(tmp)-1] = '\0';
		strcpy(show[m].time, tmp);

                tmp = strtok(NULL,"\t");
		show[m].screen_num = atoi(tmp);

                tmp = strtok(NULL,"\n");
		show[m].price = atoi(tmp);

                m++;							//prints the file data to the corresponding arrays
	}
	for(j = 0; j < m; j++) {                           //prints the arrays on the screen
		printf("%s\t%s\t%d\t%d\n", show[i].showname, show[i].time, show[i].screen_num, show[i].price);
		i++;
	}
}
