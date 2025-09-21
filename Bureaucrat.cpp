#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat() : name_("Unknown"), grade_(150)
{
    std::cout << "Default Constructor was called\n";
}

// Parametric Constructor
Bureaucrat::Bureaucrat( std::string const &name, int grade )
    : name_(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    grade_ = grade;
    std::cout << "Bureaucrat \"" << name << "\" with grade " << grade << " was created\n";
}

// Copy Constructor
Bureaucrat::Bureaucrat( Bureaucrat const &other)
    : name_(other.name_),
    grade_(other.grade_)
{
    std::cout << "Copy Constructor was called\n";
}

// Destructor
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat \"" << this->name_ << "\" was destroyed\n";
}

// Copy assignment operator
Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other )
{
    if (this != &other)
        this->grade_ = other.grade_;
    std::cout << "Copy assignment operator was called\n";
    return (*this);
}

// Insertion operator overload
std::ostream& operator<<( std::ostream& os, const Bureaucrat& b )
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (os);
}

// Getter
std::string const   &Bureaucrat::getName() const
{
    return (this->name_);
}

// Setter
int Bureaucrat::getGrade() const
{
    return (this->grade_);
}

// Increment grade
void    Bureaucrat::incrementGrade()
{
    if (this->grade_ <= 1)
        throw GradeTooHighException();
    this->grade_--;
    std::cout << this->name_ << " grade was incremented.\n";
}

// Decrement grade
void    Bureaucrat::decrementGrade()
{
    if (this->grade_ >= 150)
        throw GradeTooLowException();
    this->grade_++;
    std::cout << this->name_ << " grade was decremented.\n";
}

// Exceptions
const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat grade is too high (< 1)!");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade is too low (> 150)!");
}
