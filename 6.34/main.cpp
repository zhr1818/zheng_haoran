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

   srand( time( 0 ) );

   do
   {

      answer = 1 + rand() % 1000;


      cout << "I have a number between 1 and 1000.\n"
         << "Can you guess my number?\n"
         << "Please type your first guess." << endl << "?" ;
      cin >> guess;


      while ( !panduan( guess, answer ) )
         cin >> guess;


      cout << "\nExcellent! You guessed the number!\n"
         << "Would you like to play again (y or n)? ";
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
