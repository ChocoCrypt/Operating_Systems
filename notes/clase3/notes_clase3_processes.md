#objetivos procesos:
	1. identificar y separar componentes 
	2. describir como los procesos son creados en un sistema operativo
	3. describir como contrastan los procesos internos de comunicación usando memoria compartida y pasando mensajes
	4. diseñar programas que usan comandos de POSIX 
	5. describir la comunicación cliente-servidor usando sockets
	6. diseñar modulos de kernel

# Process Concept
	1. un sistema opeartivo ejecuta programas que corren como proceso
	2. un proceso es un programa en ejecución
	3. tiene un codigo, un contador, un stack una sección de datos y un heap

# Program vs Process
	a program is **passive** entity stored on disk (executable file)
	a process is **active** entity stored on disk

# Process State
	1. New
	2. Running
	3. waiting
	4. ready
	5. terminated

# Process Control Block
	1. process state
	2. origran counter
	3. CPU registers
	4. CPU scheduling information
	5. Memory management information
	6. accounting information (CPU Used , clock , time since start...)
	7. I/O status

# Threads
	process has a single thread of execution
	bla bla bla images on presentation

# Process Scheduling
	1. sekects anibg avuabke oricesses fir bext execution on CPU core
	2. the goal is to maximize CPU usage
	3. maintains echeduling queues
	
# Context Switch
	1. when CPU switches to another process , system must save state
	2. context is represented in PCB
	3. time dependent ond hardware support

# Multitasking on mobile systems
	1. mobile systems allow only one proces to run 
	2. screen real state provide user to onle 1 single foreground process and multiple background processes.
	3. background processes uses a service to perform tasks
	3. background processes can keep runing even if background is suspended
	4. no interface for background


