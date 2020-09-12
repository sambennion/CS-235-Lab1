#pragma once
#include "TodoListInterface.h"

using namespace std;
class TodoList : public TodoListInterface {
private:
vector<string> tasks;
public:
    TodoList()
		{
			cout << "in constructor" << endl;

			ifstream fin ("TODOList.txt");
			string line;
			if(fin.is_open())
			{
				while(fin >> line)
				{
					cout << line << '\n';
					tasks.push_back(line);
				}
				fin.close();
			}
					
				
		}
     virtual ~TodoList()
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

    /*
    *   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    virtual void add(string _duedate, string _task);
    /*
    *   Removes an item from the todo list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    virtual int remove(string _task);

    /*
    *   Prints out the full todo list to the console
    */
    virtual void printTodoList();
    
    /*
    *   Prints out all items of a todo list with a particular due date (specified by _duedate)
    */
  	virtual void printDaysTasks(string _date);
};