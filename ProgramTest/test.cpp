#include "pch.h"
#include "../TDtestsUnitaires/Calculator.cpp"
#include <gtest/gtest.h>

TEST(DISABLE_TestFactorielle, FirstTest) {
	Calculator cal; // simple calculator object

	EXPECT_EQ(1, cal.factorielle(0)); //Sans modification du code source, ce test n'est pas validé
	ASSERT_EQ(1, cal.factorielle(0));
}

TEST(TestDivision, GlobalTests) {
	Calculator cal; // simple calculator object
	
	//Test 1 - Expected_double
	EXPECT_DOUBLE_EQ (2, cal.div(4, 2)); 

	//Test 2 - EXPECT_NEAR
	EXPECT_NEAR(2.333, cal.div(7, 3), 0.001);
	EXPECT_NEAR(2.333, cal.div(7, 3), 0.0001);
}

TEST(TestDivision, DivisionByZero) {
	Calculator cal; // simple calculator object

	//Test 3 - ASSERT_EXIT
	ASSERT_EXIT(cal.div(7, 0), ::testing::ExitedWithCode(-1), "Error: Division by 0 not possible");
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}