#pragma once
#include "TodoListInterface.h"

using namespace std;
class TodoList : public TodoListInterface {
private:
vector<string> tasks;
public:
     TodoList(){
		// cout << "in constructor" << endl;

		ifstream fin ("TODOList.txt");
		string line;
		if(fin.is_open())
		{
			while(getline(fin, line))
			{
				cout << line << '\n';
				tasks.push_back(line);
			}
			fin.close();
		}
	}
     ~TodoList()
		{
			cout << "in destructor" << endl;
			ofstream fout;
			fout.open("TODOList.txt", ofstream::out | ofstream:: trunc);
			for(int i = 0; i < tasks.size(); i++)
			{
				fout << tasks[i] << endl;
			}
			fout.close();
		}

    virtual void add(string _duedate, string _task);
  
    virtual int remove(string _task);

    virtual void printTodoList();
    
  	virtual void printDaysTasks(string _date);
};