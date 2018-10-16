#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
using namespace std;

class Document
{
	public:
		Document(string date);
		string getDate() const;
		void setDate(string date);
	private:
		string date_of_formation;
};

#endif
