#Spanda patel
echo "enter the cost price"
read cp
echo "enter the celling price"
read sp
if [ $sp -ge $cp ]; then 
    echo "profit is $((sp-cp))"
elif [ $cp -ge $sp ]; then 
    echo "profit is $((cp-sp))"
else
    echo "no prifit, on loss"
fi
