/*
#include "pch.h"
#include "C:\Users\antho\Learning_CPP\Calculator\Calculator\SimpleCalculator.cpp" 
#include "../Calculator/SimpleCalculator.h"
#include "../Calculator/SimpleCalculator.cpp"
#include "../Calculator/Calculator.h"
#include "../Calculator/Calculator.cpp"
*/


#include "gtest/gtest.h"
#include "SimpleCalculator.h"
#include "SimpleCalculator.cpp"
#include "Calculator.h"
#include "Calculator.cpp"



/* Test fixture for simple calculator 
 *
 * Please see http://google.github.io/googletest/primer.html for more details
 * 
*/

namespace my 
{
    namespace project 
    {
        namespace 
        {
            class Calculator_Arithmetic_Tests : public testing::Test
            {
                protected:

                    // Constructor - setup happens in here
                    Calculator_Arithmetic_Tests()
                    {
                    }
                        
                    // Destructor - teardown happens here
                    ~Calculator_Arithmetic_Tests()
                    {

                    }
                            
                    // SetUp can be overriden - this method will be called after constructor, before each test
                    void SetUp()
                    {
                        s = new SimpleCalculator();
                    }
                                
                    // TearDown can be overriden - this method is called after destructor, after each test
                    void TearDown()
                    {
                        delete s;        
                    }  

                public:
                    SimpleCalculator *s;
            };
            
            class Calculator_Parsing_Tests : public testing::Test
            {
                protected:

                    // Constructor - setup happens in here
                    Calculator_Parsing_Tests()
                    {
                    }
                        
                    // Destructor - teardown happens here
                    ~Calculator_Parsing_Tests()
                    {

                    }
                            
                    // SetUp can be overriden - this method will be called after constructor, before each test
                    void SetUp()
                    {
                        s = new SimpleCalculator();
                    }
                                
                    // TearDown can be overriden - this method is called after destructor, after each test
                    void TearDown()
                    {
                        delete s;        
                    }  

                public:
                    SimpleCalculator *s;
            };

            /* Start of Simple Calculator Addition Tests */
            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_1) 
            {
	            int n = s->add(1, 3);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }


            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_2) 
            {
	            int n = s->add(3, 1);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_Inequality_Test) 
            {
	            int n = s->add(1, 3);
	            EXPECT_NE(n, 5);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Nums_1) 
            {
	            int n = s->add(-1, -3);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Nums_2) 
            {
	            int n = s->add(-3, -1);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_NegativeNums_Inequality_Test) 
            {
	            int n = s->add(-1, -3);
	            EXPECT_NE(n, 5);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Num_1) 
            {
	            int n = s->add(3, -1);
	            EXPECT_EQ(n, 2);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Num_2) 
            {
	            int n = s->add(-3, 1);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Addition Tests */
            

            /* Start of Simple Calculator Subtraction Tests */
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_1) 
            {
            	int n = s->subtract(1, 3);
	            EXPECT_EQ(n, 2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_2) 
            {
	            int n = s->subtract(3, 1);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_Inequality_Test) 
            {
	            int n = s->subtract(1, 3);
	            EXPECT_NE(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_1) 
            {
	            int n = s->subtract(1, -3);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_2) 
            {
	            int n = s->subtract(-1, 3);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_1) 
            {
	            int n = s->subtract(-1, -3);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_Inequality_Test) 
            {
	            int n = s->subtract(-1, -3);
	            EXPECT_NE(n, -5);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Subtraction Tests */

            
            /* Start of Simple Calculator Multiplication Tests */
            TEST_F(Calculator_Arithmetic_Tests, Multipy_By_Zero) 
            {
                int n = s->multiply(3, 0);
	            EXPECT_EQ(n, 0);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Positive_Nums_1) 
            {
	            int n = s->multiply(3, 2);
	            EXPECT_EQ(n, 6);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Negative_Num_1) 
            {
	            int n = s->multiply(-1, 3);
	            EXPECT_NE(n, 3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Negative_Num_2) 
            {
	            int n = s->multiply(1, -3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Multiplication Tests */
             
            /* Start of Simple Calculator Division Tests */
            TEST_F(Calculator_Arithmetic_Tests, Divide_Positive_Nums_1) 
            {
	            int n = s->divide(9, 3);
	            EXPECT_EQ(n, 3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Num_1) 
            {
	            int n = s->divide(-9, 3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Nums_1)  
            {
	            int n = s->divide(-1, -3);
	            EXPECT_NE(n, -3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Num_2) 
            {
	            int n = s->divide(9, -3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Division Tests */
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_1) 
            {
	            auto n = s->add(12.1, 9);
	            EXPECT_EQ(n, 21.1);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_2) 
            {
	            auto n = s->add(12, 9.3);
	            EXPECT_EQ(n, 21.3);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_3) 
            {
	            auto n = s->add(12.2, 9.3);
	            EXPECT_EQ(n, 21.5);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_4) 
            {
	            auto n = s->add(12.25, 9.34);
	            EXPECT_EQ(n, 21.59);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Double_Num_1) 
            {
	            auto n = s->add(-12.25, 9.34);
	            EXPECT_EQ(n, -2.91);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Double_Num_2) 
            {
	            auto n = s->add(12.25, -9.34);
	            EXPECT_EQ(n, 2.91);
	            EXPECT_TRUE(true);
            }
          
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Double_Num_3) 
            {
	            auto n = s->add(-12.25, -9.34);
	            EXPECT_EQ(n, -21.59);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Double_Num_4) 
            {
	            auto n = s->add(-12.25, 0);
	            EXPECT_EQ(n, -12.25);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Double_Num_5) 
            {
	            auto n = s->add(0, -9.34);
	            EXPECT_EQ(n, -9.34);
	            EXPECT_TRUE(true);
            }
         
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_1) 
            {
	            auto n = s->subtract(0, -9.34);
	            EXPECT_EQ(n, -9.34);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_2) 
            {
	            auto n = s->subtract(-9.34, 0);
	            EXPECT_EQ(n, 9.34);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_3) 
            {
	            auto n = s->subtract(-9.34, 1.25);
	            EXPECT_EQ(n, 10.59);
	            EXPECT_TRUE(true);
            }
           
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_4) 
            {
	            auto n = s->subtract(9.34, -1.25);
	            EXPECT_EQ(n, -10.59);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_5) 
            {
	            auto n = s->subtract(-9.34, -1.25);
	            EXPECT_EQ(n, 8.09);
	            EXPECT_TRUE(true);
            }
        
            /*
            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_5) 
            {
	            s->parse_expression("12.1 + 11.3");
                s->calculate();
	            EXPECT_EQ(0,0);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_6) 
            {
	            s->parse_expression("12 + 11");
                s->calculate();
	            EXPECT_EQ(0,0);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Double_Num_7) 
            {
	            s->parse_expression("12.5 + 11");
                s->calculate();
	            EXPECT_EQ(0,0);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, IntegerNum1) 
            {
	            s->parse_expression("123");
	            EXPECT_EQ(s->get_int_num(0), 123);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, IntegerNum2) 
            {
	            s->parse_expression("123 + 456");
	            EXPECT_EQ(s->get_int_num(0), 123);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, IntegerNum3) 
            {
	            s->parse_expression("123 + 456");
	            EXPECT_EQ(s->get_int_num(1), 456);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, DoubleNum1) 
            {
	            s->parse_expression("123.456");
	            EXPECT_EQ(s->get_double_num(0), 123.456);
	            EXPECT_TRUE(true);
            }
            */
        }
    }
}

// Running test will use this main method
int main(int argc, char **argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}