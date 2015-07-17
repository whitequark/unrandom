do-test: test libunrandom.so
	LD_PRELOAD=$$(pwd)/libunrandom.so ./test
.PHONY: do-test

clean:
	rm test libunrandom.so
.PHONY: clean

libunrandom.so: unrandom.c
	gcc -shared -fPIC -ldl -o $@ $<

test: test.c
	gcc -o $@ $<
