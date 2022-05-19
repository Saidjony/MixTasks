<!DOCTYPE html>
<html lang="Russian">
<head> 
<title>Solving Math Tasks</title>
</head>
<body>
<form method="POST" name="add" >
<h3>input math task to solve it</h3>
<input type="text" name = "solve" placeholder="inputMath"/>

<input type="submit" class="button" name="print" value="=" />

<?php  
If (isset($_POST['print']))
{
    $tasks=$_POST['solve'];

    for ($i=0; $i < strlen($tasks); $i++) { 
        if(ord($tasks[$i]) >64 && ord($tasks[$i])<91 ||ord($tasks[$i]) >96 && ord($tasks[$i])<123 )
        {
            echo "<h3>input wrong!!!</h3>\n<h4>please check input data</h4>";
            return;
        }
   } 
    $result=eval("return $tasks;");
    echo $result;
}
?>
</form>
</body>
</html>