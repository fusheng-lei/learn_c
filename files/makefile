#all  : clean gcc run
#gcc  :
#	 gcc -g -std=c99 test.c -o test.out
#run  :
#	./test.out
#clean  :
#	 rm  -rf  *~  core  test.out test
#

src = $(wildcard *.c)
obj = $(patsubst %.c,%,$(src))


all:$(obj)

%:%.c
	gcc $< -o $@ -std=c99

clean:
	-rm -rf $(obj)

.PHONY:clean all

python:
	python test.py

perl:
	chmod +x test.pl
	./test.pl