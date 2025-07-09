import { Box, Flex, Radio, Text } from "@radix-ui/themes";

export default function LearningRadio() {
	return (
		<Flex gap="2" direction="column">
			<Flex align="start" direction="column" gap="1">
				<Flex asChild gap="2">
					<Text as="label" size="2">
						<Radio name="Example" value="1" defaultChecked />
						Padrão
					</Text>
				</Flex>
				<Flex asChild gap="2">
					<Text as="label" size="2">
						<Radio name="Example" value="2" />
						Confortável
					</Text>
				</Flex>
				<Flex asChild gap="2">
					<Text as="label" size="2">
						<Radio name="Example" value="3" />
						Compacto
					</Text>
				</Flex>
			</Flex>
		</Flex>
	);
}
