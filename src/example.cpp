#include <iostream>
#include <string>
 
int main()
{
    std::string const e("Exemplar");
    for (unsigned i = e.length() - 1; i != 0; i /= 2)
        std::cout << e[i];
    std::cout << '\n';
 
    const char* c = &e[0];
    std::cout << c << '\n'; // print as a C string
 
    //Change the last character of s into a 'y'
    std::string s("Exemplar ");
    s[s.size()-1] = 'y';
    std::cout << s << '\n';
}

