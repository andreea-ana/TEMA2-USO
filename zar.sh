#!/bin/bash

if [ "$1" = "py" ]; then
	python3 zar.py
elif [ "$1" = "c" ]; then
	make
	./zar
fi
