#include "ShrubberyCreationForm.hpp"

// Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
    std::cout << "Default ShrubberyCreationForm was created\n";
}

// Parametric Constructor
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
    : AForm("Shrubbery Form", 145, 137), target_(target)
{
    std::cout << "ShrubberyCreationForm was created with target " << target << "\n";
}

// Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other )
    : AForm(other), target_(other.target_)
{
    std::cout << "ShrubberyCreationForm Copy constructor was called\n";
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm with target " << target_ << " was destroyed\n";
}

// Copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
    if (this != &other)
        this->target_ = other.target_;
    std::cout << "ShrubberyCreationForm was copied\n";
    return (*this);
}

// Member function
void    ShrubberyCreationForm::executeAction() const
{
    std::string filename = target_ + "_shrubbery";
    std::ofstream   file(filename.c_str());

    if (!file.is_open())
    {
        throw std::runtime_error("Could not create file");
    }
    file << "+----------------------------+\n";
    file << "|                     ()     |\n";
    file << "|    ()              ( *)    |\n";
    file << "|   (*o)            (* o*)   |\n";
    file << "|  (o  *)    ()    (o  * o)  |\n";
    file << "| (_*_o__)  ( o)  (_*__*o_*) |\n";
    file << "|    ||    (o_*_)     ||     |\n";
    file << "|    ||      ||       ||     |\n";
    file << "+----------------------------+\n";

    file.close();
}