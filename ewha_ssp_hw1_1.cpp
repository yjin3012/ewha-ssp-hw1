/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by JinYi Yoon
 * Mar 25, 2015
 *
 */

// Add #define pre-processor below
#include "Lab1_1.h"

int Front_LED = 10;
int Back_LED = 9;
 
void setup() {
  //Add your code of Lab Assignment #1
	pinMode(Front_LED, OUTPUT);
	pinMode(Back_LED, OUTPUT);
}

void loop() {
  //Add your code of Lab Assignment #1  
	digitalWrite(Front_LED, HIGH);
	digitalWrite(Back_LED, LOW);
	delay(1000);

	digitalWrite(Front_LED, LOW);
	digitalWrite(Back_LED, HIGH);
	delay(1000);
}