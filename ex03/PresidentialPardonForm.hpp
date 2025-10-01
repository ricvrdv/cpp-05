#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    private:

        std::string target_;

    public:

        PresidentialPardonForm();
        PresidentialPardonForm( const std::string target );
        PresidentialPardonForm( PresidentialPardonForm const &other );
        PresidentialPardonForm&  operator=( PresidentialPardonForm const &other );
        virtual ~PresidentialPardonForm();
        
        virtual void    executeAction() const;
};

#endif