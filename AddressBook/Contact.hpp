#include <string>

using namespace std;


struct Contact
{
    Contact() = default;
    Contact(const Contact&) = default;
    Contact& operator= (const Contact&) = default;
    Contact(string aName, string aSurename, string aEmail, string aPesel);

    string name;
    string surename;
    string email;
    string pesel;

    friend bool operator== (const Contact&, const Contact&);
    friend bool operator!= (const Contact&, const Contact&);

    static const int NOT_FOUND;
};

std::ostream& operator<<(std::ostream& os,const Contact& contact);
