#!/bin/bash

arr=()
read num
for i in $(seq 1 $num); do read t && arr+=($t); done
for i in "${arr[@]}"; do factor $(seq 2 $i) | awk 'NF==2{print $2}' | awk '{s+=$1} END {print s}'; done
