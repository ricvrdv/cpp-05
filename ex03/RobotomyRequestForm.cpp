#include "RobotomyRequestForm.hpp"

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    std::cout << "Default RobotomyRequestForm was created\n";
}

// Parametric Constructor
RobotomyRequestForm::RobotomyRequestForm( std::string target )
    : AForm("Robotomy Form", 72, 45), target_(target)
{
    std::cout << "RobotomyRequestForm was created with target " << target << "\n";
}

// Copy Constructor
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other )
    : AForm(other), target_(other.target_)
{
    std::cout << "RobotomyRequestForm Copy constructor was called\n";
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm with target " << target_ << " was destroyed\n";
}

// Copy assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &other )
{
    if (this != &other)
        this->target_ = other.target_;
    std::cout << "RobotomyRequestForm was copied\n";
    return (*this);
}

// Member function
void    RobotomyRequestForm::executeAction() const
{
    std::cout << "** DRILLING NOISES **\n";
    if (std::rand() % 2 == 0)
        std::cout << CYAN << target_ << " has been robotomized" << RESET << "\n";
    else
        std::cout << YELLOW << target_ << " has not been robotomized" << RESET << "\n";
}