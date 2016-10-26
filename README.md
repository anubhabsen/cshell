C-Shell
=====
##The program implements a bash clone with C. Some bash commands are implemented and the rest are invoked using `execvp`. A few additional commands such as `pinfo`, `jobs`, `kjob` and `kill` have been implemented to enhance productivity.

###Features implemented
	* A shell prompt of the form: **<username@system_name:curr_dir>** with path relative to home
	* Semi-colon (;) separated commands
	* & to run a process in background
	* Some built in commands like cd and pwd re-implemented
	* Type **quit** to exit the shell
	* Implements foreground and background processes
	* Process name and id printed when background process terminates
	* Type **pinfo** in the prompt to print: pid, process, status, memory and executable path (on Linux machines)
	* Redirection of outputs supported
	* Piping supported
	* Multiple piping implemented
	* Foreground option (Not functional yet)
	* Type **jobs** to list the processes in background with PID and a sequential number
	* **kjob <process number(as listed in jobs command)> <signal>** to give the signal
	* **kill** to kill all background processes
	* Ctrl-C to terminate a process
	* Ctrl-D to exit the shell/denote EOF

###To compile and run:
	* To compile: make
	* To run: ./a.out
	* Clean: make clean
	* Uninstall: make uninstall (Deletes all files)

Incase the prompt doesn't appear after a background process is started/terminated or for any other reason, press ENTER.
