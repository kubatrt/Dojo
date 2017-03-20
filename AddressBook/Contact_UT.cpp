#include <gtest/gtest.h>
#include "Contact.hpp"

class ContactTest : public ::testing::Test
{
    protected:
        Contact contact;
};

TEST_F(ContactTest, checkIfInitialValuesAreEmpty)
{
    EXPECT_EQ("", contact.name);
    EXPECT_EQ("", contact.surename);
    EXPECT_EQ("", contact.email);
    EXPECT_EQ("", contact.pesel);
}

TEST_F(ContactTest, areContactsEqual)
{
    Contact a("Ana", "Pe", "ap@mail.com", "12345678901");
    Contact b("Ana", "Pe", "ap@mail.com", "12345678901");

    ASSERT_EQ(a, b);
}

TEST_F(ContactTest, areContactsNotEqual)
{
    Contact a("Ana", "Pe", "ap@mail.com", "12345678901");
    Contact b("Dona", "Pe", "dp@mail.com", "12345678901");

    ASSERT_NE(a, b);
}


TEST_F(ContactTest, checkStringFromContact)
{
    Contact contact("Jan", "Kowalski", "jk@mail.com", "12345678901");

    std::ostringstream oss;
    oss << contact;
    std::cout << contact << std::endl;
    const char* str = "Jan Kowalski jk@mail.com 12345678901";

    //ASSERT_STREQ(str, oss.str().c_str());
}


