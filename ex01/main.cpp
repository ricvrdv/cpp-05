#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << "TEST 1:";
    std::cout << "\n_______________________________________________\n";
    try
    {
        Bureaucrat  b1("Cronenberg", 1);
        Bureaucrat  b2("Almodóvar", 150);
        Bureaucrat  b3(b2);
        Bureaucrat  b4;
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
        std::cout << b4 << std::endl;

        b4 = b1;
        b1.decrementGrade();
        std::cout << b1 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "TEST 2:";
    std::cout << "\n_______________________________________________\n";

    try
    {
        Bureaucrat  b1("Penélope", 149);


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