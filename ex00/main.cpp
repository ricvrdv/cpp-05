#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << GBOLD << "TEST 1\n" << std::string(85, '=') << RESET << "\n";
    try
    {
        Bureaucrat  b1("Proyas", 2);
        Bureaucrat  b2(b1);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        
        b1.incrementGrade();
        std::cout << b1 << std::endl;

        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }
    
    std::cout << std::endl << GBOLD << "TEST 2\n" << std::string(85, '=') << RESET << "\n";

    try
    {
        Bureaucrat  b1("Trier", 149);
        Bureaucrat  b2;  
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        b2 = b1;
        std::cout << b2 << std::endl;

        b1.decrementGrade();
        std::cout << b1 << std::endl;

        b1.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }
    
    std::cout << std::endl << GBOLD << "TEST 3\n" << std::string(85, '=') << RESET << "\n";

    try
    {
        Bureaucrat  b3("Eggers", 0);
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }

    std::cout << std::endl << GBOLD << "TEST 4\n" << std::string(85, '=') << RESET << "\n";

    try
    {
        Bureaucrat  b4("Craven", 160);
        std::cout << b4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }
    return 0;
}