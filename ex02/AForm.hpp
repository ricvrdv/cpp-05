#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>

class   Bureaucrat;

class   AForm
{
    private:

        std::string const   name_;
        bool    isSigned_;
        int const   gradeToSign_;
        int const   gradeToExec_;
    
    public:

        AForm();
        AForm( std::string const &name, int gradeToSign, int gradeToExec );
        AForm( AForm const &other );
        AForm&   operator=( AForm const &other );
        ~AForm();

        std::string const	&getName() const;
        bool	getIsSigned() const;
        int	getGradeToSign() const;
        int	getGradeToExec() const;

        void    beSigned( Bureaucrat const &b );
        void    execute( Bureaucrat const &executor ) const;
        virtual void    executeAction() const = 0;
        
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

		class	FormNotSignedException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};
	};

std::ostream&   operator<<(std::ostream& os, const AForm& f);

#endif