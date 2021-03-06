#include "HTMLWriter.h"
#include <iostream>
#include <fstream>

using namespace std;

HTMLWriter::HTMLWriter():HTMLWriter("noFileName.html,", "noContent")
{
}

HTMLWriter::~HTMLWriter()
{
	cout << "HTMLWriter 소멸자" << endl;
}

//HTMLWriter::HTMLWriter(const string& fileName, const string& content)
//	:DocWriter(fileName, content)  //부모 클래스, 즉 DocWriter의 멤버이므로 부모 클래스의 생성자를 지정.
//{
//	cout << "HTMLWriter 생성자" << endl;
//}

void HTMLWriter::setFont(const string& fontName, const int& fontSize, const string& fontColor)
{
	this->fontName = fontName;
	this->fontSize = fontSize;
	this->fontColor = fontColor;
}

void HTMLWriter::write()
{
	ofstream fout(fileName);
	fout << "<html><head><title>Greanjoa's Homepage</title></head>" << endl;
	fout << "<body>" << endl;
	fout << "<h1>##### 20000000 홍길동 #####</h1>" << endl;
	fout << "<font face'" << fontName << "' size='" << fontSize;
	fout << "' color='" << fontColor << "'>" << content << "</font>" << endl;
	fout << "</body></html>" << endl;
}
