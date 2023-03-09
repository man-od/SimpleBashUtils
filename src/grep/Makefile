all: s21_grep
s21_grep :
	gcc -Wall -Werror -Wextra s21_grep.c -o s21_grep

clean: 
	rm -rf s21_grep
	rm -rf *.log

rebuild:
	$(MAKE) clean
	$(MAKE) all
tests:
	chmod 777 /tests/test_func_grep.sh
	sh /tests/test_func_grep.sh