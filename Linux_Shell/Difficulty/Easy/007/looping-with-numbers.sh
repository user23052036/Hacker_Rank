x=1

while (( $x <= 50 ))
do
    echo "$x"
    ((x++))
done

: '
for arithmatic operation there are two ways
1. using [[]] we have to use -gt -ge -lt -le -ne -eq
2. using (()) we have to use  >   >=  <  <=   !=  ==

for string operation there are two ways
1. using [[]] we have to use  >   >=  <  <=   !=  == '