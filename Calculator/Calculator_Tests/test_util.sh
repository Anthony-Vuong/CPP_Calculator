#!/bin/bash

case $1 in
    "-m")
        make
        ;;
    "-r")
        echo "r"
        if [ $2 = "-a" ]; then
            ./runTests             
        elif [ $2 = "-arithmetic" ]; then
            ./runTests --gtest_filter=Calculator_Arithmetic_Tests.* 
        elif [ $2 = "-parsing" ]; then
            ./runTests --gtest_filter=Calculator_Parsing_Tests.* 
        elif [ $2 = "-calculate" ]; then
            ./runTests --gtest_filter=Calculator_Calculate_Tests.*
        fi
        ;;
    "-h")
        echo "h"
        ;;
    *)
        echo "Unknown fruit."
        ;;
esac
