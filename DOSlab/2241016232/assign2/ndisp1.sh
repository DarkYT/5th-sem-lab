# 
#read filename
#read n
#read m
if [ ! -f $3 ]; then
   echo "Error : file '$filename' not found. "
   exit 1
fi

echo "First $n lines of $filename:"
head -$1 $3

#dispaly the last m 
echo "Last $n lines of $filename:"
head -$2 $3
