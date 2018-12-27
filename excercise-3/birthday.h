#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
public:
	Birthday(unsigned int d, unsigned int m, unsigned int y);
	void printDate();
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
};
#endif