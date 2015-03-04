#!/bin/bash
  function somma {
 local s=0
 while [ $1 ]; do
  ((s=s+$1))
 shift
  done
 return $s
 }
 
 somma ${BASH_ARGV[*]}
 echo "Somma = $?"
