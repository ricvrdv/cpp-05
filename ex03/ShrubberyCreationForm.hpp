#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class   ShrubberyCreationForm : public AForm
{
    private:

        std::string target_;

    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm( const std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const &other );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm const &other );
        virtual ~ShrubberyCreationForm();

        virtual void    executeAction() const;
};

#endif