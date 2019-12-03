#pragma once
#include <iostream>
#include <functional>
#include "Event.h"
#include "EventHandler.h"

using namespace std;

void doSomething()
{
	cout << "hey \n";
}

int main()
{
	function<void()> func = doSomething;
	EventHandler eh1 = EventHandler(func);
	EventHandler eh2 = EventHandler(func);

	Event e1 = Event();
	e1.addHandler(eh1);

	e1();
}
