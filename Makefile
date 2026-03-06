install: all

all:
	g++ pacdo.cpp -o pacdo -std=c++23 -w -O2
	sudo install -Dm755 pacdo "/usr/bin/pacdo"
	rm ./pacdo           # remove local pacdo

clean:
	sudo rm -v /usr/bin/pacdo
