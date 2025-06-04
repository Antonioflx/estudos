<?php

namespace Database\Seeders;

use App\Models\User;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;

class UsersSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    // açao para fazer quando executar
    // criar um usuario
    public function run(): void
    {
        // criar um usuario create
        User::create([
            'firstName' => 'Antonio',
            'lastName' => 'Felix',
            'email' => 'antoniofelix@gmail.com',
            'password' => bcrypt('1234567'),
            // bcrypt(senha) -> criptografar
        ]);
    }
}