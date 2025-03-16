#include "pch.h"
#include "CppUnitTest.h"
#include "../CSE_6283_Assignment2_App/CSE_6283_Assignment2_App.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2test
{
	TEST_CLASS(Assignment2test)
	{
	public:
		
		TEST_METHOD(TestWeightConversion)
		{
            double result = poundsToKg(1);
            Assert::AreEqual(result, 0.45);
		}

        TEST_METHOD(TestHeightConversion)
        {
            double result = inchesToMeter(1);
            Assert::AreEqual(result, 0.025);
        }

        TEST_METHOD(TestBMICalculation)
        {
            double result = BMI_calculation(1, 1);
            Assert::AreEqual(result, 1.0);
        }

        TEST_METHOD(TestBMICategorization_1)
        {

            std::string expected = "Underweight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(15);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_2)
        {
            std::string expected = "Underweight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(18.4);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_3)
        {
            std::string expected = "Normal weight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(18.5);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_4)
        {
            std::string expected = "Normal weight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(20);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_5)
        {
            std::string expected = "Normal weight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(24.9);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_6)
        {
            std::string expected = "Overweight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(25);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_7)
        {
            std::string expected = "Overweight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(27);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_8)
        {
            std::string expected = "Overweight\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(29.9);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_9)
        {
            std::string expected = "Obese\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(30);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }

        TEST_METHOD(TestBMICategorization_10)
        {
            std::string expected = "Obese\n";

            std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            BMI_category(40);

            std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            Assert::AreEqual(expected, buffer.str());
        }
	};
}
