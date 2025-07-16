<!DOCTYPE html>
<html lang="es">
<head>
  <meta charset="UTF-8">
  <title>Malla Curricular</title>
  <style>
    body { font-family: sans-serif; background: #f0f0f0; padding: 20px; }
    .semestre { background: white; padding: 15px; margin-bottom: 20px; border-radius: 6px; box-shadow: 0 2px 5px rgba(0,0,0,0.1); }
    .ramo { margin: 8px 0; padding: 10px; background: #ecf0f1; border-left: 5px solid #3498db; cursor: pointer; }
    .detalle { display: none; font-size: 0.9em; color: #555; }
  </style>
</head>
<body>

  <h1>Malla Curricular - Pedagogía en Matemática y Computación</h1>

  <div class="semestre">
    <h2>1° Año - Semestre 1</h2>
    <div class="ramo" onclick="toggle(this)">Álgebra y Trigonometría<div class="detalle">Prerrequisitos: Ninguno</div></div>
    <div class="ramo" onclick="toggle(this)">Geometría en el Plano y el Espacio<div class="detalle">Prerrequisitos: Ninguno</div></div>
    <div class="ramo" onclick="toggle(this)">Introducción a la Pedagogía<div class="detalle">Prerrequisitos: Ninguno</div></div>
  </div>

  <script>
    function toggle(el) {
      const detalle = el.querySelector(\".detalle\");
      detalle.style.display = detalle.style.display === \"block\" ? \"none\" : \"block\";
    }
  </script>

</body>
</html>
