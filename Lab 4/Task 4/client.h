#ifndef CLIENT_H
#define CLIENT_H

#include <string>

using namespace std;

class Client
{
	public:
		Client(string name, unsigned id);
		void show() const;
	private:
		string name;
		unsigned id;
};

#endif
