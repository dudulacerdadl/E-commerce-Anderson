<?php

include 'conecta_mysql.inc';

    $nome = $_POST['nome'];
    $telefone = $_POST['telefone'];

    $sql = "INSERT INTO fornecedor VALUES";
    $sql .= " ('id', '$nome', '$telefone')";

    if ($conexao->query($sql) == TRUE) {
        print "<h1>Fornecedor incluído com suceso!</h1>";
    } else {
        print "Erro: " .$sql . "<br>". $conexao->error;
    }

    $conexao->close();
