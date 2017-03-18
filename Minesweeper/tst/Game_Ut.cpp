#include "Game.hpp"
#include <gtest/gtest.hpp>

class GameTest : public ::testing::Test
{
    protected:
        Game sut;
};

TEST_F(GameTest, instance_exists)
{
}
