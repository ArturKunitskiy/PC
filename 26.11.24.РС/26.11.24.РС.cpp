﻿#include <iostream>
#include "MyLibrary.h"
using namespace std;

int main()
{
    Office obj1("OfficePC", "Intel i5", "Integrated", "512GB", "16GB", "MS Office");
    obj1.Print();
    cout << "Price: " << obj1.GetPrice() << " USD" << endl << endl;

    Game obj2("GamingPC", "AMD Ryzen 9", "NVIDIA RTX 4080", "1TB", "32GB", "Mechanical Keyboard", "Gaming Headset");
    obj2.Print();
    cout << "Price: " << obj2.GetPrice() << " USD" << endl << endl;

    Home obj3("HomePC", "Intel i7", "Integrated", "1TB", "16GB", "Logitech Webcam");
    obj3.Print();
    cout << "Price: " << obj3.GetPrice() << " USD" << endl << endl; 
}