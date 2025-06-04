<?php

namespace App\Http\Controllers;

// direitorio que armazena as entidades do laravel
use Illuminate\Http\Request;

// Request -> obter uma instancia via requisição HTTP
class ProdutoController extends Controller
{   
    // tem que ser o mesmo nome
    public function index() {
        return "index";
    }

    // mostrar o id, vai pegar o id pela url e mostrar
    public function showProduct($id = '') {
        return $id ? "show ID: " . $id : "NÃO TEM ID...";
    }
}