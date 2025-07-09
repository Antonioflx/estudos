import { Checkbox, Flex, Text } from "@radix-ui/themes";

export default function LearningCheckboxExample2() {
	return (
		<Flex gap="2" direction="column">
			<Text as="label" size="2">
				<Flex gap="1">
					<Checkbox defaultChecked size="3" />
					Concordo com os termos
				</Flex>
			</Text>
			<Checkbox size="1" defaultChecked color="red" />
			<Checkbox size="2" defaultChecked />
			<Checkbox size="3" defaultChecked />
		</Flex>
	);
}
