# target : dependencies
program1 : main.o org_fun.o comp_fun.o print_fun.o 
	gcc main.o org_fun.o comp_fun.o print_fun.o -Wall -o program1

main.o : main.c 
	gcc -c main.c -Wall

org_fun.o : org_fun.c 
	gcc -c org_fun.c -Wall
	
comp_fun.o : comp_fun.c 
	gcc -c comp_fun.c -Wall
	
print_fun.o : print_fun.c 
	gcc -c print_fun.c -Wall
	
