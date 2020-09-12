DESCRIPTION:

This is a command line program that once compiled will allow you tp create and edit a todolist called TODOList.txt

There are 4 main functions.
* Add task
* Remove task
* Print a list of all tasks
* Print tasks for a certain day

**ADD TASK**

Format: ./Todo add "day" "task"

e.g. ./Todo add Sunday "Take a nap"

**REMOVE TASK**

Format: ./Todo remove "task"

e.g. ./Todo remove "Take a nap"

**PRINT A LIST OF TASKS**

Format: ./Todo printList

**PRINT A LIST OF TASKS FOR A DAY**

Format: ./Todo printDay "day"

e.g. ./Todo printDay Sunday



**Additional Notes**

The text file, TODOList.txt, is intended to be edited through this command line program. The program is expecting the text file to be formatted a certain way.

Format for TODOList.txt:
**"Day of week"**
**"Task"**
**"Day of week"**
**"Task"**