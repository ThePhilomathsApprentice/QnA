inlineFunctionSample: inlineFunction.c
	gcc inlineFunction.c -o bin/a.out
	$(MAKE) run

structPaddingSample: structPadding.c
	gcc structPadding.c -o bin/a.out
	$(MAKE) run

run: ./bin/a.out
	./bin/a.out

clean: ./bin/a.out
	rm -rf ./bin/a.out