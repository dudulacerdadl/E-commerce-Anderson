<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Verificar informações</title>
    <link rel="stylesheet" href="../css/style.css" media="screen" title="no title" charset="utf-8">
    <script type="text/javascript" src="../js/jquery-2.1.4.min.js"></script>
    <script type="text/javascript" src="../js/script.js"></script>
</head>
<body>
    <header>
        <div class="center">
          <h1>Programação Web II - Pedido de compra - By Anderson Macedo</h1>
          <a href="../index.php">Voltar</a>
        </div>
    </header>
    <?php

    $nome = $_POST['nome'];
    $marca = $_POST['marca'];
    $descricao = $_POST['descricao'];
    $estoque = $_POST['estoque'];
    $preco = (float) $_POST['preco'];

    $erro = 0;

    if(empty($nome)) {
        print "Favor digitar o seu nome corretamente.<br>";
        $erro = 1;
    }

    if (gettype($preco) != 'double') {
        print "O tipo de Preço está como: " . gettype($preco);
        $erro = 1;
    }

    if($erro == 0) {
        include 'insere-produto.inc';
    }

    ?>
</body>
</html>