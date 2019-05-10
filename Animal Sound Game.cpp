#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
public:
    virtual void talk();
    Animal(string = "");
};

class Cat: public Animal
{
protected:
    string name;
public:
    void talk();
    Cat(string = "");
};

class Dog: public Animal
{
protected:
    string name;
public:
    void talk();
    Dog(string = "");
};

class Duck: public Animal
{
protected:
    string name;
public:
    void talk();
    Duck(string = "");
};

class Lion: public Animal
{
protected:
    string name;
public:
    void talk();
    Lion(string = "");
};

int main()
{
    Animal *p[5];

	p[0] = new Animal("Animal");
	p[1] = new Cat("Cat");
	p[2] = new Dog("Dog");
	p[3] = new Duck("Duck");
	p[4] = new Lion("Lion");

	for(int i=0; i<5; i++)
    {
        p[i] -> talk();
    }

    return 0;
}

void Animal::talk()
{
    cout<<name<<" says nothing"<<endl;
}
Animal::Animal(string a)
{
    name = a;
}
void Cat::talk()
{
    cout<<name<<" says meow"<<endl;
}
Cat::Cat(string a)
{
    name = a;
}
void Dog::talk()
{
    cout<<name<<" says woof"<<endl;
}
Dog::Dog(string a)
{
    name = a;
}
void Duck::talk()
{
    cout<<name<<" says quack"<<endl;
}
Duck::Duck(string a)
{
    name = a;
}
void Lion::talk()
{
    cout<<name<<" says roar"<<endl;
}
Lion::Lion(string a)
{
    name = a;
}
