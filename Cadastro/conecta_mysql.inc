<?php

$conexao = mysqli_connect('localhost', 'root', '', 'macedo');

mysqli_set_charset($conexao, 'utf8');

if ($conexao->connect_error) {
    die("Falha ao realizar conexão: ". $conexao->connect_error);
}

?>