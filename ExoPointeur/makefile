CC_DBG=gcc -std=c11 -Wall -Wextra -g
CC_REL=gcc -std=c11 -Wall -Wextra -O3

all: debug release

debug: Exo2S1_debug Exo3S1_debug Exo4S1_debug Exo1S2_debug Exo2S2_debug

release: Exo2S1_release Exo3S1_release Exo4S1_release Exo1S2_release Exo2S2_release


Exo2S1_debug: Exo2S1.c
	$(CC_DBG) $< -o $@

Exo2S1_release: Exo2S1.c
	$(CC_REL) $< -o $@

Exo3S1_debug: Exo3S1.c
	$(CC_DBG) $< -o $@

Exo3S1_release: Exo3S1.c
	$(CC_REL) $< -o $@
	
Exo4S1_debug: Exo4S1.c
	$(CC_DBG) $< -o $@

Exo4S1_release: Exo4S1.c
	$(CC_REL) $< -o $@
	
Exo1S2_debug: Exo1S2.c
	$(CC_DBG) $< -o $@
	
Exo1S2_release: Exo1S2.c
	$(CC_REL) $< -o $@
	
Exo2S2_debug: Exo2S2.c
	$(CC_DBG) $< -o $@
	
Exo2S2_release: Exo2S2.c
	$(CC_REL) $< -o $@

clean:
	rm -f Exo2S1_* Exo2S1 Exo3S1_* Exo3S1 Exo4S1_* Exo4S1 Exo1S2_* Exo1S2 Exo2S2_* Exo2S2
