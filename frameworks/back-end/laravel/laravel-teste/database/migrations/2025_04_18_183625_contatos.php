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
        // relacionamento 1 para 1 
        // ou seja, 1 usuario terá apenas um registro com as informações do contato dele
        Schema::create('contatos', function (Blueprint $table) {
            $table->id();
            $table->string('cpf');
            $table->string('cep');
            $table->string('numero');
            $table->string('whatsapp');
            $table->timestamps();

            // associar contatos com user
            $table->unsignedBigInteger('id_user');
            $table->foreign('id_user')->references('id')->on('users')->onDelete('cascade')->onUpdate('cascade');
        });
    }

    /**
     * Reverse the migrations.
     */
    public function down(): void
    {
        Schema::dropIfExists('contatos');
    }
};