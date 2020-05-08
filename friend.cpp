/*
 * friend.cpp
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#include<iostream>
using namespace std;
#include"friend.h"
float calarea(Triangle d){
	return 0.5*d.height*d.length;

}

int main(void)
{
	Triangle d;
	d.setdata();
	cout<<"Area= "<<calarea(d);
	return 1;
}


