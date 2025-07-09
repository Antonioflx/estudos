import { AlertDialog, Button, Flex } from "@radix-ui/themes";

export default function LearningAlert() {
	return (
		/*
             Root seria basicamente o Box da vida.
             Trigger -> disparo
            Content -> O conteúdo
            Title -> Titulo do conteúdo
            Description -> Descrição

            Cancel -> Botão de fechar
            Action -> Botão de ativar algo
        */
		<AlertDialog.Root>
			<AlertDialog.Trigger>
				<Button color="red"> Negar Acesso </Button>
			</AlertDialog.Trigger>
			<AlertDialog.Content maxWidth="450px">
				<AlertDialog.Title>Negar Acesso</AlertDialog.Title>
				<AlertDialog.Description size="2">
					Voce tem certeza? Não será possivel acessar essa navegação
					de novo
				</AlertDialog.Description>

				<Flex gap="3" mt="4" justify="end">
					<AlertDialog.Cancel>
						<Button variant="soft" color="gray">
							Cancelar
						</Button>
					</AlertDialog.Cancel>
					<AlertDialog.Action>
						<Button variant="solid" color="red">
							Negar Acesso
						</Button>
					</AlertDialog.Action>
				</Flex>
			</AlertDialog.Content>
		</AlertDialog.Root>
	);
}
