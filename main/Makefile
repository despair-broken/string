FLAGS = -Wall -Werror -Wextra -std=c11
LIB = -lcheck -L. -lm s21_string.a
GCOV_FLAGS = -fprofile-arcs -ftest-coverage
C_FILE = s21_string.c s21_sprintf.c s21_sscanf.c s21_special.c
OBJECT = s21_string.o s21_sprintf.o s21_sscanf.o s21_special.o

all: s21_string.a test gcov_report
	@echo ""
	@echo "	YA v dzhakuzi, ya v dzhakuzi, ya v dzhakuzi — eto fakt"
	@echo "	Tri koila letit iz uzi, bitch, ya — molodoj Mindfvck"
	@echo "	I suka dolivaet smuzi, Crystal Maiden s nami tusit"
	@echo "	Svezhij budto zxcursed, zabral lobbi na findah"
	@echo "	YA hodyachij maneken, budto by Kaneki Ken"
	@echo "	Pokoryayu ves' mm i podryvayu Rekviem"
	@echo "	I so mnoj celyj skvad gulej, moj backpack kucha nulej"
	@echo "	Golosa tverdyat: «Ubej», ya s kazhdym razom vsyo bystrej"
	@echo "	Treniruyu tvoyu suku, nazyvaj Edgard Zapashnyj"
	@echo "	So mnoj kucha chyornyh-chyornyh, budto by ya Borya pavshiy (Ha)"
	@echo "	Glaza polny boli, ya — dead inside shinobi"
	@echo "	Slyozy zapolnyayut more, ya begu po luzham krovi (Ha)"
	@echo "	I so mnoj kucha chyornyh-chyornyh, budto by ya Borya pavshiy (Ha)"
	@echo ""

s21_string.a:
	gcc $(FLAGS) -c $(C_FILE)
	ar rcs s21_string.a $(OBJECT)

test:
	gcc s21_string_test.c -o s21_string_test $(LIB)
	./s21_string_test
	gcc s21_sprintf_test.c -o s21_sprintf_test $(LIB)
	./s21_sprintf_test
	gcc s21_sscanf_test.c -o s21_sscanf_test $(LIB)
	./s21_sscanf_test
	gcc s21_special_test.c -o s21_special_test $(LIB)
	./s21_special_test

gcov_report:
	gcc $(GCOV_FLAGS) -c $(C_FILE)
	gcc $(GCOV_FLAGS) -o s21_string_test $(OBJECT) s21_string_test.c $(LIB)
	gcc $(GCOV_FLAGS) -o s21_sprintf_test $(OBJECT) s21_sprintf_test.c $(LIB)
	gcc $(GCOV_FLAGS) -o s21_sscanf_test $(OBJECT) s21_sscanf_test.c $(LIB)
	gcc $(GCOV_FLAGS) -o s21_special_test $(OBJECT) s21_special_test.c $(LIB)
	./s21_string_test
	./s21_sprintf_test
	./s21_sscanf_test
	./s21_special_test
	gcov s21_string.c s21_sprintf.c s21_sscanf.c s21_special.c
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory html

clean:
	rm -f s21_string.a
	rm -f *.o
	rm -f *.gcda *.gcno *.gcov
	rm -f coverage.info
	rm -rf ./html
	rm -f s21_string_test s21_sprintf_test s21_sscanf_test s21_special_test