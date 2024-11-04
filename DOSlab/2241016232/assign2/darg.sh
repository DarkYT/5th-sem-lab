echo "enter a comand to execute "
read d 

read -p "do you want to execute" dat
if [ $dat = "yes" ] 
then
$d
else
echo "not executing"
fi
