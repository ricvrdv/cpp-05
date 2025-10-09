#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\n" << GBOLD
		<< "CREATING BUREAUCRAT AND INTERN\n" << std::string(85, '=') << RESET << "\n";
	Bureaucrat	b("Bertolucci", 1);
	Intern	intern;

	srand(time(NULL));

	std::cout << "\n" << GBOLD
		<< "TEST 1\n" << std::string(85, '=') << RESET << "\n";
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

	std::cout << "\n" << GBOLD
		<< "TEST 2\n" << std::string(85, '=') << RESET << "\n";
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

	std::cout << "\n" << GBOLD
		<< "TEST 3\n" << std::string(85, '=') << RESET << "\n";
	try
	{
		AForm	*f = intern.makeForm("robotomy request", "Craven");
		b.signForm(*f);
		for (int i = 0; i < 5; i++)
			b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << RESET << e.what() << "\n";
	}

	std::cout << "\n" << GBOLD
		<< "TEST 4\n" << std::string(85, '=') << RESET << "\n";
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