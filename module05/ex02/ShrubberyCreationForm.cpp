#include "ShrubberyCreationForm.hpp"  
#include <fstream>
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): Form(obj.target, 25, 5)
{
    this->target = obj.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
    this->target = obj.target;
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void ShrubberyCreationForm::action() const
{
    std::ofstream myfile;
    myfile.open(this->target + "_shrubbery", std::fstream::out);
    myfile << "                     .                          " << std::endl;
    myfile << "                     M                          " << std::endl;
    myfile << "                    dM                          " << std::endl;
    myfile << "                    MMr                         " << std::endl;
    myfile << "                   4MMML                  .     " << std::endl;
    myfile << "                   MMMMM.                xf     " << std::endl;
    myfile << "   .              \"MMMMM               .MM-     " << std::endl;
    myfile << "    Mh..          +MMMMMM            .MMMM      " << std::endl;
    myfile << "    .MMM.         .MMMMML.          MMMMMh      " << std::endl;
    myfile << "     )MMMh.        MMMMMM         MMMMMMM       " << std::endl;
    myfile << "      3MMMMx.     \'MMMMMMf      xnMMMMMM\"       " << std::endl;
    myfile << "      '*MMMMM      MMMMMM.     nMMMMMMP\"        " << std::endl;
    myfile << "        *MMMMMx    \"MMMMM\\    .MMMMMMM=         " << std::endl;
    myfile << "         *MMMMMh   \"MMMMM\"   JMMMMMMP           " << std::endl;
    myfile << "           MMMMMM   3MMMM.  dMMMMMM            ." << std::endl;
    myfile << "            MMMMMM  \"MMMM  .MMMMM(        .nnMP\"" << std::endl;
    myfile << "=..          *MMMMx  MMM\"  dMMMM\"    .nnMMMMM*  " << std::endl;
    myfile << "  \"MMn...     'MMMMr \'MM   MMM\"   .nMMMMMMM*\"   " << std::endl;
    myfile << "   \"4MMMMnn..   *MMM  MM  MMP\"  .dMMMMMMM\"\"     " << std::endl;
    myfile << "     ^MMMMMMMMx.  *ML \"M .M*  .MMMMMM**\"        " << std::endl;
    myfile << "        *PMMMMMMhn. *x > M  .MMMM**\"\"           " << std::endl;
    myfile << "           \"\"**MMMMhx/.h/ .=*\"                  " << std::endl;
    myfile << "                    .3P\"%....                   " << std::endl;
    myfile << "                  nP\"     \"*MMnx       pizzaboiiiiiiiiii" << std::endl;
    myfile.close();
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->get_is_signed())
            throw Form::fnse;
        if (executor.getGrade() > this->GetGradeToGetExecuted())
            throw Form::gtle;
        this->action();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit (420);
    }
}