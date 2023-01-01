#include "Person.hpp"
#include <gtest/gtest.h>

namespace
{
  TEST(PersonTestSuite, DefaultConstructor)
  {
    Person p{Person()};
    EXPECT_EQ(p.GetAge(), 0);
    EXPECT_EQ(p.GetName(), "None");
  }

  TEST(PersonTestSuite, ConstructorWNameAge)
  {
    Person p{Person("Tom", 10)};
    EXPECT_EQ(p.GetAge(), 10);
    EXPECT_EQ(p.GetName(), "Tom");
  }

  TEST(PersonTestSuite, CopyConstructor)
  {
    Person p1{Person("Tom", 10)};
    Person p2 = p1; 
    EXPECT_EQ(p2.GetAge(), 10);
    EXPECT_EQ(p2.GetName(), "Tom");
  }


}