#include "Contact.hpp"
#include <string>
#include <sstream>

const int Contact::NOT_FOUND = -1;

Contact::Contact(string aName, string aSurename, string aEmail, string aPesel)
    : name(aName), surename(aSurename), email(aEmail), pesel(aPesel)
{}

/*bool Contact::operator== (const Contact& other)
{
    return (this->name == other.name)
        && (this->surename == other.surename)
        && (this->email == other.email) 
        && (this->pesel == other.pesel);
}*/

bool operator== (const Contact& lhs, const Contact& rhs)
{
    return (lhs.name == rhs.name)
        && (lhs.surename == rhs.surename)
        && (lhs.email == rhs.email) 
        && (lhs.pesel == rhs.pesel);
}

bool operator!= (const Contact& lhs, const Contact& rhs)
{
    return !(lhs == rhs);
}

std::ostream& operator<< (std::ostream& os, const Contact& contact)
{
    //std::ostringstream oss;
    os << contact.name << " " << contact.surename << " " << contact.email << " " << contact.pesel;
    //os << oss.str();
    return os;
}
