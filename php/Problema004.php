<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="../style/style.css">
    <link rel="stylesheet" href="../style/normalize.css">
    <title>Programa 004</title>
</head>
<body>
    <input type="button" onclick="location.href='index.php'" value="Inicio"/>
    <hr>
    <?php
    class Programa004 {
        public string $nombre="Vladimir";
        public int $dinero_hoy=200;
        public function Saludar():string{
            return "Hola soy ".$this->nombre;
        }
        public function DineroHoy(){
            return $this->nombre." tiene hoy de dinero ".$this->dinero_hoy;
        }
        
        print("Saludar");
    } 
    ?>
</body>
</html>