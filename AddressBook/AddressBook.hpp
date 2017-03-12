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
        //void rmContact()
        //void findContact()
        Contact& getContact(std::size_t index);
    //void editContact()
        //void saveToFile()
        //void loadFromFile()
        //void printContact()
        //void printAll()
};
