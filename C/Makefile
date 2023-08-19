inline: inlineFunction.c
	gcc inlineFunction.c -o bin/a.out
	echo "    "
	echo "Running the binary now."
	$(MAKE) run

struct: structPadding.c
	gcc structPadding.c -o bin/a.out
	echo "   "
	echo "Running the binary now."
	$(MAKE) run

run: ./bin/a.out
	./bin/a.out
	echo "   "
	echo "Cleaning the binary now."
	$(MAKE) clean

clean: ./bin/a.out
	rm -rf ./bin/a.out