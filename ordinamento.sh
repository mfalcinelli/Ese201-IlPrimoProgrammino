#!/bin/bash
echo -n 'Inserire il numero di studenti:  '
read n


if [ $n -le 0 ]
then
	echo 'Errore! Dimensione non valida!'
	exit 1
fi


for((i=1;i<=n;i++))
do
	echo -n "Inserire il nome dello studente n.$i: "
	read studenti[$i]
	echo -n "Inserire il voto riportato a informatica dallo studente n.$i: "
	read voti[$i]
	echo
done

for((i=1;i<=n-1;i++))
do
	for((j=$(($i+1));j<=n;j++))
	do
		if [ ${voti[i]} -gt ${voti[j]} ]
		then
			scambioInt=${voti[i]}
			voti[$i]=${voti[j]}
			voti[$j]=$scambioInt
			scambioChar=${studenti[i]}
			studenti[$i]=${studenti[j]}
			studenti[$j]=$scambioChar
		fi
	done
done


echo -n 'Risultati ordinati in ordine crescente di voto: '
echo
for((i=1;i<=n;i++))
do
	echo "$i)Alunno: ${studenti[i]}, con voto: ${voti[i]}"
done

exit 0
