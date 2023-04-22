<?php
	include("Conexion.php");
	$clientes = "SELECT * FROM CLIENTES"
?>
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="../style/style.css">
    <link rel="stylesheet" href="../style/normalize.css">
    <title>Programa 053</title>
</head>
<body>
	<input type="button" onclick="location.href='index.php'" value="Inicio"/>
	<hr>
	<?php $resultado= mysqli_query($conexion, $clientes);
	while ($row=mysqli_fetch_assoc($resultado)) { ?>
		<table style="border: 1px solid #000;">
			<tr>
				<td><?php echo $row["CODIGO"]; ?></td>
				<td><?php echo $row["APELLIDO"]; ?></td>
				<td><?php echo $row["NOMBRE"]; ?></td>
				<td><?php echo $row["DNI"]; ?></td>
			</tr>
		</table>
		<?php } mysqli_free_result($resultado); ?>
</body>
</html>