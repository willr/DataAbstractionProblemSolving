#include <iostream>
#include <string>


void
solveTowers(int count, char source, char destination, char spare)
{
    if (count == 1)
    {
        std::cout << "Move top disk from pole " << source
                  << " to pole " << destination << std::endl;
    }
    else
    {
        solveTowers(count - 1, source, spare, destination);
        solveTowers(1, source, destination, spare);
        solveTowers(count - 1, spare, destination, source);
    }

}

int main() 
{
    int numDisks = 0;
    std::cout << "How many disks on starting pole? ";
    std::cin >> numDisks;

    solveTowers(numDisks, 'A', 'B', 'C');
}
