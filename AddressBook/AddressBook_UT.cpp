#include "AddressBook.hpp"
#include <gtest/gtest.h>


class AddressBookTest : public ::testing::Test
{
    protected:
        AddressBook book;   // system under test
    
       virtual void SetUp() {

       }

       virtual void TearDown() {

       }
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

TEST_F(AddressBookTest, addExistingContact)
{
    Contact contact("Mir", "Uber", "mu@mail.com", "12345678901");
    book.addContact(contact);

    ASSERT_EQ(1, book.size());
    EXPECT_EQ(contact, book.getContact(0));
}

TEST_F(AddressBookTest, getContact)
{
    
    book.addContact("Jan", "Kowalski", "jank@gmail.com", "12345678901");
    Contact& contact = book.getContact(0);

    // TODO: overload == operator of contact
    ASSERT_EQ("Jan", contact.name);
    ASSERT_EQ("Kowalski", contact.surename);
    ASSERT_EQ("jank@gmail.com", contact.email);
    ASSERT_EQ("12345678901", contact.pesel);
}

TEST_F(AddressBookTest, findContact)
{
    book.addContact("Jan", "Kowalski", "jank@gmail.com", "12345678901");
    book.addContact("Marek", "Kwiatkowski", "kwiat@gmail.com", "12345678902");
    
    Contact& c = book.findContact("Kwiatkowski");
    ASSERT_EQ("Kwiatkowski", c.surename);    
}

TEST_F(AddressBookTest, findContactIndex)
{
    book.addContact("Jan", "Kowalski", "jank@gmail.com", "12345678901");
    book.addContact("Marek", "Kwiatkowski", "kwiat@gmail.com", "12345678902");
    ASSERT_EQ(1, book.findContactIndex("Kwiatkowski"));    
}

TEST_F(AddressBookTest, findContactIndex_NotFound)
{
    ASSERT_EQ(Contact::NOT_FOUND, book.findContactIndex("Kowlaski"));
}

TEST_F(AddressBookTest, findContact_NotFound)
{
   ASSERT_THROW(book.findContact("Kowalski"), std::runtime_error); 
}
