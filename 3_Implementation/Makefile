PROJECT_NAME = FOODORD


SRC = src/foodOrder.c

TSTSRC= test/ordertest.c\
        unity/unity.c

INC = inc/cust.h\
      inc/order.h\
      unity/unity.h\
      unity/unity_internals.h

INC	= -Iinc\
     -Iunity\

INCLUDE_LIBS = -lcunit


PROJ=foodOrder.exe

BUILD = build

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

test:$(BUILD)
	gcc $(TEST_SRC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)


doc:
	make -C ./documentation

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)



