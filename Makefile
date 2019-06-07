.PHONY: run
run: CMakeLists.txt build
	cd build && cmake .. && make -s
	./build/polynomial

.PHONY: clean
clean:
	rm -r build/*

build:
	mkdir build
