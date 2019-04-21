#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool panduan( int, int );

int main()
{
   int answer;
   int guess;
   char response;
   int n=0;


   srand( time( 0 ) );

   do
   {

      answer = 1 + rand() % 1000;


      cout << "I have a number between 1 and 1000.\n"
         << "Can you guess my number?\n"
         << "Please type your first guess." << endl << "?" ;
      cin >> guess;
      n=1;



      for ( n;!panduan( guess, answer );n++ )
        cin >> guess;




      cout << "\nExcellent! You guessed the number!\n";
      if(n==10)
      cout << "Ahah!You know the secret!";
      if(n<10)
      cout << "Either you know the secret or you got lucky!";
      if(n>10)
      cout << "You should be able to do better!";

      cout << "\nWould you like to play again (y or n)? ";
      cin >> response;

      cout << endl;
   }
    while ( response == 'y' );
}

bool panduan( int m, int n )
{
   if ( m == n )
      return true;

   if ( m < n )
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return false;
}
