CC_DBG=gcc -std=c11 -Wall -Wextra -g
CC_REL=gcc -std=c11 -Wall -Wextra -O3

all: debug release

debug: tab_debug

release: tab_release


tab_debug: tab.c
	$(CC_DBG) $< -o $@ -lm

tab_release: tab.c
	$(CC_REL) $< -o $@ -lm

clean:
	rm -f tab_* tab
