#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# define YELLOW "\033[0;93m"
# define CYAN "\033[0;96m"
# define RESET "\033[0m"

# include "AForm.hpp"
# include <cstdlib>

class   RobotomyRequestForm : public AForm
{
    private:

        std::string target_;
    
    public:

        RobotomyRequestForm();
        RobotomyRequestForm( const std::string target );
        RobotomyRequestForm( RobotomyRequestForm const &other );
        RobotomyRequestForm&  operator=( RobotomyRequestForm const &other );
        virtual ~RobotomyRequestForm();

        virtual void    executeAction() const;
};

#endif