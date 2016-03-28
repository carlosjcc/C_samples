# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -Werror -ggdb -std=c99

#SOURCES=hello.c water.c 
#OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=hello-2 adder conditions-0 nonswitch switch \
prompt_user f2c sizeof

.PHONY: all
all: $(EXECUTABLE)


hello-2: hello-2.o
	$(CC) hello-2.o -o hello-2 -lcs50

hello.o: hello-2.c
	$(CC) $(CFLAGS) hello-2.c -lcs50


adder: adder.o
	$(CC) adder.o -o adder -lcs50

adder.o: adder.c
	$(CC) $(CFLAGS) adder.c -lcs50


conditions-0: conditions-0.o
	$(CC) conditions-0.o -o conditions-0 -lcs50

conditions-0.o: conditions-0.c
	$(CC) $(CFLAGS) conditions-0.c -lcs50


nonswitch: nonswitch.o
	$(CC) nonswitch.o -o nonswitch -lcs50

nonswitch.o: nonswitch.c
	$(CC) $(CFLAGS) nonswitch.c -lcs50


switch: switch.o
	$(CC) switch.o -o switch -lcs50

switch.o: switch.c
	$(CC) $(CFLAGS) switch.c -lcs50


prompt_user: prompt_user.o
	$(CC) prompt_user.o -o prompt_user -lcs50

prompt_user.o: prompt_user.c
	$(CC) $(CFLAGS) prompt_user.c -lcs50


f2c: f2c.o
	$(CC) f2c.o -o f2c -lcs50

f2c.o: f2c.c
	$(CC) $(CFLAGS) f2c.c -lcs50


sizeof: sizeof.o
	$(CC) sizeof.o -o sizeof

sizeof.o: sizeof.c
	$(CC) $(CFLAGS) sizeof.c


clean:
	rm -f *.o $(EXECUTABLE)