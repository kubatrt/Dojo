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
};
