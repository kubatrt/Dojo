#include "AddressBook.hpp"

std::size_t AddressBook::size()
{
    return data.size();
}

void AddressBook::addContact(std::string aName, std::string aSurename, std::string aEmail, std::string aPesel)  
{
    data.push_back(Contact(aName, aSurename, aEmail, aPesel));
}


Contact& AddressBook::getContact(std::size_t index)
{
    return data.at(index);
}
