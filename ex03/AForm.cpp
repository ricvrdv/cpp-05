#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Default constructor
AForm::AForm()
    : name_("Default"),
    isSigned_(false),
    gradeToSign_(150),
    gradeToExec_(150)
{
    std::cout << "Form Default Constructor was called\n";
}

// Parametric constructor
AForm::AForm( std::string const &name, int gradeToSign, int gradeToExec)
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
AForm::AForm( AForm const &other )
    : name_(other.name_),
    isSigned_(other.isSigned_),
    gradeToSign_(other.gradeToSign_),
    gradeToExec_(other.gradeToExec_)
{
    std::cout << "Form Copy constructor was called\n";
}

// Destructor
AForm::~AForm()
{
    std::cout << "Form \"" << this->name_ << "\" was destroyed\n";
}

// Copy assignment operator
AForm    &AForm::operator=( AForm const &other )
{
    if (this != &other)
        this->isSigned_ = other.isSigned_;
    std::cout << "Form was copied\n";
    return (*this);
}

// Insertion operator overload
std::ostream &operator<<( std::ostream& os, const AForm& f )
{
    os << "Form: \"" << f.getName() << "\", Signed: " << (f.getIsSigned() ? "yes" : "no")
       << ", Grade to sign: " << f.getGradeToSign()
       << ", Grade to execute: " << f.getGradeToExec() << std::endl;
    return (os);
}

// Getters
std::string const   &AForm::getName() const
{
    return (this->name_);
}

bool    AForm::getIsSigned() const
{
    return (this->isSigned_);
}

int AForm::getGradeToSign() const
{
    return (this->gradeToSign_);
}

int AForm::getGradeToExec() const
{
    return (this->gradeToExec_);
}

// Change form's status
void    AForm::beSigned( Bureaucrat const &b )
{
    if (b.getGrade() <= gradeToSign_)
        isSigned_ = true;
    else
        throw GradeTooLowException();
}

// Execute form
void    AForm::execute( Bureaucrat const &executor ) const
{
    if (!isSigned_)
        throw FormNotSignedException();
    if (executor.getGrade() > gradeToExec_)
        throw GradeTooLowException();
    executeAction();
}

// Exceptions
const char  *AForm::GradeTooHighException::what() const throw()
{
    return ("Form error: Grade is too high!");
}

const char  *AForm::GradeTooLowException::what() const throw()
{
    return ("Form error: Grade is too low!");
}

const char  *AForm::FormNotSignedException::what() const throw()
{
    return ("Form error: Form is not signed!");
}