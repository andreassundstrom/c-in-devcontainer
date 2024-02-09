build:
	mkdir -p bin && gcc src/main.c -o bin/c-in-devcontainer

clean:
	rm -d -r bin/

rebuild: clean build