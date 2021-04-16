BUILD = Build

PROJ_NAME = foodie

EXEC = exe
INC = inc/order.h\
      inc/admin.h\
      inc/cust.h\
      inc/types.h

INCLUDE_LIBS = unity/unity.h\
               unity/unity_internals.h


SRC = src/admin.c\
      src/customer.c\
      src/records.c

TEST_SRC = test/ordertest.c\
           unity/unity.c

INC	= -Iinc\
-Iunity\


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

PROJECT_OUTPUT= $(PROJ_NAME).out

TEST_OUTPUT = Test_$(PROJECT_NAME).out

all:$(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run: $(PROJ_NAME)
	   ./$(PROJECT_OUTPUT)


# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)


# Create new build folder if not present
$(BUILD):
	mkdir build

