import {
	RadioGroup,
	Flex,
	RadioCards,
	Text,
	Box,
} from "@radix-ui/themes";

export default function LearningRadioGroup() {
	return (
		<Flex gap="2" direction="column">
			<Flex align="start" direction="column" gap="1">
				<RadioGroup.Root defaultValue="1" name="example">
					<RadioGroup.Item value="1">Padrão</RadioGroup.Item>
					<RadioGroup.Item value="2">Confortável</RadioGroup.Item>
					<RadioGroup.Item value="3">Compacto</RadioGroup.Item>
				</RadioGroup.Root>
			</Flex>
			<Box maxWidth="600px">
				<RadioCards.Root
					defaultValue="1"
					columns={{ initial: "1", sm: "3" }}
				>
					<RadioCards.Item value="1">
						<Flex direction="column" width="100%">
							<Text weight="bold">8-core CPU</Text>
							<Text>32 GB RAM</Text>
						</Flex>
					</RadioCards.Item>
					<RadioCards.Item value="2">
						<Flex direction="column" width="100%">
							<Text weight="bold">6-core CPU</Text>
							<Text>24 GB RAM</Text>
						</Flex>
					</RadioCards.Item>
					<RadioCards.Item value="3">
						<Flex direction="column" width="100%">
							<Text weight="bold">4-core CPU</Text>
							<Text>16 GB RAM</Text>
						</Flex>
					</RadioCards.Item>
				</RadioCards.Root>
			</Box>
		</Flex>
	);
}
