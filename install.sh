#!/bin/bash

echo -n "Do you want to install Dinosay ? (Y/n): "
read answer

if [[ "$answer" =~ ^[Yy]$ ]] || [[ "$answer" == "" ]]; then
    chmod a+x *
	./c.sh
	make compile
	sudo mv ./dinosay /usr/bin/
    echo "Dinosay installed sucessfully."
else
    echo "Dinosay was not installed."
fi

