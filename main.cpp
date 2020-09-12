#include "TodoList.h"

int main(int argc, char *argv[])
{
	TodoList mylist;
	/*
	 *for(int i = 0; i < argc; i++)
	 *{
	 *	cout << "argv[" << i << "]=" << argv[i] << endl;
	 *}
	 */
	string firstarg = argv[1];
	if(firstarg.compare("add") == 0)
	{
		//cout << "Doing an add" << endl;
		string date = argv[2];
		string task = argv[3];
		//cout << "date is " << date << " and task is " << task << endl;
		mylist.add(date, task);
	}
	if(firstarg.compare("remove") == 0)
	{
		//cout << "Doing a remove" << endl;
		string task = argv[2];
		cout << " the task is " << task << endl;
		mylist.remove(task);
	}
	if(firstarg.compare("printList") == 0)
	{
		//cout << "Printing TODO list" << endl;
		mylist.printTodoList();
	}
	if(firstarg.compare("printDay") == 0)
	{
		string date = argv[2];
		//cout << "Printing TODO list for" << date << endl;
		mylist.printDaysTasks(date);
	}

	return 0;
}