#include "AddressBook.hpp"
#include <gtest/gtest.h>


class AddressBookTest : public ::testing::Test
{
    protected:
        AddressBook book;
};


TEST_F(AddressBookTest, checkInstance)
{

}

TEST_F(AddressBookTest, checkInitialSize)
{
    ASSERT_EQ(0, book.size());
}

TEST_F(AddressBookTest, addContact)
{
    book.addContact("Jan", "Kowalski", "jank@gmail.com", "12345678901");
    
    ASSERT_EQ(1, book.size());
}

TEST_F(AddressBookTest, getContact)
{
    
    book.addContact("Jan", "Kowalski", "jank@gmail.com", "12345678901");
    Contact& contact = book.getContact(0);

    ASSERT_EQ("Jan", contact.name);
    ASSERT_EQ("Kowalski", contact.surename);
    ASSERT_EQ("jank@gmail.com", contact.email);
    ASSERT_EQ("12345678901", contact.pesel);
}

TEST_F(AddressBookTest, findContact)
{
    
}
TEST_F(AddressBookTest, rmContact)
{
    
}
TEST_F(AddressBookTest, editContact)
{
    
}
