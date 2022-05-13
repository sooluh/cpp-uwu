<?php

function main()
{
    $a = 12;
    wow($a);

    print_r($a);
}

function wow(&$b)
{
    $b = 10;
}

main();
