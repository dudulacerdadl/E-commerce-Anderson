<?php

include 'conecta_mysql.inc';

    $nome = $_POST['nome'];
    $marca = $_POST['marca'];
    $descricao = $_POST['descricao'];
    $estoque = $_POST['estoque'];
    $preco = $_POST['preco'];

    $sql = "INSERT INTO produtos VALUES";
    $sql .= " ('id', 1, '$marca', '$nome', '$descricao', '$estoque', '$preco')";

    if ($conexao->query($sql) == TRUE) {
        print "<h1>Cliente incluído com suceso!</h1>";
    } else {
        print "Erro: " .$sql . "<br>". $conexao->error;
    }

    $conexao->close();
