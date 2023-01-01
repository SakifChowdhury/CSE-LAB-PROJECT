#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char name[50];
	int Train_num;
	int num_of_seats;
}
pd;
void reservation(void);
void viewdetails(void);
void printticket(char name[],int,int,float);
void specificTrain(int);
float charge(int,int);
void login();
int main()

{
		system("cls");
		system("COLOR F0");

printf("  /\\                    /\\                                  \n");
printf("     ____\/____============____\/___    ___========================\n");
printf("    /__|      MAHANAGAR      [_]   |    |  |[]|  [_]    [_]    [_]\n");
printf("  /            EXPRESS             |    |  |  |\n");
printf("  \\________________________________|_ii_|__|__|____________________\n");
printf("    ()==()    === ++++ ===   ()==()       ()==()     +++   ++++++++\n");
printf("===================================================================\n");



sleep(5);
            system("cls");


	printf("\t\t\n\n\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb      ___________________________________      \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb             TRAIN TICKET RESERVATION          \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                    SYSTEM                     \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb      ___________________________________      \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb                                               \xdb\xdb \n");
	printf("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");


	printf("\t\t\t\t\tPress any key to continue:");
	getch();
    system("cls");
	login();
	int menu_choice,choice_return;
	start:
	system("cls");
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("     Train RESERVATION SYSTEM");
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("\n1>> Reserve A Ticket");
	printf("\n________________________\n");
	printf("\n2>> View All Available Train");
	printf("\n________________________\n");
	printf("\n3>> Exit");
	printf("\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}


void viewdetails(void)
{
	system("cls");
	printf("---------------------------------------------------------------------------------------");
	printf("\nTrain.No\tName\t\t\tDestinations  \t\tCharges  \t\tTime\n");
	printf("---------------------------------------------------------------------------------------");
	printf("\n1\tParabat Express       \tKhula to Sylhet        \tBDT.500   \t\t09:00  AM");
	printf("\n2\tShuborno Express      \tChattogram to Dhaka    \tBDT.500   \t\t12:00  PM");
	printf("\n3\tJayantika Express     \tDhaka to Sylhet        \tBDT.450   \t\t01:50  PM");
	printf("\n4\tMohanagar Express     \tChattogram to Dhaka    \tBDT.450   \t\t01:00  AM");
	printf("\n5\tMeghna Express        \tSylhet to Dhaka        \tBDT.400   \t\t07:05  AM");
	printf("\n6\tAgnibina Express        \Dhaka to Tarakandi    \tBDT.400   \t\t09:30  AM");
    printf("\n7\tPaharika Express      \tChattogram to Sylhet   \tBDT.350   \t\t01:00  PM");
    printf("\n8\tRupsha Express        \tSylhet to Chattogram   \tBDT.350   \t\t04:00  PM");
    printf("\n9\tBijoy Express         \tDhaka to Mymensingh    \tBDT.600   \t\t05:35  PM");
    printf("\n10\tEgarosindhur Provati \tDhaka to Kishoreganj   \tBDT.600   \t\t04:15  PM");

}


void reservation(void)
{
	char confirm;
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");

	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(passdetails.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Train<< ");
	getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter Train number:> ");
	start1:
	scanf("%d",&passdetails.Train_num);
	if(passdetails.Train_num>=1 && passdetails.Train_num<=10)
	{
		charges=charge(passdetails.Train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.Train_num,charges);
	}
	else
	{
		printf("\nInvalid Train Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.Train_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}

float charge(int Train_num,int num_of_seats)
{

	if (Train_num==1)

	{
		return(500*num_of_seats);
	}
	if (Train_num==2)
	{
		return(500*num_of_seats);
	}
	if (Train_num==3)
	{
		return(450*num_of_seats);
	}
	if (Train_num==4)
	{
		return(450*num_of_seats);
	}
	if (Train_num==5)
	{
		return(400*num_of_seats);
	}
	if (Train_num==6)
	{
		return(400*num_of_seats);
	}
	if (Train_num==7)
	{
		return(350*num_of_seats);
	}
	if (Train_num==8)
	{
		return(350*num_of_seats);
	}
	if (Train_num==9)
	{
		return(600*num_of_seats);
	}
	if (Train_num==10)
	{
		return(600*num_of_seats);
	}
}

void printticket(char name[],int num_of_seats,int Train_num,float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",Train_num);
	specificTrain(Train_num);
	printf("\nCharges:\t\t%.2f",charges);
}


void specificTrain(int Train_num)
{

	if (Train_num==1)
	{
		printf("\nTrain:\t\t\tParabat Express ");
		printf("\nDestination:\t\tKhula to Sylhet");
		printf("\nDeparture:\t\t9am ");
	}
	if (Train_num==2)
	{
		printf("\nTrain:\t\t\tShuborno Express ");
		printf("\nDestination:\t\tChattogram to Dhaka");
		printf("\nDeparture:\t\t12pm");
	}
	if (Train_num==3)
	{
		printf("\nTrain:\t\t\tJayantika Express ");
		printf("\nDestination:\t\tDhaka to Sylhet");
		printf("\nDeparture:\t\t8am");
	}
	if (Train_num==4)
	{
		printf("\nTrain:\t\t\tMohanagar Express ");
		printf("\nDestination:\t\tChattogram to Dhakat");
		printf("\nDeparture:\t\t11am ");
	}
	if (Train_num==5)
	{
		printf("\nTrain:\t\t\tMeghna Express ");
		printf("\nDestination:\t\tSylhet to Dhaka");
		printf("\nDeparture:\t\t7am");
	}
	if (Train_num==6)
	{
		printf("\nTrain:\t\t\tAgnibina Express ");
		printf("\nDestination:\t\Dhaka to Tarakandi ");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (Train_num==7)
	{
		printf("\nTrain:\t\t\tPaharika Express");
		printf("\nDestination:\t\tHumla toJumla ");
		printf("\nDeparture:\t\t1pm ");
	}
	if (Train_num==8)
	{
		printf("\nTrain:\t\t\tRupsha Express ");
		printf("\n Destination:\t\tChattogram to Sylhet");
		printf("\nDeparture:\t\t4pm ");
	}
	if (Train_num==9)
	{
		printf("\nTrain:\t\t\tBijoy Express");
		printf("\nDestination:\t\tDhaka to Mymensingh");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (Train_num==10)
	{
		printf("\nTrain:\t\t\tEgarosindhur Provati	");
		printf("\nDestination:\t\tDhaka to Kishoreganj");
		printf("\nDeparture:\t\t1.15 ");
	}
}

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10];
    char pass[10];
    do
{

    printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                         ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                         ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"Sakif")==0 && strcmp(pword,"1234")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR  Train RESERVATION SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();
		system("cls");
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

