#ifndef DOG_H
#define DOG_H
/*
 * FILE: dog.h
 *
 * Desc: header file with a struct dog
 *
 */

/**
 * struct dog - new type describing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
