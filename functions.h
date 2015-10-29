typedef struct person {
	char name[20];
	char *seat_num[2][2];
	int booking_id;
}person;


typedef struct movie {
	char showname[50];
	int time;
	int screen_num;
	int price;
	char *seat_nums[5][20];
	char reviews[128];
	int seats;
	person seat[100];
}movie;
movie show[20];


typedef struct details{
	char firstname[15];
	char lastname[15];
	char username[15];
	char email[30];
	char phonenum[10];
	char password[15];
}details;
details login[120];


void first_time();
void repeated_user();
void passwordcheck(int );
void ticketdisplay();
void ticketbookingandpayment();
void seatbooking(int ,int);
void ticketprint(int ,int);
void ticketarray(int);
void show_display();
