#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class   ShrubberyCreationForm : public AForm
{
    private:

        std::string target_;

    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const &other );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm const &other );
        ~ShrubberyCreationForm();

        void    execute( Bureaucrat const &executor );
};

#endif