import {
	Box,
	CheckboxCards,
	CheckboxGroup,
	Flex,
	Text,
} from "@radix-ui/themes";

export default function LearningCheckboxGroup() {
	return (
		<Flex gap="2" direction="column">
			<CheckboxGroup.Root defaultValue={["1"]} name="example">
				<CheckboxGroup.Item value="1">Diversão</CheckboxGroup.Item>
				<CheckboxGroup.Item value="2">Felicidaed</CheckboxGroup.Item>
				<CheckboxGroup.Item value="3">Estudar</CheckboxGroup.Item>
				<CheckboxGroup.Item value="4" disabled>
					Jogar
				</CheckboxGroup.Item>
			</CheckboxGroup.Root>
			<Box maxWidth="600px">
				<CheckboxCards.Root>
					<CheckboxCards.Item value="1">
						<Flex direction="column" width="100%">
							<Text weight="bold">Teste 1</Text>
							<Text>Testando</Text>
						</Flex>
					</CheckboxCards.Item>
				</CheckboxCards.Root>
				<CheckboxCards.Root>
					<CheckboxCards.Item value="2">
						<Flex direction="column" width="100%">
							<Text weight="bold">Teste 2</Text>
							<Text>Testando de novo</Text>
						</Flex>
					</CheckboxCards.Item>
				</CheckboxCards.Root>
				<CheckboxCards.Root>
					<CheckboxCards.Item value="3">
						<Flex direction="column" width="100%">
							<Text weight="bold">Teste 3</Text>
							<Text>Testando de novo e de novo</Text>
						</Flex>
					</CheckboxCards.Item>
				</CheckboxCards.Root>
			</Box>
		</Flex>
	);
}
