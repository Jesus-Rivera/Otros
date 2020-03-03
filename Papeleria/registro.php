<!doctype html>
<html lang="es">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">
    <link rel="icon" href="favicon.ico">

    <title>Registro</title>
    <!-- Bootstrap core CSS -->
    <link href="dist/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom styles for this template -->
    <link href="assets/css/sticky-footer-navbar.css" rel="stylesheet">
<link rel="stylesheet" href="http://code.jquery.com/ui/1.10.1/themes/base/jquery-ui.css" />

  </head>

  <body>

    <header>
      <!-- Fixed navbar -->
      <nav class="navbar navbar-expand-md navbar-dark fixed-top bg-dark">
        <a class="navbar-brand" href="index.php"><img src="assets/img/lapiz.png" width="6%"> Papeleria</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarCollapse" aria-controls="navbarCollapse" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarCollapse">
          <ul class="navbar-nav mr-auto"> 
          </ul>
            <a class="nav-link" href="registro.php"><button class="btn btn-primary btn-sm my-2 my-sm-0 " disabled type="">Registrar</button></a>
        </div>
      </nav>
    </header>

    <!-- Begin page content -->

<div class="container">
 <h1 class="mt-5">Registrar producto </h1>
 <hr>

<div class="row">
  <div class="col-12 col-md-6">

   <!-- Contenido --> 

<form id="frmLogin" action="save.php" method="post">
  <fieldset>
        <div class="form-group">
    <label for="Nombre">Nombre:</label>
    <input required type="text" class="form-control" name="Nombre" placeholder="Ingrese el nombre" value="">
 	   </div>
        <div class="form-group">
    <label for="Precio">Precio:</label>
    <input required class="form-control" type="text" name="Precio"  placeholder="Ingrese precio" value="">
 	   </div>

        <div class="form-group">
    <label for="Marca">Marca:</label>
    <input class="form-control" type="text" name="Marca"  placeholder="Ingrese marca" value="">
 	   </div>
    <input type="hidden" name="btnguardar" value="">
<input class="btn btn-primary" type="submit" value="Registrar producto">
             
  </fieldset>

</form>

 <!-- Fin Contenido --> 
</div>
</div><!-- Fin row -->


</div><!-- Fin container -->
    <footer class="footer">
      <div class="container">
        <span class="text-muted"><p>Made by <a href="" target="_blank">Jesus Rivera</a></p></span>
      </div>
    </footer>
    <script>window.jQuery || document.write('<script src="assets/js/vendor/jquery-slim.min.js"><\/script>')</script>
    <script src="assets/js/vendor/popper.min.js"></script>
    <script src="dist/js/bootstrap.min.js"></script>
  </body>
</html>
