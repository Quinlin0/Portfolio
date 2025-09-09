#include <iostream>
#include <climits>

using namespace std;

void findingMaxAndMin()
{
    int number[] = {1, 74,20,36,50};

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i=0; i<5; i++)
    {
        if (number[i] > largest)
        {
            largest = number[i];
        }
        if (number[i] < smallest)
        {
            smallest = number[i];
        }
    }
    cout<<"Largest Number: "<<largest<<endl;
    cout<<"Smallest Number: "<<smallest<<endl;
}

int main()
{
    findingMaxAndMin();
    return 0;
}
