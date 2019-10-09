#!/bin/bash

factor $(seq 2 $1) | awk 'NF==2{print $2}' | awk '{s+=$1} END {print s}'


