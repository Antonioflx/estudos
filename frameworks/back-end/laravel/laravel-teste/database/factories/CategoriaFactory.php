<?php

namespace Database\Factories;

use Illuminate\Database\Eloquent\Factories\Factory;

/**
 * @extends \Illuminate\Database\Eloquent\Factories\Factory<\App\Models\Categoria>
 */
class CategoriaFactory extends Factory
{
    /**
     * Define the model's default state.
     *
     * @return array<string, mixed>
     */
    // definir a estrutura/modelo que vai ser executada para fazer o cadastro
    public function definition(): array
    {
        // $this->faker -> class que vai gerar registros falsos
        return [
            'nome' => $this->faker->unique()->word, 
            'descricao' => $this->faker->text,
        ];
    }
}