for x in {1..99};
do
    if [[ $((x % 2)) != 0 ]]; then
        echo "$x"
    fi
done