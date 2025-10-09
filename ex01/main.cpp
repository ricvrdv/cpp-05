#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << GBOLD << "TEST 1\n" << std::string(85, '=') << RESET << "\n";
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
        std::cout << b4 << std::endl;
        b1.decrementGrade();
        std::cout << b1 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }
    
    std::cout << std::endl << GBOLD << "TEST 2\n" << std::string(85, '=') << RESET << "\n";
    {
        Bureaucrat  b1("Friedkin", 149);
        Form        f1("Form-A", 10, 2);
        Form        f2(f1);
        Form        f3;

        f3 = f1;
        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;
    }
    
    std::cout << std::endl << GBOLD << "TEST 3\n" << std::string(85, '=') << RESET << "\n";
    {
        Bureaucrat  b1("Lynch", 1);
        Bureaucrat  b2("Coppola", 15);
        Form        f1("Form-B", 10, 10);
        Form        f2("Form-C", 10, 10);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.signForm(f1);
        std::cout << f1 << std::endl;

        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
 
    std::cout << std::endl << GBOLD << "TEST 4\n" << std::string(85, '=') << RESET << "\n";

    try
    {
        Form    f1("Form-D", 0, 151);

        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }

    std::cout << std::endl << GBOLD << "TEST 5\n" << std::string(85, '=') << RESET << "\n";

    try
    {
        Bureaucrat  b1("Araki", 1);
        Bureaucrat  b2("Kubrick", 150);
        Form        f1("Form-E", 100, 100);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << f1 << std::endl;

        std::cout << "Bureaucrat \"" << b1.getName() << "\" attempts to sign \"" << f1.getName() << "\"\n";
        f1.beSigned(b1);
        std::cout << f1 << std::endl;

        std::cout << "Bureaucrat \"" << b2.getName() << "\" attempts to sign \"" << f1.getName() << "\"\n";
        f1.beSigned(b2);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << "Exception: " << RESET << e.what() << std::endl;
    }
    return 0;
}