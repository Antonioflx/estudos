<?php

namespace Database\Factories;

use App\Models\Categoria;
use App\Models\User;
use Illuminate\Database\Eloquent\Factories\Factory;
use Illuminate\Support\Str;


class ProdutoFactory extends Factory
{
    /**
     * Define the model's default state.
     *
     * @return array<string, mixed>
     */
    public function definition(): array
    {
        $nome = $this->faker->unique()->sentence();
        return [
            'nome' => $nome,
            'descricao' =>$this->faker->paragraph(),
            'preco' =>$this->faker->randomNumber(2),
            'slug' => Str::slug($nome), // STR -> ajuda par um tipo String
            'imagem' => $this->faker->imageUrl(400 , 400),
            
            // valores de outras tabelas -> Importar o Model
            'id_user' => User::pluck('id')->random(), // pluck extrai uma informação da tabela,
            'id_categoria' => Categoria::pluck('id')->random(),
        ];
    }
}