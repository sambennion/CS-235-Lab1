#include "TodoList.h"

/*
Most of the comments are lines of debug that can be ignored
*/
void TodoList::add(string _duedate, string _task){
	// cout << "in add " << _duedate << " " << _task << endl;
	tasks.push_back(_duedate+"\n"+_task);
}
int TodoList::remove(string _task){
	// cout << "in remove" << endl;
	for(int i = 1; i < tasks.size(); i += 2) //incrementing by 2 so we are only checking tasks, not days
	{
		if(tasks.at(i) == _task)
		{
			tasks.erase(tasks.begin() + i-1, (tasks.begin() + i+1)); //erase both day and task
			return 0;
		}
	}
	return 1;
}
void TodoList::printTodoList(){
	// cout << "in print Todo List" << endl;
	for(int i = 0; i < tasks.size(); i+=2) 
	{
		cout << tasks.at(i) << ": " << tasks.at(i+1) << endl;
	}
}
void TodoList::printDaysTasks(string _date){
	// cout << "in printDaysTasks" << endl;
	for(int i = 0; i < tasks.size(); i += 2) //incrementing by 2 so we are only checking days
	{
		if(tasks.at(i) == _date)
		{
			cout << _date << ": " << tasks.at(i+1) << endl;
		}
	}
}