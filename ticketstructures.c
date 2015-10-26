typedef struct {
	char showname[20];
	char time[6];
	int screen_num[2];
	int price;
	char seat_nums[20][5];
	char reviews[128];
}show[10];

typedef struct {
	char name[20];
	char seat_num;
	int booking_id;
}seat;

typedef struct {
	char *firstname;
	char *lastname;
	char *username;
	char *email;
	char *phonenum;
	char *password;
}login[128];
