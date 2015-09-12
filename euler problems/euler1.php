<html>
<head>
<title>php euler</title>
</head>

<body>

<?php

$adder = 0;
$i;
for ($i = 0; $i < 1000; $i++) {
	if ($i % 3 == 0 || $i % 5 == 0) {
		print("\t" . $i);
		$adder += $i;
	}
}

echo "<br> The sum of the multiples of 3 and 5 under 1000 is: " . $adder;

?>

</body>
</html>