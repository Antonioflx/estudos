import {
	Button,
	Dialog,
	Flex,
	Text,
	TextField,
} from "@radix-ui/themes";

export default function LearningDialog() {
	return (
		<Dialog.Root>
			<Dialog.Trigger>
				<Button>Editar Perfil</Button>
			</Dialog.Trigger>

			<Dialog.Content maxWidth="450px">
				<Dialog.Title>Editar Perfil</Dialog.Title>
				<Dialog.Description>
					Faça Edições do seu perfil
				</Dialog.Description>

				<Flex direction="column" gap="3">
					<label>
						<Text as="div" size="2" mb="1" weight="bold">
							Name
						</Text>
						<TextField.Root
							defaultValue="Antonio Felix"
							placeholder="Nome Completo"
						/>
					</label>
					<label>
						<Text as="div" size="2" mb="1" weight="bold">
							Email
						</Text>
						<TextField.Root
							defaultValue="teste@gmail.com"
							placeholder="email"
						/>
					</label>
				</Flex>
				<Flex gap="3" mt="4" justify="end">
					<Dialog.Close>
						<Button variant="soft" color="gray">
							Cancelar
						</Button>
					</Dialog.Close>
					<Dialog.Close>
						<Button>Save</Button>
					</Dialog.Close>
				</Flex>
			</Dialog.Content>
		</Dialog.Root>
	);
}
