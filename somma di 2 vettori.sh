#!/bin/bash
echo -n 'Inserire la dimensione dei vettori: '
read dim
echo
if [ $dim -le 0 ]
then
	echo 'Errore! Dimensione non valida!'
	exit 1
fi

for ((i=1;i<=dim;i++))
do
	echo -n "Inserire il valore n. $i del vettore A: "
	read vetA[$i]
	echo -n "Inserire il valore n. $i del vettore B: "
	read vetB[$i]
	vetC[$i]=$((${vetA[i]}+${vetB[i]}))
done


echo

echo 'Elementi del vettore C: '
echo

for ((i=1;i<=dim;i++))
do
	echo "Il valore n. $i di C e': ${vetC[i]}"
done

exit 0
