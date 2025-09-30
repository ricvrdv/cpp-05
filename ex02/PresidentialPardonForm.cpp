#include "PresidentialPardonForm.hpp"

// Default Constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
    std::cout << "Default PresidentialPardonForm was created\n";
}

// Parametric Constructor
PresidentialPardonForm::PresidentialPardonForm( std::string target )
    : AForm("Presidential Pardon Form", 25, 5), target_(target)
{
    std::cout << "PresidentialPardonForm was created with target " << target << "\n";
}

// Copy Constructor
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other )
    : AForm(other), target_(other.target_)
{
    std::cout << "PresidentialPardonForm Copy constructor was called\n";
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm with target " << target_ << " was destroyed\n";
}

// Copy assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &other )
{
    if (this != &other)
        this->target_ = other.target_;
    std::cout << "PresidentialPardonForm was copied\n";
    return (*this);
}

// Member function
void    PresidentialPardonForm::executeAction() const
{
    std::cout << target_ << " has been pardoned by Zaphod Beeblebrox!\n";
}