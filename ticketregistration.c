void first_time() {
	char a[10], b[10], c[10], d[25], e[10], f[15];
	printf("You are a new user to us. Please register before continuing !!\n\n");
	
	printf("Enter Your First Name :");
	scanf("%s", a);

	printf("Enter Your Last Name :");
	scanf("%s", b);
	
	printf("\nEnter Your Username (should not contain a space) :");
	scanf("%s", c);

	printf("\nEnter Your Email ID :");
	scanf("%s", d);

	printf("\nEnter your phone number* (Optional) :");
	scanf("%s", e);

	printf("\nCreate a password :");
	scanf("%s", f);
	if(strlen(f) < 5) {
		printf("Your password is too short. Try a new one !!");
		printf("Renter the password (should be more than 5 characters!) :");
		scanf("%s", f);	

	}

}
