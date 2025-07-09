import {
	Box,
	Container,
	Flex,
	Grid,
	Section,
	Text,
} from "@radix-ui/themes";

export default function Layouts() {
	return (
		<Box p="4">
			<Flex direction="column" gap="2">
				<Text as="span">Flex 1</Text>
				<Text as="span">Flex</Text>
			</Flex>
			<Grid
				columns={{
					initial: "2",
					sm: "3",
					md: "4",
					lg: "5",
					xl: "6",
					xs: "7",
				}}
				mt="4"
			>
				{" "}
				<Text as="p"> Testando 1</Text>
				<Text as="p"> Testando 2</Text>
				<Text as="p"> Testando 3</Text>
				<Text as="p"> Testando 4</Text>
				<Text as="p"> Testando 5</Text>
				<Text as="p"> Testando 6</Text>
				<Text as="p"> Testando 7</Text>
				<Text as="p"> Testando 8</Text>
				<Text as="p"> Testando 9</Text>
				<Text as="p"> Testando 10</Text>
				<Text as="p"> Testando 11</Text>
				<Text as="p"> Testando 12</Text>
			</Grid>
			<Section maxWidth={{ initial: "100px", sm: "400px" }} mt="4">
				<Text> This is A Section </Text>
			</Section>
			<Container width="400px" mt="4">
				<Text> This is A Container </Text>
			</Container>
		</Box>
	);
}
