import { Box, Text, TextField } from "@radix-ui/themes";

export default function InputText() {
	return (
		<Box p="4">
			<Text as="label" htmlFor="input-text">
				{" "}
				Clique para ir ao input
			</Text>
			<TextField.Root
				mt="2"
				placeholder="Aqui é o input:text"
				id="input-text"
			>
				<TextField.Slot />
			</TextField.Root>
		</Box>
	);
}
