#include <iostream>
#include <string>


void writeBackwards(std::string s, int start, int end)
{
    if (end < 0)
    {
        return;
    }

    std::cout << s[end];
    if (end == start)
    {
        return;
    }
    writeBackwards(s, start, end - 1);
}

void
writeBackwards1(std::string s, int end)
{
    std::cout << s[end];
    if (end != 0)
    {
        writeBackwards1(s, end - 1);
    }
}

void
writeBackwards2(std::string s, int start, int end)
{
    if (start > end)
    {
        // nada
    }
    else
    {
        int newStart = start + 1;
        writeBackwards2(s, newStart, end);
        std::cout << s[start];
    }
}

int main()
{
    std::cout << "enter a string: ";
    std::string in;
    std::cin >> in;
    
    writeBackwards(in, 0, in.size());
    std::cout << std::endl;

    writeBackwards1(in, in.size());
    std::cout << std::endl;

    writeBackwards2(in, 0, in.size());
    std::cout << std::endl;
}


