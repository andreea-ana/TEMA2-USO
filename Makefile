CC=gcc
CFLAGS=-Wall -Wextra -std=c99

TARGETS=zar

build: $(TARGETS)

zar: zar.c
	$(CC) $(CFLAGS) zar.c -o zar

clean:
	rm -f $(TARGETS)

.PHONY: clean
