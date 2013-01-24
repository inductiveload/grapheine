#ifndef GRAPHPAPER_H_
#define GRAPHPAPER_H_

#include <string>
#include <iostream>
#include <sstream>

#include <iomanip>

using namespace std;

class GraphPaper{
public:
	GraphPaper();
	virtual ~GraphPaper();

	virtual string drawPaper();
	void setPaperSize();

protected:


private:

};

#endif
