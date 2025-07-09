import { Box, Checkbox, Flex, Text } from "@radix-ui/themes";

export default function LearningCheckbox() {
	return (
		<Box p="4" mt="4">
			<Text as="label" size="3">
				<Flex gap="4">
					<Checkbox defaultChecked />
					Checkbox meu fi
				</Flex>
			</Text>
		</Box>
	);
}
