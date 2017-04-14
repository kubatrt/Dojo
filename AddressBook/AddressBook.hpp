#include <vector>
#include <memory>
#include "Contact.hpp"

typedef Contact ContactType;
typedef std::unique_ptr<ContactType> ContactPtr;
typedef std::vector<ContactType> ContactCollection;


class AddressBook
{
    private:
        ContactCollection data;


    public:
        AddressBook() = default;
        AddressBook(const AddressBook&) = delete;
        AddressBook& operator= (const AddressBook&) = delete;

        std::size_t size();
        void addContact(std::string aName, std::string aSurename, std::string aEmail, std::string aPesel);
        void addContact(const Contact& aContact);
        int findContactIndex(std::string aSurename);
        Contact& findContact(std::string aSurename);
        Contact& getContact(std::size_t index);
        void editContact(std::string aSurename, const Contact& newContact);
        void deleteContact(std::string aSurename);
        //void saveToFile()
        //void loadFromFile()
        //void printContact()
        //void printAll()
};
