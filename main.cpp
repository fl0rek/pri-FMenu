#include <iostream>

#include "FMenuFacade.h"

using namespace std;

int main() {
	FMenuFacade menu("main");
	uint i = 0;
	for(auto n : *menu.getMenuNames())
		cout << i++ << ":" << std::string(n.first, ' ') << n.second << std::endl;
	menu.addElement(1, FMenuFacade::MultiMenuElement("test1"));
	menu.addElement(1, FMenuFacade::SingleMenuElement("test2"));
	std::cout << "done" << std::endl;

	i = 0;
	auto foo = menu.getMenuNames();
	//for(i = 0; i < foo->size(); i++ )
		//cout << i++ << ":" << foo->at(i).first << std::endl;
	for(FMenuFacade::name n : *menu.getMenuNames())
		cout << i++ << ":" << std::string(n.first, ' ') << n.second << std::endl;

	menu.removeElement(1);
	i = 0;
	for(FMenuFacade::name n : *menu.getMenuNames())
		cout << i++ << ":" << std::string(n.first, ' ') << n.second << std::endl;

	std::cout << "fuck off m8 done " << foo->size() << std::endl;
	cin >> i;
	return 0;
}
