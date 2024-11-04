# 
read filename
read n
read m
if [ ! -f "$filename" ]; then
   echo "Error : file '$filename' not found. "
   exit 1
fi

echo "First $n lines of $filename:"
head -$n $filename

#dispaly the last m 
echo "Last $n lines of $filename:"
head -$m $filename
