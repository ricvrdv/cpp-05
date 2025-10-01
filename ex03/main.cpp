#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
	
	std::cout << "\n" << GBOLD
		<< "CREATING BUREAUCRATS\n" << std::string(85, '=') << RESET << "\n";
    Bureaucrat  b1("Hitchcock", 1);
    Bureaucrat  b2("Spielberg", 40);
    Bureaucrat  b3("Lanthimos", 140);
    Bureaucrat  b4("Gerwig", 150);

    std::cout << "\n" << GREEN << "Created Bureaucrats:" << RESET << "\n"
		<< b1 << "\n"
		<< b2 << "\n"
		<< b3 << "\n"
		<< b4 << "\n";
    
    std::cout << "\n" << GBOLD
		<< "CREATING FORMS\n" << std::string(85, '=') << RESET << "\n";
    ShrubberyCreationForm   f1("home");
    RobotomyRequestForm     f2("Fargeat");
    PresidentialPardonForm  f3("Joon Ho");
    AForm	*f4 = new RobotomyRequestForm("Rodriguez");

	std::cout << "\n" << GREEN << "Created Forms:" << RESET << "\n"
             << f1 << "\n"
             << f2 << "\n"
             << f3 << "\n"
             << *f4 << "\n";
    
    std::cout << "\n" << GBOLD
		<< "TEST 1\n" << std::string(85, '=') << RESET << "\n";
	b1.signForm(f1);
	b2.signForm(f2);
	b3.signForm(f3);
	b1.signForm(f3);
	b4.signForm(*f4);

	std::cout << "\n" << GREEN << "Forms new status:" << RESET << "\n"
             << f1 << "\n"
             << f2 << "\n"
             << f3 << "\n"
             << *f4 << "\n";

	std::cout << "\n" << GBOLD
		<< "TEST 2\n" << std::string(85, '=') << RESET << "\n";
	b1.executeForm(f1);
	try
	{
		f2.execute(b3);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}
	b1.executeForm(f3);
	b3.executeForm(*f4);

	std::cout << "\n" << GBOLD
		<< "TEST 3\n" << std::string(85, '=') << RESET << "\n";
	for (int i = 0; i < 5; i++)
		b1.executeForm(f2);

    std::cout << "\n" << GBOLD
		<< "DESTROYING BUREAUCRATS & FORMS\n" << std::string(85, '=') << RESET << "\n";
	delete f4;
    
    return 0;
}