#include "Intern.hpp"

// Default Constructor
Intern::Intern()
{
    std::cout << "Intern was created\n";
}

// Copy Constructor
Intern::Intern( Intern const &other )
{
    (void)other;
    std::cout << "Intern Copy constructor was called\n";
}

// Destructor
Intern::~Intern()
{
    std::cout << "Intern was destroyed\n";
}

// Copy Assignment operator
Intern  &Intern::operator=( Intern const &other )
{
    (void)other;
    std::cout << "Intern was copied\n";
    return (*this);
}

// Member function
AForm   *Intern::makeForm( const std::string &formName, const std::string &formTarget )
{
    int index = -1;
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
        {
            index = i;
            break ;
        }
    }

    if (index != -1)
        std::cout << "Intern creates " << formName << "\n";
    
    switch (index)
    {
        case 0:
            return (new ShrubberyCreationForm(formTarget));
        case 1:
            return (new RobotomyRequestForm(formTarget));
        case 2:
            return (new PresidentialPardonForm(formTarget));
        default:
            throw FormDoesntExistException();
    }
}

// Exception
const char  *Intern::FormDoesntExistException::what() const throw()
{
    return ("Form name does not exist: Intern can't make form");
}

