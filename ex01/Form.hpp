#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>

class   Bureaucrat;

class   Form
{
    private:

        std::string const   name_;
        bool    isSigned_;
        int const   gradeToSign_;
        int const   gradeToExec_;
    
    public:

        Form();
        Form( std::string const &name, int gradeToSign, int gradeToExec);
        Form( Form const &other );
        Form&   operator=( Form const &other );
        ~Form();

        std::string const   &getName() const;
        bool    getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void    beSigned( Bureaucrat const &b );
        
        class   GradeTooHighException : public std::exception
        {
            public:

                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception
        {
            public:

                virtual const char* what() const throw();
        };
};

std::ostream&   operator<<(std::ostream& os, const Form& f);

#endif