// Project_Term2.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include  <stdlib.h>

const int columns = 10;
const int rows = 100;
//const int buffsize = 300;

int main()
{
	int array[rows][columns];
	//int  buff[buffsize];
	std::ifstream file("inputICSA.csv");
	std::string line;
	int row = 0;
	int colums = 0;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string result;
		while (std::getline(iss, result, '|'))
		{
			array[row][columns] = atoi(result.c_str());
			std::cout << result << std::endl;
		}
		
	}

	int array[rows][columns];
	//int  buff[buffsize];
	std::ifstream file("inputICSB.csv");
	std::string line;
	int row = 0;
	int colums = 0;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string result;
		while (std::getline(iss, result, '|'))
		{
			array[row][columns] = atoi(result.c_str());
			std::cout << result << std::endl;
		}

		int array[rows][columns];
		//int  buff[buffsize];
		std::ifstream file("inputICSC.csv");
		std::string line;
		int row = 0;
		int colums = 0;
		while (std::getline(file, line))
		{
			std::istringstream iss(line);
			std::string result;
			while (std::getline(iss, result, '|'))
			{
				array[row][columns] = atoi(result.c_str());
				std::cout << result << std::endl;
			}
		}
	}