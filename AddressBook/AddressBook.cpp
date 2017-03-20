#include "AddressBook.hpp"
#include <algorithm>

std::size_t AddressBook::size()
{
    return data.size();
}

void AddressBook::addContact(std::string aName, std::string aSurename, std::string aEmail, std::string aPesel)  
{
    data.push_back(Contact(aName, aSurename, aEmail, aPesel));
}

void AddressBook::addContact(const Contact& aContact)
{
    data.push_back(aContact);
}

Contact& AddressBook::getContact(std::size_t index)
{
    return data.at(index);
}

int AddressBook::findContactIndex(std::string aSurename)
{
    for(std::size_t i = 0; i < data.size(); ++i)
    {
        if(data.at(i).surename == aSurename)
            return i;
    }
    return Contact::NOT_FOUND;
}

Contact& AddressBook::findContact(std::string aSurename)
{
    ContactCollection::iterator it = std::find_if(data.begin(), data.end(), 
            [=](ContactType& c) -> bool { return c.surename == aSurename; } ); 
    
    if(it == data.end())
        throw std::runtime_error("Contact not found");
    
    return *it;
}
