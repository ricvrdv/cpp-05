#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class   RobotomyRequestForm : public AForm
{
    private:

        std::string target_;
    
    public:

        RobotomyRequestForm();
        RobotomyRequestForm( const std::string target );
        RobotomyRequestForm( RobotomyRequestForm const &other );
        RobotomyRequestForm&  operator=( RobotomyRequestForm const &other );
        ~RobotomyRequestForm();

        virtual void    executeAction() const;
};

#endif