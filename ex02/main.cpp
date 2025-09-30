#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat  b("Hitchcock", 3);
    ShrubberyCreationForm   f("frame");
    RobotomyRequestForm     r("Spielberg");
    PresidentialPardonForm  p("Lanthimos");

    std::cout << std::endl;
    b.signForm(f);
    f.executeAction();
    r.executeAction();
    p.executeAction();

    std::cout << std::endl;
    
    return 0;
}