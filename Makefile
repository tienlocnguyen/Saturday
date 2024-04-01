FILE_LIST=./main.c \
			./sum.c
test:
	gcc $(FILE_LIST) -DA=10

clean:
	rm ./a.exe