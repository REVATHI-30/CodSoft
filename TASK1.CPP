/* Number Guessing Game 
 
Create a program that generates a random number and asks the user to guess it. 
Provide feedback on whether the guess is too high or too low until the user guesses the correct number.

codsoft- task 1 */

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>


void main()
{
  clrscr();
  
  char ch,name[30];


  char *f="WELCOME TO";
  char *s="Number Guessing Game";
  int i;

  textcolor(2);

  for(i=0;i<10;i++)
  {
     delay(60);
     gotoxy(33+i,10);
     cprintf("%c",*f);
     f++;
   }

  for(i=0;i<20;i++)
  {  
     delay(60);
     gotoxy(29+i,12);
     cprintf("%c",*s);
     s++;
   }

   textcolor(WHITE);
   
   gotoxy(50,20);
   cprintf("PROJECT MADE BY :");

   textcolor(WHITE);
   gotoxy(50,22);
   cprintf(" R REVATHI");

   getch();
   clrscr();

  cout<<"\n\n\n \t \t Hello! What's your name: ";
  cin>>name;

  cout<<"\n\tHey! "<<name<<", Do you want to start the game ?(Y/N): ";
  cin>>ch;

  if (ch=='Y' || ch=='y')
   {
      do{ 
      
      clrscr();
      int num=0,n=0,guess=5;

      randomize();
      num=random(31); //randomly selects a number 
      
      cout<<"\n Can you guess a number in "<<guess<<" guesses"; // guess the number in 5 guesses

      for (int x=0;x<5;x++)
       {
	 cout<<"\n\n Guess a number between 0 to 30: ";
	 cin>>n;
	 guess-=1; //shorthand for guess=guess-1

	 if (num == n)
	  { 
            cout<<"Congratulations! "<<name;
	    cout<<"\n You guessed the correct number "<<" in "<<x+1<<" guesses."; //x+1 because the initial value of x=0
	    cout<<"\n\t You Won !!!";
	    break;
	  }
	 else if (n>num)
	   { 
             cout<<"\n You guessed a higher number. Think of a number lesser than your previous guess. ";
	     cout<<"\n You have "<<guess<<" guesses left";
             
	    }
	 else if (n<num)
	    { 
              cout<<"\n You guessed a lower number. Think of a number higher than your previous guess. ";
	      cout<<"\n You have "<<guess<<" guesses left";
	     }

         else if(guess==0 || n!=num)
	    { 
          cout<<"\n\n Better luck next time "<<name<<"\n The number is "<<num;

             }
         }

          cout<<"\n\n Want to try again ?(Y/N): ";
	  cin>>ch;

      } while(ch=='Y'||ch=='y');

	 cout<<"\n\tThanks for playing the game. ";
   }
  else
    cout<<"\n We will be waiting for you. \n See you soon. ";


 getch();
}