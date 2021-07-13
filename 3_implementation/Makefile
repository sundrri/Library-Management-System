# Name of the project
PROJECT_NAME = Library_management_system

# All source code files
SRC = main.c\
src/view_books.c\
src/add_books.c\
src/delete_book.c\
src/search_book.c\
src/edit_book.c

TEST_SRC = src/view_books.c\
src/add_book.c\
src/search_book.c\
src/edit_book.c\
src/delete_book.c\
unity/unity.c\
test/test_library_management.c

# Path to header files
INC_HEADER = inc
INC_TEST = unity

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)

all:
	gcc -I $(INC_HEADER) $(SRC) -o $(call FixPath, ./$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath, ./$(PROJECT_NAME).$(EXEC))

test:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))

coverageCheck:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))
	gcov -a $(call FixPath, ./test_library_management.c) $(call FixPath, ./add_book.c) $(call FixPath, ./delete_book.c) $(call FixPath, ./search_book.c) $(call FixPath, ./edit_book.c) $(call FixPath, ./view_books.c)

cppcheck:
	cppcheck --enable=all -I $(INC_HEADER) $(SRC)

valgrind:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	valgrind ./$(TEST_OUTPUT)

clean:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.gcov
	