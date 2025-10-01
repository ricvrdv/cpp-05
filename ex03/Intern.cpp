#include "Intern.hpp"

// Default Constructor
Intern::Intern()
{
    std::cout << "Intern was created\n";
}

// Copy Constructor
Intern::Intern( Intern const &other )
{
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
    std::cout << "Intern was copied\n";
    return (*this);
}

// Member function
AForm   *Intern::makeForm( std::string form, std::string target )
{
    
}

