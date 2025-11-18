compile: main.cpp
	g++ main.cpp -o stack1

run: ./stack1
	./stack1 4 5 x x x x x 4 13 3 x 5 4 x 5 5

compile2: main2.cpp
	g++ main2.cpp -o stack2

test1: ./stack2
	./stack2 {[]}[] {[]] [] {{  }}

test2: ./stack2
	./stack2 {[]}[]

test3: ./stack2
	./stack2 {[]

test4: ./stack2
	./stack2 {[}]

test5: ./stack2
	./stack2 {{

test6: ./stack2
	./stack2 {{}}
