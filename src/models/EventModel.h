#pragma once
#include <string>
class  EventModel
{
	const std::wstring event_name;


public:		
	EventModel(const std::wstring&& name) :event_name{ name } {
		
	}
	std::wstring getName() { return   event_name; }
	

};

