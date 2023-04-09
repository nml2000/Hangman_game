#include <iostream>
using namespace std;


//define the void functions

void intro(){
std::cout << "=====================\n";
std::cout << "Hangman\n";
std::cout << "=====================\n";
std::cout << "Save your friend from being hanged by guessing the right word.\n";
}

void display_misses(int misses) {
if(misses==0)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==1)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==2)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" | | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==3)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" /| | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==4)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" /|\\ | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==5)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" /|\\ | \n";
cout<<" / | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(misses==6)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" O | \n";
cout<<" /|\\ | \n";
cout<<" / \\ | \n";
cout<<" | \n";
cout<<" ========= \n";
}

}