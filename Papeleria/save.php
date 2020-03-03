<?php
include "db.php";

if(isset($_POST["btnguardar"])){
	$con = connect();
	$nombre = $_POST['Nombre'];
	$precio = $_POST['Precio'];
	$marca = $_POST['Marca'];
  $consulta = "SELECT idProducto FROM producto ORDER BY idProducto DESC LIMIT 1";
  $resultado = mysqli_query($con , $consulta);
  $id = (mysqli_fetch_assoc($resultado)["idProducto"]) + 1;
  $consulta = "INSERT INTO producto (idProducto, Nombre, Precio, Marca) VALUE ('$id', '$nombre', '$precio', '$marca')";
  $con->query($consulta);
  //echo $consulta;
  header("Location: index.php?option=ok");
}

?>