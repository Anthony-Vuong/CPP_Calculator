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
#include <string>

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

            class Calculator_Calculate_Tests : public testing::Test
            {
                protected:

                    // Constructor - setup happens in here
                    Calculator_Calculate_Tests()
                    {
                    }
                        
                    // Destructor - teardown happens here
                    ~Calculator_Calculate_Tests()
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
            	int n = s->subtract(3, 1);
	            EXPECT_EQ(n, 2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_2) 
            {
	            int n = s->subtract(1, 3);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_Inequality_Test) 
            {
	            int n = s->subtract(3, 1);
	            EXPECT_NE(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_1) 
            {
	            int n = s->subtract(-3, 1);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_2) 
            {
	            int n = s->subtract(3, -1);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_1) 
            {
	            int n = s->subtract(-3, -1);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_Inequality_Test) 
            {
	            int n = s->subtract(-3, -1);
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
	            auto n = s->subtract(-9.34, 0);
	            EXPECT_EQ(n, -9.34);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_2) 
            {
	            auto n = s->subtract(0, -9.34);
	            EXPECT_EQ(n, 9.34);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_3) 
            {
	            auto n = s->subtract(1.25, -9.34);
	            EXPECT_EQ(n, 10.59);
	            EXPECT_TRUE(true);
            }
           
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_4) 
            {
	            auto n = s->subtract(-1.25, 9.34);
	            EXPECT_EQ(n, -10.59);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Double_Num_5) 
            {
	            auto n = s->subtract(-1.25, -9.34);
	            EXPECT_EQ(n, 8.09);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Arithmetic_Tests, Divide_Double_Num_1) 
            {
	            auto n = s->divide(9.99, 3.33);
	            EXPECT_EQ(n, 3);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Divide_Double_Num_2) 
            {
	            auto n = s->divide(3.33, 9.99);
	            EXPECT_EQ(n, 3.33 / 9.99);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Divide_Double_Num_3) 
            {
	            auto n = s->divide(9, 1.125);
	            EXPECT_EQ(n, 8);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Double_Num_4) 
            {
	            auto n = s->divide(1.125, 9);
	            EXPECT_EQ(n, 0.125);
	            EXPECT_TRUE(true);
            }
         
            TEST_F(Calculator_Arithmetic_Tests, Multiply_Double_Num_1) 
            {
	            auto n = s->multiply(1.125, 8);
	            EXPECT_EQ(n, 9);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Double_Num_2) 
            {
	            auto n = s->multiply(1.125, 3.175);
	            EXPECT_EQ(n, 3.571875);
	            EXPECT_TRUE(true);
            }
         
            TEST_F(Calculator_Arithmetic_Tests, Multiply_Double_Num_3) 
            {
	            auto n = s->multiply(8, 1.125);
	            EXPECT_EQ(n, 9);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Double_Num_4) 
            {
	            auto n = s->multiply(0.125, 0.25);
	            EXPECT_EQ(n, 0.03125);
	            EXPECT_TRUE(true);
            }
 
            TEST_F(Calculator_Arithmetic_Tests, Modulus_Integer_Nums_1) 
            {
	            auto n = s->remainder(25, 6);
	            EXPECT_EQ(n, 1);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Modulus_Double_Nums_1) 
            {
	            auto n = s->remainder(25, 6.4);
                float f{5.8};
                float g{n};
	            EXPECT_EQ(g, f);
	            EXPECT_TRUE(true);
            }
 
            TEST_F(Calculator_Arithmetic_Tests, Modulus_Double_Nums_2) 
            {
	            auto n = s->remainder(32.47, 6.42);
                float f{0.37};
                float g{n};
	            EXPECT_EQ(g, f);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Square_Integer_Num_1) 
            {
	            auto n = s->square(5);
	            EXPECT_EQ(n, 25);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Square_Double_Num_1) 
            {
	            auto n = s->square(5.5);
	            EXPECT_EQ(n, 30.25);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Square_Double_Num_2) 
            {
	            auto n = s->square(0.125);
	            EXPECT_EQ(n, 0.015625);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Square_Negative_Integer_Num_1) 
            {
	            auto n = s->square(-3);
	            EXPECT_EQ(n, 9);
	            EXPECT_TRUE(true);
            }
      
            TEST_F(Calculator_Arithmetic_Tests, Square_Negative_Double_Num_1) 
            {
	            auto n = s->square(-3.75);
	            EXPECT_EQ(n, 14.0625);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Square_Root_Integer_Num_1) 
            {
	            auto n = s->square_root(25);
	            EXPECT_EQ(n, 5);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Square_Root_Double_Num_1) 
            {
	            auto n = s->square_root(4.515625);
	            EXPECT_EQ(n, 2.125);
            }
          
            TEST_F(Calculator_Arithmetic_Tests, Exponent_Integers_Num_1) 
            {
	            auto n = s->exponent(2, 2);
	            EXPECT_EQ(n, 4);
            }

            TEST_F(Calculator_Arithmetic_Tests, Exponent_Integers_Num_2) 
            {
	            auto n = s->exponent(2, 0);
	            EXPECT_EQ(n, 1);
            }

            TEST_F(Calculator_Arithmetic_Tests, Exponent_Integers_Num_3) 
            {
	            auto n = s->exponent(4, -1);
                double d{0.25};
	            EXPECT_EQ(n, d);
            }

            TEST_F(Calculator_Arithmetic_Tests, Exponent_Integers_Num_4) 
            {
	            auto n = s->exponent(-4, 2);
	            EXPECT_EQ(n, 16);
            }

            TEST_F(Calculator_Arithmetic_Tests, Negative_Square_Root_Integer_Num_Exception_1) 
            {
	            EXPECT_THROW(s->square_root(-7), NegativeUnderRadicalException);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_By_Zero_Exception_1) 
            {
	            EXPECT_THROW(s->divide(5, 0), DivideByZeroException);
            }
          
            TEST_F(Calculator_Arithmetic_Tests, Divide_By_Zero_Exception_2) 
            {
	            EXPECT_THROW(s->divide(5, 0.0), DivideByZeroException);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_By_Zero_Exception_3) 
            {
	            EXPECT_THROW(s->remainder(5.55, 0), DivideByZeroException);
            }
            /* End of Calculator Arithmetic Tests */
            
            /* Start of Calculcator Parsing Tests */
            TEST_F(Calculator_Parsing_Tests, IntegerNum1) 
            {
	            s->parse_expression("123 + 456");
                std::string str{"123"};
	            EXPECT_EQ(s->get_operand(0), str);
	            EXPECT_TRUE(true);
            }
             
            TEST_F(Calculator_Parsing_Tests, IntegerNum2) 
            {
	            s->parse_expression("123 + 456");
	            EXPECT_EQ(s->get_operand(1), "456");
	            EXPECT_TRUE(true);
            }
         
            TEST_F(Calculator_Parsing_Tests, IntegerNum3) 
            {
	            s->parse_expression("123");
	            EXPECT_EQ(s->get_operand(0), "123");
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Parsing_Tests, IntegerNum4) 
            {
	            s->parse_expression("123+456+789+987");
	            EXPECT_EQ(s->get_operand(1), "456");
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Parsing_Tests, DoubleNum1) 
            {
	            s->parse_expression("123.456");
	            EXPECT_EQ(s->get_operand(0), "123.456");
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, DoubleNum2) 
            {
	            s->parse_expression("123.456 + 987.5");
	            EXPECT_EQ(s->get_operand(1), "987.5");
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, DoubleNum3) 
            {
	            s->parse_expression("123.456 + 987.5");
	            EXPECT_EQ(s->get_operand(0), "123.456");
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Parsing_Tests, DoubleNum4) 
            {
	            s->parse_expression("12.3+4.56+98.7+2.35+90.98");
	            EXPECT_EQ(s->get_operand(3), "2.35");
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, Parentheses_Test_Basic1) 
            {
	            s->parse_expression("(123.456 + 987.5)");
	          //  EXPECT_EQ(s->get_operand(0), "123.456");
	          //  EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, Parentheses_Test_Basic2) 
            {
	            s->parse_expression("(999 + (123.456 + 987.5)");
	          //  EXPECT_EQ(s->get_operand(0), "123.456");
	          //  EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Parsing_Tests, Parentheses_Test_Basic3) 
            {
	            s->parse_expression("((123.456 + 987.5)+999)");
	          //  EXPECT_EQ(s->get_operand(0), "123.456");
	          //  EXPECT_TRUE(true);
            }
           
            TEST_F(Calculator_Parsing_Tests, Parentheses_Test_Basic4) 
            {
	            s->parse_expression("((123.456 + 987.5) + (999*000)");
	          //  EXPECT_EQ(s->get_operand(0), "123.456");
	          //  EXPECT_TRUE(true);
            }
            /* End of Calculcator Parsing Tests */


            /* Start of Calculcator Calculate Tests */
            TEST_F(Calculator_Calculate_Tests, Integer_Add_Num_1) 
            {
	            s->parse_expression("1+5");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 6);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Calculate_Tests, Double_Add_Num_1) 
            {
	            s->parse_expression("1.1+5.5");
                s->calculate();
                float d{6.6};
	            EXPECT_EQ(s->get_result(), d);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Calculate_Tests, Double_Subtract_Num_1) 
            {
	            s->parse_expression("1.1-5.5");
                s->calculate();
                float d{-4.4};
	            EXPECT_EQ(s->get_result(), d);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Calculate_Tests, Integer_Subtract_Num_1) 
            {
	            s->parse_expression("1-5");
                s->calculate();
	            EXPECT_EQ(s->get_result(), -4);
	            EXPECT_TRUE(true);
            }
         
            TEST_F(Calculator_Calculate_Tests, Double_Multiply_Num_1) 
            {
	            s->parse_expression("1.1*5.5");
                s->calculate();
                float d{6.05};
	            EXPECT_EQ(s->get_result(), d);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Calculate_Tests, Integer_Multiply_Num_1) 
            {
	            s->parse_expression("6*5");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 30);
	            EXPECT_TRUE(true);
            }
   
            TEST_F(Calculator_Calculate_Tests, Double_Divide_Num_1) 
            {
	            s->parse_expression("5.5/1.1");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 5);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Calculate_Tests, Integer_Divide_Num_1) 
            {
	            s->parse_expression("10/2");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 5);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Calculate_Tests, Integer_Add_Multiple_Nums_1) 
            {
	            s->parse_expression("1+2+3");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 6);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Calculate_Tests, Integer_Subtract_Multiple_Nums_1) 
            {
	            s->parse_expression("3-2-1");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 0);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Calculate_Tests, Integer_Multiply_Multiple_Nums_1) 
            {
	            s->parse_expression("3*2*1");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 6);
	            EXPECT_TRUE(true);
            }
        
            TEST_F(Calculator_Calculate_Tests, Integer_Divide_Multiple_Nums_1) 
            {
	            s->parse_expression("40 / 2 / 5");
                s->calculate();
	            EXPECT_EQ(s->get_result(), 4);
	            EXPECT_TRUE(true);
            }
        }
    }
}

// Running test will use this main method
int main(int argc, char **argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
