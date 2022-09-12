#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

Struct mufti_airline
{
     char passport[6];
     char name[15];
     char destination[15];
      int seat_num;
     char email[15];
     Struct mufti_airline *following;
}
*begin, *stream;
struct mufti_airline *dummy;

void main()
{
Void reserve(int x), cancel(), display(), savefile();
Int choice;
begin=stream=NULL;
int num=1;

do

{

printf("\n\n\t\t **********************************");

Printf("\n\t\t welcome to Mufti's airline system ");

Printf("\n\t\t ************************************");

Printf("\n\n\n\t\t please enter your choice from below (1-4):");

Printf("\n\n\t\t 1. Reservation");

Printf("\n\n\t\t 2. cancel");

Printf("\n\n\t\t 3. Display records");

Printf("\n\n\t\t 4. Exit");

Printf("\n\n\t\t feel free to contact");

Printf("\n\n\t\t Enter your choice : ");

Scanf("%d", &choice); fflush(stdin):

System(cls");

Switch(choice)

{

Case 1:

Reserve(num);

Num++;

Break;
Case 2:

Cancel();

Break;

Case 3:

Display();

Break;

Case 4:

{

Savefile();

Break;

}

Default:

Printf("\n\n\t SORRY INVALID CHOICE!);

Printf("\n\n\t PLEASE CHOOSE FROM 1-4");

Printf("\n\n\t Do not forget to choose 1-4");

}

Getch();

} while (choice !=4);

}

//****************GOOD LUCK
MUFTI************************
Void details()

{

Printf("\n\t Enter your passport number:");

Gets(stream-> passport); fflush(stdin);

Printf("\n\t Enter your name: ");

Gets(stream->name); fflush(stdin);

Printf("\n\t Enter your e-mail address: ");

Gets(stream->e-mail); fflush(stdin);

Printf("\n\t Enter the destination: ");

Gets(stream->destination); fflush(stdin);

}

//**********************GOOD LUCK MUFTI**********************

Void details(int x)

{

Stream=begin;

If(begin==NULL)

{

Begin=stream=(struct mufti_airline*)malloc(sizeof(struct mufti_airlines));

Details();

Stream->following=NULL;

Printf("\n\t Seat booking successful!");

Printf("\n\t your seat number is : seat A-%d", x);

Stream->seat_num=x;
Return;

}

Else if(x>15)

{

Printf("\n\t\t Seat full ");

Return;

}

Else

{

While(stream->following)

Stream=stream->following;

Stream->following =(struct mufti_airline*)malloc(sizeof(struct mufti_airlines));

Stream=stream->following;

Details();

Stream->following=NULL;

Printf(" \n\t Seat booking successfully!" );

Printf("\n\t your seat number is: Seat A-%d", x);

Stream->seat_num=x;

Return;

}

}

//*************************GOOD LUCK MUFTI***************************
Void save file()

{

FILE *fpointer = fopen("mufti records", "w");

If(!fpointer)

{

Printf("\n Error is opening file !");

Return ;

Sleep(800);

}

Stream=begin;

While(stream)

{

Fprintf(fpointer, "%-6s", stream->passport);

Fprintf(fpointer, "%-15s", stream->name);

Fprintf(fpointer, "%- 15s", stream->e-mail);

Fprint(fpointer, "%-15s" , stream->destination);

Fprint(fpointer , "\n");

Stream=stream->following;

}

Printf("\n\n\t details have been saved to a file (mufti records");

Fclose(fpointer);

}

//*******************GOOD LUCK MUFTI***********************
Void display()

{

Stream=begin;​

While(stream)​

{​

printf("\n\n Passport number : %-6s", stream->passport);​

printf("\n name : "%-15s", stream->name);​

printf("\n e-mail address : %- 15s", stream->e-mail);​

Printf("\n seat number:A-%d", stream->seat_num);

print("\n destination: %-15s" , stream->destination);​

Fprint(fpointer , "\n");​

Stream=stream->following;​

}​

Printf("\n\n++ *=======================*++");

Stream=stream->following;

}

}​

//*******************GOOD LUCK MUFTI***********************​

​

Void cancel

{

Stream=begin;

System("cls");

Char passport[6];

Printf("\n\n Enter passport number to delete record: ");

Gets(passport); fflush(stdin);

If (strcmp(begin->passport,passport)==0)

{

Dummy=begin;

Begin=begin->following;

Free(dummy);

Printf("booking has been deleted");

Sleep(800);

Return;

}

While (stream->following )

{

If(strcmp(stream->following->passport,passport)==0)

{

Dummy=stream->following;

Stream->following=stream->following->following;

Free(dummy);

Printf("has been deleted");

Getch();

Sleep(800);

Return;

}

Stream=stream->following;

}

Printf("passport number is wrong please check your
passport");

}

OUTPUT:-