import { Box, Button, DropdownMenu } from "@radix-ui/themes";

export default function LearningDropDown() {
	return (
		<Box maxWidth="400px">
			<DropdownMenu.Root>
				<DropdownMenu.Trigger>
					<Button variant="soft">Opções</Button>
				</DropdownMenu.Trigger>
				<DropdownMenu.Content>
					<DropdownMenu.Item shortcut="⌘ E">Edição</DropdownMenu.Item>
					<DropdownMenu.Item shortcut="⌘ D">
						Duplicar
					</DropdownMenu.Item>
					<DropdownMenu.Separator />
					<DropdownMenu.Item shortcut="⌘ N">
						Arquivo
					</DropdownMenu.Item>
					<DropdownMenu.Sub>
						<DropdownMenu.SubTrigger>Mais</DropdownMenu.SubTrigger>
						<DropdownMenu.SubContent>
							<DropdownMenu.Item>
								Mover para o projeto...
							</DropdownMenu.Item>
							<DropdownMenu.Item>
								Mover para o arquivo...
							</DropdownMenu.Item>
							<DropdownMenu.Separator />
							<DropdownMenu.Item>Opções avançadas</DropdownMenu.Item>
						</DropdownMenu.SubContent>
						<DropdownMenu.Separator />
						<DropdownMenu.Item>Compartilhar</DropdownMenu.Item>
						<DropdownMenu.Item>
							Adicionar aos favorotios
						</DropdownMenu.Item>
						<DropdownMenu.Separator />
						<DropdownMenu.Item shortcut="⌘ ⌫" color="red">
							Deletar
						</DropdownMenu.Item>
					</DropdownMenu.Sub>
				</DropdownMenu.Content>
			</DropdownMenu.Root>
		</Box>
	);
}
