// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Mar, 26, 2022
// This program asks the user to guess a number. It then
// checks to see if number guessed is equalled to 
// the number set as correct. 


#include <iostream>

int main() {
  // declare variables 
  int numberGuessed;
  // declare constants
  const int CORRECT_NUMBER = 5;

  // get number guessed from user
  std::cout << "Enter a number between 0 and 9: ";
  std::cin >> numberGuessed;
  std::cout << "" << std::endl;

  // check to see if number guessed is equalled to the correct number
  if (numberGuessed == CORRECT_NUMBER) {
    std::cout << "Your guess is correct! ";
 } else {
std::cout << "Your guess is incorrect, the correct number is: " \
  << CORRECT_NUMBER << "\n";
    }
}
