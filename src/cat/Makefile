all: s21_cat
s21_cat : 
	gcc -Wall -Werror -Wextra s21_cat.c -o s21_cat

clean :
	rm -rf s21_cat
	rm -rf *.log

rebuild:
	$(MAKE) clean
	$(MAKE) all
tests :
	chmod 777 /tests/test_func_cat.sh
	sh /tests/test_func_cat.sh