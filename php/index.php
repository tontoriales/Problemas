<!DOCTYPE html>
<html lang="es">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../style/style.css">
  <link rel="stylesheet" href="../style/normalize.css">
  <title>Problemas PHP</title>
</head>
<body>
	<h1>Problemas PHP</h1>
  <hr>
  <!-- CON WHILE -->
  <?php
    $n=0;
    $bloque=0;
    do {
      $numeroConCeros = str_pad($n, 3, "0", STR_PAD_LEFT);
      if ($n%10==0) {
        switch ($bloque) {
          case 0:
            echo '<h2>'.$bloque.') Algoritmo secuencial simple 1<h2>';
            break;
          case 1:
            echo '<h2>'.$bloque.') Algoritmo secuencial simple 2<h2>';
            break;
          case 2:
            echo '<h2>'.$bloque.') Exámen (21-22-23-24) < Reforzamiento<h2>';
            break;
          case 3:
            echo '<h2>'.$bloque.') Estructuras condicionales anidadas 1<h2>';
            break;
          case 4:
            echo '<h2>'.$bloque.') Estructuras condicionales anidadas 2<h2>';
            break;
        }
        $bloque++;
      }
      $n++;?>
      <input type="button" onclick="location.href='Problema<?= $numeroConCeros.'.php'?>'" value="<?= $numeroConCeros?>"/>
    <?php
    }while ($n < 50)
  ?>
    <!-- CON FOR -->
  <?php
   for ($i=50; $i < 100 ; $i++) { 
    $numeroConCeros = str_pad($i, 3, "0", STR_PAD_LEFT);
      if ($i%10==0) {
        switch ($bloque) {
          case 5:
            echo '<h2>'.$bloque.') Condicional Switch <h2>';
            break;
          case 6:
            echo '<h2>'.$bloque.') Ciclo For <h2>';
            break;
          case 7:
            echo '<h2>'.$bloque.') Ciclo While <h2>';
            break;
          case 8:
            echo '<h2>'.$bloque.') Ciclo Do While<h2>';
            break;
          case 9:
            echo '<h2>'.$bloque.') Arreglos <h2>';
            break;
          default:
            echo '<h2>'.$bloque.') bloque sin tema específico <h2>';
            break;
        }
        $bloque++;
      }?>  
      <input type="button" onclick="location.href='Problema<?= $numeroConCeros.'.php'?>'" value="<?= $numeroConCeros?>"/>
    <?php 
    } 
  ?>
</body>
</html>

