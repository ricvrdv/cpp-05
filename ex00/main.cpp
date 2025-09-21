#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << "TEST 1:";
    std::cout << "\n_______________________________________________\n";
    try
    {
        Bureaucrat  b1("Ethel", 2);
        std::cout << b1 << std::endl;
        
        b1.incrementGrade();
        std::cout << b1 << std::endl;

        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "TEST 2:";
    std::cout << "\n_______________________________________________\n";

    try
    {
        Bureaucrat  b2("Lana", 149);
        std::cout << b2 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;

        b2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "TEST 3:";
    std::cout << "\n_______________________________________________\n";

    try
    {
        Bureaucrat  b3("Charli", 0);
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "TEST 4:";
    std::cout << "\n_______________________________________________\n";

    try
    {
        Bureaucrat  b4("Troye", 160);
        std::cout << b4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}