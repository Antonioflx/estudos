<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

return new class extends Migration
{
    /**
     * Run the migrations.
     */
    public function up(): void
    {
        // relacionamento de muitos para muitos
        Schema::create('regras', function (Blueprint $table) {
            $table->id();
            $table->string('nome');
            $table->timestamps();
        });

        // tabela que estao sendo relacionadas regra_user -> vai conter as 2 chaves estrangeiras
        Schema::create('regra_user', function (Blueprint $table) {
            $table->id();
            

            // referencia para tabela users
            $table->unsignedBigInteger(column: 'id_user');
            $table->foreign('id_user')->references('id')->on('users');

            // referencia a tabela regras
            $table->unsignedBigInteger('id_regra');
            $table->foreign('id_regra')->references('id')->on('regras');


            $table->timestamps();
        });
    }

    /**
     * Reverse the migrations.
     */
    public function down(): void
    {
        Schema::dropIfExists('regras');
        Schema::dropIfExists('regra_user');
    }
};