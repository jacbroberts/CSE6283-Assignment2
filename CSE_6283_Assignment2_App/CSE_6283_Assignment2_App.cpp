// CSE_6283_Assignment2_App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float poundsToKg(float pounds)
{
    return pounds * 0.45;
}

float inchesToMeter(float inches)
{
    return inches * 0.025;
}

float BMI_calculation(float kg, float m)
{
    return kg / (m * m);
}

void BMI_category(float BMI)
{
    if (BMI < 18.5)
    {
        std::cout << "Underweight" << std::endl;
    }
    else if (BMI >= 18.5 and BMI < 25)
    {
        std::cout << "Normal weight" << std::endl;
    }
    else if (BMI >= 25 and BMI < 30)
    {
        std::cout << "Overweight" << std::endl;
    }
    else if (BMI >= 30)
    {
        std::cout << "Obese" << std::endl;
    }
    else
    {
        std::cout << "BMI Out of Range" << std::endl;
    }
}

int main()
{
    float weight_pounds;
    float weight_kg;
    float height_inches;
    float height_m;

    float BMI;

    std::cout << "This program will calculate your Body Mass Index (BMI) and give you a category\n";
    
    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight_pounds;

    std::cout << "Enter your height in inches: ";
    std::cin >> height_inches;

    weight_kg = poundsToKg(weight_pounds);
    height_m = inchesToMeter(height_inches);

    BMI = BMI_calculation(weight_kg, height_m);

    std::cout << "Your BMI is " << BMI << std::endl;
    BMI_category(BMI);

    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
