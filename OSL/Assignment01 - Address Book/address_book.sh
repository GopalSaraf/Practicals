#!/bin/sh

ADDRESS_BOOK_FILE=address_book.tsv

echo "Welcome to Address Book"
touch $ADDRESS_BOOK_FILE

# Address Format: NAME    PHONE    ADDRESS

addAddress() {
    echo "\nAdding an address:"

    read -p "Name of person: " NAME
    read -p "Phone number of $NAME: " PHONE
    read -p "Address of $NAME: " ADDRESS

    echo "\nDo you want to add the following address?"
    echo "Name          :  $NAME"
    echo "Phone number  :  $PHONE"
    echo "Address       :  $ADDRESS"
    read -p "Please confirm! [Y/n] : " OPTION

    if [ "$OPTION" = "Y" ] || [ "$OPTION" = "y" ]
    then
        echo "$NAME\t$PHONE\t$ADDRESS" >> $ADDRESS_BOOK_FILE
        echo "Address of $NAME added successfully."
    else
        echo "Try again later."
    fi
}

listAddresses() {
    echo "\nList of addresses:"
    nl $ADDRESS_BOOK_FILE
}

searchAddress() {
    echo "\nSearching for an address:"

    read -p "Enter Name OR Phone no of person : " QUERY
    grep -i "$QUERY" $ADDRESS_BOOK_FILE
}

deleteAddress() {
    echo "\nDeleting an address:"

    read -p "Enter Name OR Phone no of person : " QUERY
    grep -i "$QUERY" $ADDRESS_BOOK_FILE
    read -p "Do you want to delete this address? [Y/n] : " OPTION

    if [ "$OPTION" = "Y" ] || [ "$OPTION" = "y" ]
    then
        sed -i '' "/$QUERY/I d" $ADDRESS_BOOK_FILE
        echo "Address deleted successfully."
    else
        echo "Try again later."
    fi
}

while true;
do
    echo ""
    echo "1. Add address"
    echo "2. List addresses"
    echo "3. Search address"
    echo "4. Delete address"
    echo "5. Exit"

    read -p "Your option > " OPTION

    case $OPTION in
        "1") addAddress
        ;;

        "2") listAddresses
        ;;

        "3") searchAddress
        ;;

        "4") deleteAddress
        ;;

        *) echo "Exiting..."
            exit 0
        ;;
    esac
done
