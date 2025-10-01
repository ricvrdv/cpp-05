#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	b("Bertolucci", 1);
	Intern	intern;

	srand(time(NULL));

	try
	{
		AForm	*f = intern.makeForm("presidential pardon", "Cassavetes");

		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}

	try
	{
		AForm	*f = intern.makeForm("shrubbery creation", "Kar-Wai");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}

	try
	{
		AForm	*f = intern.makeForm("robotomy request", "Craven");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}

	try
	{
		AForm	*f = intern.makeForm("unknown", "Ti West");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}
}