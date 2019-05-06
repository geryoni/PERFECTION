
#include <iostream>
#include <fstream>
#include <string>

//using namespace std;

using std::cout;
using std::endl;
using std::string;
const char zz = ' ';
const char zl = '\n';



//extern string resultList;



void ReadExample(int*, char**);
void CopyTyping(string*, string*);
void WriteOut(string*);





int main(int argc, char* argv[])
//int main()
{
	string initList;

	ReadExample(&argc, argv);


	cout << "argc= " << zz << argc << zl << "argv= " << zz << argv[1] << zz << endl;
	return 0;
}


void ReadExample(int* argc, char* argv[], string)//
{
	if(*argc > 1)
		{
			cout << "usage: " "<"<< argv[1] << ">\n" << zl;

			std::ifstream the_file (argv[1]);
			if(!the_file.is_open())
				{
					cout << "Could not open file\n" << zl;
				}
			else {
					char x[50]={'\0'};
					while (the_file.eof()) {

					cout << x;
						}

					the_file.close();

				}
		}
	else {
			cout << "No file name entered. Exiting..." <<zl;

		}


}


/*
void CopyTyping(string* initList,string* resultList)
{

}

void WriteOut(string* resultList)
{

}
*/
