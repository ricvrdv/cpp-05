#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    public:

        PresidentialPardonForm();
        PresidentialPardonForm( const std::string target );
        PresidentialPardonForm( PresidentialPardonForm const &other );
        PresidentialPardonForm&  operator=( PresidentialPardonForm const &other );
        ~PresidentialPardonForm();

        void    execute( Bureaucrat const &executor );
};

#endif