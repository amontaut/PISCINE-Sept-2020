id -G -n $FT_USER | sed -e "s/ /,/g" | tr -d "\n"
