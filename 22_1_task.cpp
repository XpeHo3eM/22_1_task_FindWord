#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Enter the word you want to find: ";
    std::string word;
    std::cin >> word;

    std::fstream file;
    file.open("words.txt");

    std::string temp;
    int count = 0;
    while (!file.eof())
    {
        file >> temp;
        if (word == temp)
            ++count;
    }
    std::cout << count << std::endl;
    file.close();
}