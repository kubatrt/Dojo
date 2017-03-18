#include "Mindefield_UT.cpp"
#include <gtest/gtest.h>

typedef unsigned int uint;

namespace test
{
    const uint  width = 10;
    const uint  height = 10;
    const uint  numberOfBombs = 10;
}

class MinefieldTest : public ::testing::Test
{
    protected:
        std::shared_ptr<Minefield> sut = std::make_shared(Minefield(test::width, test::height, test::numberOfBombs));
};


TEST(MindefieldTest, instance_exist)
{

}
