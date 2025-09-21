#include "Form.hpp"
#include "Bureaucrat.hpp"

// Default constructor
Form::Form()
    : name_("Default"),
    isSigned_(false),
    gradeToSign_(150),
    gradeToExec_(150)
{
    std::cout << "Form Default Constructor was called\n";
}

// Parametric constructor
Form::Form( std::string const &name, int gradeToSign, int gradeToExec)
    : name_(name),
    isSigned_(false),
    gradeToSign_(gradeToSign),
    gradeToExec_(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
    std::cout << "Form \"" << name << "\" was created\n";
}

// Copy constructor
Form::Form( Form const &other )
    : name_(other.name_),
    isSigned_(other.isSigned_),
    gradeToSign_(other.gradeToSign_),
    gradeToExec_(other.gradeToExec_)
{
    std::cout << "Form Copy constructor was called\n";
}

// Destructor
Form::~Form()
{
    std::cout << "Form \"" << this->name_ << "\" was destroyed\n";
}

// Copy assignment operator
Form    &Form::operator=( Form const &other )
{
    if (this != &other)
        this->isSigned_ = other.isSigned_;
    std::cout << "Form was copied\n";
    return (*this);
}

// Insertion operator overload
std::ostream &operator<<( std::ostream& os, const Form& f )
{
    os << "Form: \"" << f.getName() << "\", Signed: " << (f.getIsSigned() ? "yes" : "no")
       << ", Grade to sign: " << f.getGradeToSign()
       << ", Grade to execute: " << f.getGradeToExec() << std::endl;
    return (os);
}

// Getters
std::string const   &Form::getName() const
{
    return (this->name_);
}

bool    Form::getIsSigned() const
{
    return (this->isSigned_);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign_);
}

int Form::getGradeToExec() const
{
    return (this->gradeToExec_);
}

// Change form's status
void    Form::beSigned( Bureaucrat const &b )
{
    if (b.getGrade() <= gradeToSign_)
        isSigned_ = true;
    else
        throw GradeTooLowException();
}

// Exceptions
const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Form error: Grade is too high!");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Form error: Grade is too low!");
}