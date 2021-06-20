<?php

include 'conecta_mysql.inc';

    $nome = $_POST['nome'];
    $login = $_POST['login'];
    $senha = $_POST['senha'];
    $dtnasc = $_POST['dtnasc'];
    $endereco = $_POST['endereco'];
    $sexo = $_POST['sexo'];
    $cpf = $_POST['cpf'];
    $rg = $_POST['rg'];
    $telefone = $_POST['telefone'];
    $celular = $_POST['celular'];

    $sql = "INSERT INTO cliente VALUES";
    $sql .= " ('id', '$nome', '$login', '$senha', '$dtnasc', '$endereco', '$sexo', '$cpf', '$rg', '$telefone', '$celular')";

    if ($conexao->query($sql) == TRUE) {
        print "<h1>Cliente incluído com suceso!</h1>";
    } else {
        print "Erro: " .$sql . "<br>". $conexao->error;
    }

    $conexao->close();
