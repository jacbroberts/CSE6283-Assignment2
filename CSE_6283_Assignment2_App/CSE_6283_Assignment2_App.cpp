// CSE_6283_Assignment2_App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>

double poundsToKg(double pounds)
{
    return pounds * 0.45;
}

double inchesToMeter(double inches)
{
    return inches * 0.025;
}

double BMI_calculation(double kg, double m)
{
    return kg / (m * m);
}

void BMI_category(double BMI)
{
    if (BMI < 18.5)
    {
        std::cout << "Underweight" << std::endl;
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        std::cout << "Normal weight" << std::endl;
    }
    else if (BMI >= 25 && BMI < 30)
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
    double weight_pounds;
    double weight_kg;
    double height_inches;
    double height_m;

    double BMI;

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

    
    system("pause");
    
    
}