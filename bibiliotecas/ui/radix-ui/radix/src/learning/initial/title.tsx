import { Box, Flex, Heading, Text } from "@radix-ui/themes";

export default function Title() {
	return (
		<Box p="4" mt="4">
			<Flex direction="column" gap="4">
				{/*
                    <Heading as="h1/h2/h3" weight="medium/bold ..."
                */}
				<Heading as="h1" color="gray" weight="medium" size="6">
					That's A title
				</Heading>
				<Text as="p" size={{ initial: "2", sm: "7" }}>
					{" "}
					This is a paragraf
				</Text>
				<Text as="div"> This is a Div</Text>
				<Text as="span"> This is a Span</Text>
				<Text as="label" className="hover:text-red-500">
					{" "}
					This is a Label
				</Text>
				<Text as="p" size={{ initial: "2", sm: "7" }} align="center">
					{" "}
					This is a paragraf aling-center
				</Text>
			</Flex>
		</Box>
	);
}
