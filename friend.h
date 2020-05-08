/*
 * friend.h
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#ifndef FRIEND_H_
#define FRIEND_H_

class Triangle{
private:
	float height;
	float length;

public:
	void setdata(void){
		cout<<"Enter height: ";
		cin>>height;
		cout<<"Enter length: ";
		cin>>length;
	}
	friend float calarea(Triangle);
};




#endif /* FRIEND_H_ */
