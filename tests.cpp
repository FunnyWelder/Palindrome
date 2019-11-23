#include "gtest/gtest.h"
#include "lib.h"

TEST(palindrome, expectedOneWord)
{
    char *str = new char[n];
    EXPECT_EQ(palindrome(strcpy(str, "Level")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Peep")), true);
    EXPECT_EQ(palindrome(strcpy(str, "malayalam")), true);
    EXPECT_EQ(palindrome(strcpy(str, "meme")), false);
    EXPECT_EQ(palindrome(strcpy(str, "true")), false);
}

TEST(palindrome, expectedCollocation)
{
    char *str = new char[n];
    EXPECT_EQ(palindrome(strcpy(str, "Live not on evil")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Madam Im Adam")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Live is life")), false);
}

TEST(palindrome, expectedSentence)
{
    char *str = new char[n];
    EXPECT_EQ(palindrome(strcpy(str, "Was it a car or a cat I saw")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Some men interpret nine memos")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Pull up if I pull up")), true);
    EXPECT_EQ(palindrome(strcpy(str, "Success is the child of audacity")), false);
    EXPECT_EQ(palindrome(strcpy(str, "You miss 100% of the shots you dont take")), false);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}