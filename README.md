C-Shell
=====
## The program implements a bash clone with C. Some bash commands are implemented and the rest are invoked using `execvp`. A few additional commands such as `pinfo`, `jobs`, `kjob` and `kill` have been implemented to enhance productivity.

### Features implemented
	1) A shell prompt of the form: `<username@system_name:curr_dir>` with path relative to home
	2) Semi-colon (;) separated commands
	3) & to run a process in background
	4) Some built in commands like cd and pwd re-implemented
	5) Type `quit` to exit the shell
	6) Implements foreground and background processes
	7) Process name and id printed when background process terminates
	8) Type `pinfo` in the prompt to print: pid, process, status, memory and executable path (on Linux machines)
	9) Redirection  of outputs supported
	10) Piping supported
	11) Multiple piping implemented
	12) Foreground option (Not functional yet)
	13) Type `jobs` to list the processes in background with PID and a sequential number
	14) `kjob <process number(as listed in jobs command)> <signal>` to give the signal
	15) `kill` to kill all background processes
	16) Ctrl-C to terminate a process
	17) Ctrl-D to exit the shell/denote EOF

### To compile and run:
	* To compile: make
	* To run: ./a.out
	* Clean: make clean
	* Uninstall: make uninstall (Deletes all files)

Incase the prompt doesn't appear after a background process is started/terminated or for any other reason, press ENTER.
