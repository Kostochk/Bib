

#include <iostream>
using namespace std;

class Gadget {
protected:
	string name;
	string creator;
public:
	Gadget(string name, string creator) {
		this->name = name;
		this->creator = creator;
	}

};


class Mobile : protected Gadget {
protected:
	string mob;
public:
	Mobile(string mob, string name, string creator) : Gadget(name, creator) {
		this->mob = mob;
	}
};

class Stationary : protected Gadget {

protected:
	string stat;
public:
	Stationary(string stat, string name, string creator) : Gadget(name, creator) {
		this->stat = stat;
	}

};

class Tablet : protected Mobile {
protected:
	string tab;
public:
	Tablet(string tab, string mob, string name, string creator) : Mobile(mob, name, creator) {
		this->tab = tab;
	}
};
class Phone : protected Mobile {
protected:
	string ph;

public:
	Phone(string ph, string mob, string name, string creator) : Mobile(mob, name, creator) {
		this->ph = ph;
	}

};
class SmartWatch : protected Mobile {
protected:
	string sw;

public:
	SmartWatch(string sw, string mob, string name, string creator) : Mobile(mob, name, creator) {
		this->sw = sw;
	}

};

class Laptop : protected Mobile {
protected:
	string lap;

public:
	Laptop(string lap, string mob, string name, string creator) : Mobile(mob, name, creator) {
		this->lap = lap;
	}

};


class Computer : protected Stationary {
protected:
	string comp;

public:
	Computer(string comp, string stat, string name, string creator) : Stationary(stat, name, creator) {
		this->comp = comp;
	}

};

class Monitor : protected Stationary {
protected:
	string mon;

public:
	Monitor(string mon, string stat, string name, string creator) : Stationary(stat, name, creator) {
		this->mon = mon;
	}
};

class PS4 : protected Stationary {
protected:
	string ps;

public:
	PS4(string ps, string stat, string name, string creator) : Stationary(stat, name, creator) {
		this->ps = ps;
	}

};


int main()
{
}

