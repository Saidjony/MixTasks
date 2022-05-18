<?php

$inputnumber=5; //вводимий число

function isNumberInRange($num)
{
    if($num>0 and $num<10)
    {
        return true;
    } 
    return false;
}

echo(isNumberInRange($inputnumber));