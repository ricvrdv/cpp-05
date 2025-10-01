#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class   Intern
{
    public:

        Intern();
        Intern( Intern const &other );
        Intern  &operator=( Intern const &other );
        ~Intern();

        AForm   *makeForm( const std::string &formName, const std::string &formTarget );

    class   FormDoesntExistException : public std::exception
    {
        public:

            virtual const char  *what() const throw();
    };
};

#endif