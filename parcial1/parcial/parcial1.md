# First Work - Operating Systems
## Universidad Del Rosario
## Rodrigo Castillo Camargo
## Operating Systems


### First
#### Excercice : Apply the FCFS Non preemptive, SJF preemtive and Round Robin CPU scheduling algorithms to the following list of processes.

![[Pasted image 20220219140823.png]]
1.  assume $q = 4$ 
2.  assume a single tie break rule: $Pi > Pj , i<j$

#### Solution:


### Second
#### Excercice:
1. Define what a Process Control Block is and what information does it store.
2. Describe the structure for a modern operating system
#### Solution:
##### Process Control Block:
Process Control Block is a data structure that contains information about processes. Its also known as task control block.

Its an abstract data structure that contains many data items inside it, those items are needed to manage process in an efficient way. It contains:
1. Process State
2. Process Number
3. Program Counter
4. Registers
5. Memory limits
6. List of Open Files
7. I/O status

each of those items is a value that stores information that makes process management more efficient.
1. **Process state** is a value that specifies the process state that the process is in, processes can be in 5 different states:
* New : Specifies if the process is new or not
* Ready : Specifies if the process is ready to run or not
* Running : Stores a boolean that check if the process is running or not
* Wating : Stores a boolean that checks if the process is waiting or not
* Terminated : specifies a value that checks if the process is terminated or not
3. **Process Number**: is a value that contains the id of the process as a numeric value.
4. **Program Counter**: is a value that store the id of the next instruction that is going to be executed in the process.
5. **Registers:**: Registers are components of the processor of x86 and x64 architecture, they store values and are important for the execution of assembly instructions. Those values are stored in the data structure to check the registers that are going to be necessary for the program execution.
6. **List of Open Files**: store the different files that are asociated with the process.
7. **CPU Scheduling information** store things like process priority .
8. **I/O status**: includes a list of I/O devices used by process 
9. **Accounting information**: it stores the time limits that the process can take and the amount of CPU used by the process.
10. **Location of the process control block** : it stores the location of the process control block. This is important because it control how much memory can access the user.

### Third
#### Excercice:
1. Describe with your own words the Process Scheduling algorithm used in any modern operating system
#### Solution:

### Fourth
#### Excercice:
Build an algorithm that, using a process creation tree technique, allows you to play "Cold Hot game" game of semi ordered data array 
1. The process $P0$ has stored in a variable the number that is being searched for and has an array for ten thousand numbers. In adittion, it has a method that compares a number X with the secret number and returns "Freezing cold" if it is more than 100 positions away. "Cold" if is more thatn 30 positions away and "Hot" if the difference is less than 30
2. 
 * each child process is the sesponsible for searching a range of the search structure. 
 * If a node's range is less than 100 and its upper and lower bounds are "Freezing Cold" ,  the process should stop searching 
 *  if a node's range is less than 30 and its upper and lower limits are "Cold" the process should stop searching
 *  if the range is less and equal to 30 and in any of the limits it is "Hot" , a  sequential seearch can be performed in this interval to create more children.  if the range is larget than 30
 
3. The final tree must not have more than 10 levels. A process cannot have more than 5 children process. The process can have an array of PID's variables 
4. the process that finds the element writes on the screen the position of the vector in which was found
#### Solution: