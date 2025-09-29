#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class AForm;

class   Bureaucrat
{
    private:

        std::string const   name_;
        int grade_;

    public:

        Bureaucrat();
        Bureaucrat( std::string const &name, int grade );
        Bureaucrat( Bureaucrat const &other );
        Bureaucrat& operator=( Bureaucrat const &other );
        ~Bureaucrat();

        std::string const   &getName() const;
        int getGrade() const;

        void    incrementGrade();
        void    decrementGrade();

        void    signForm( AForm &f );
        void    executeForm( AForm const & form ) const;

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

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& b);

#endif