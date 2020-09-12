#include "TodoList.h"

void TodoList::add(std::string _duedate, std::string _task){
	cout << "in add " << _duedate << " " << _task << endl;
	tasks.push_back(_duedate+"\n"+_task);
}
int TodoList::remove(std::string _task){
	cout << "in remove" << endl;
	for(int i = 1; i < tasks.size(); i += 2) //incrementing by 2 so we are only checking tasks, not days
	{
		if(tasks.at(i) == _task)
		{
			tasks.erase(tasks.begin() + i-1, (tasks.begin() + i+1));
		}
	}
}
void TodoList::printTodoList(){
	cout << "in print Todo List" << endl;
	for(int i = 0; i < tasks.size(); i++) 
	{
		cout << tasks.at(i) << endl;
	}
}
void TodoList::printDaysTasks(std::string _date){
	cout << "in print Days Tasks" << endl;
}