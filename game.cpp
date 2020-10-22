/*
* Author: Khalid Zikirullah
* Title: Question and Answer C++ Program
* Main file 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

int main()
{
   long int s;
   time(&s);
  
   string input;
   string time = ctime(&s);
   cout << "\t\t\t " << time << endl;
   
   cout << (time <= stoi(12))? "\t\t\t Good morining.." : "\t\t\t Good Day.." << endl; 
   
   //object
   Game_Base_One game_base_one;
   Game_Base_Two game_base_two;
   Game_Base_Three game_base_three;

   cout << "Select Subject:" << endl;
   cout << "1 - Maths \n 2 - English \n 3 - coding \n >";
   cin >> input;
   
   switch(input)
   {
      case "1": case 1:
         game_base_one.maths_board();
         game_base_one.maths_board_result();
      break;
      case "2": case 2:
         game_base_two.english_board();
         game_base_two.english_board_result();
      break;
      case "3": case 3:
         game_base_three.coding_board();
         game_base_three.coding_board_result();
      break;
      default:
         cout << "Wrong selection " << endl;
   }

  return 0;

}
