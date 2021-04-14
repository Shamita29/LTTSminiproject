SRC= C:/Users/shami/Documents/LTTSminiproject/foodOrder.c

PROJ=foodOrder.exe

$(PROJ): $(SRC)
	 gcc $(SRC) -o $(PROJ)

run: $(PROJ)
	  ./${PROJ}

clean:
	 rm -rf $(PROJ) 