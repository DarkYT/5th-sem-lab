a=$1
b=$2
c=$3
echo "$#"
# echo "$a"
if [ !  $# -eq 3  ]; then 
echo "error" 
elif [ $a -gt $b ] && [ $b -gt $c ]; then 
echo "smallest is : $c"
elif [ $b -gt  $c ]  && [ $c -gt $a ]; then 
echo "smallest is : $a"
elif [ $c -gt  $a ]  && [ $a -gt $b ]; then 
echo "smallest is : $b"
fi
