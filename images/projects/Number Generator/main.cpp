#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNum()
{
    srand (time(0));
    int randomNumber = rand () % 10 + 1;
    return randomNumber;
}

int number;
int guessNum = randomNum();

void game()
{
    cout<<"***Welcome to my Number Generator***"<<endl;
    cout<<"Can you guess the correct number"<<endl;
    cout<<"Pick a number between 1 and 10"<<endl;
    cin>>number;
    if (number < guessNum)
    {
        cout<<"Too Low!!, Try again..."<<endl;
    }
    else if (number > guessNum)
    {
        cout<<"Too High !!!, Try again..."<<endl;
    }
    else if (number == guessNum)
    {
        cout<<"Well Done...You got it."<<endl;
    }
}

int main()
{
    do
    {
        game();
    }while (number!=0);
    return 0;
}
