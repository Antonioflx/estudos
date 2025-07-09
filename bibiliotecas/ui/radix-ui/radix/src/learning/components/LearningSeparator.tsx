import { Flex, Separator, Text } from "@radix-ui/themes";

export default function LearningSeparator() {
	return (
		<Text size="2">
			Configurações bla bla...
			<Separator my="3" size="4" />
			<Flex gap="3" align="center">
				Temas
				<Separator orientation="vertical" />
				Primitivos
				<Separator orientation="vertical" />
				Icones
				<Separator orientation="vertical" />
				Cores
			</Flex>
		</Text>
	);
}
