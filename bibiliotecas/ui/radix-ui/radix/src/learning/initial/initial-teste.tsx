import { Box, Button, Flex, Text } from "@radix-ui/themes";

export default function InitialTeste() {
	return (
		<Flex direction="column">
			<Text m="2">Hello from Radix Themes :)</Text>
			<Button radius="large" m="4">
				Let's go
			</Button>
			<Box p="4" width={{ md: "100px", xl: "1400px", sm: "200px" }}>
				{" "}
				<p> Testando </p>
			</Box>
		</Flex>
	);
}
