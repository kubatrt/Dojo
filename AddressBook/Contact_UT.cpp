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
