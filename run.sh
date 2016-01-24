#!/bin/bash
clear
echo "Enter file to read lines from: "
read file
echo "Enter file to read 'GET /lines/<line number>' commands from"
read commandfile
./codingTest $file <$commandfile
