/*
// This project includes Nandor Laar, Daniel Arriaga and Austin Jackson
#include <iostream>
using namespace std;

int main() {
    // title and abstract
    cout << "Hangman: the game\n";
    cout << "This is a word game where you have to save a stick figure from being hanged by guessing the right code word displayed in the blank on the terminal.\n";
    cout << "As you guess the right letters, the terminal will display the correct guesses on the terminal, replacing the blank underscores.\n";
    cout << "If you guess incorrectly, the terminal will progressively show the hangman figure getting limbs added.\n";
    cout << "You will lose the game if the hangman figure shows all of its body, and you win if you guess all the right letters to the code word.\n";
    cout << "Project Goal/Outcomes for Mar. 27 - Apr. 2: write the first few void functions called to the main folder\n";
    cout << "Project Goal/Outcomes for Apr. 3 - 9: write the rest of the functions like the status of how many wrong guesses the user has and the other one if the user wins the game.\n";
    cout << "Project Goal/Outcomes for Apr. 10 - 16: write a loop where the user tries out guesses and end the game if there are more than 6 wrong guesses.\n";
    cout << "Project Goal/Outcomes for Apr 17 - 23: write a way for the program to store the wrong guesses and finish up the program.\n\n";


    // journal week 1
    cout << "Project Journal: Week 1\n";
    cout << "This week we focused on writing the first two functions that were written in a separate folder from the main.\n";
    cout << "The first function called to the main is the introduction. It tells the user what they have to do in the game to win it.\n";
    cout << "The secont function displays the different ways the hangman figure will show itself. The more misses the user gets the more limbs the program will add to the hangman figure.\n";
    return 0;
}
*/


#include <iostream>
#include "hangman_functions.cpp"
using namespace std;

int main(){

    intro();
    cout<<" +---+ \n";
    cout<<" | | \n";
    cout<<" | \n";
    cout<<" | \n";
    cout<<" | \n";
    cout<<" | \n";
    cout<<" ========= \n";

    cout << "wrong guesses:\n" ;
    cout << "   \n";
    cout << "code word >> _ _ _ _ _ _ _ _ _ _ _\n\n";
    return 0;
}