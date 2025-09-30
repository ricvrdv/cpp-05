#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat  b("Hitchcock", 3);
    ShrubberyCreationForm   f("frame");

    b.signForm(f);
    f.executeAction();
    return 0;
}