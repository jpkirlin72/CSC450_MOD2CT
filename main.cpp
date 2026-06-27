#include <iostream>
#include <string>

int main()
{
    // Loop 3 times for varying string inputs
    for (int i = 1; i <= 3; ++i)
    {
        std::string string1;
        std::string string2;

        std::cout << "--- Iteration " << i << " ---" << std::endl;

        // Using std::getline to safely handle spaces in the strings
        std::cout << "Enter the first string: ";
        std::getline(std::cin, string1);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, string2);

        // Concatenate the strings
        std::string concatenatedResult = string1 + string2;

        // Print the result
        std::cout << "Concatenated Output: " << concatenatedResult << std::endl;
        std::cout << std::endl; // Blank line for clean spacing
    }

    return 0;
}