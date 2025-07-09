import { Grid, Text } from "@radix-ui/themes";

export default function LearningGrid() {
	return (
		// <Grid gap="2" columns="2" justify="center" align="center">
		// responsivo

		// initial -> inicial até 768px;
		// sm -> 768px;
		// md -> 1024px;
		// lg -> 1280px;
		// xl -> 1640px;
		// xs -> 2600px; ( talvez, n consegui achar )

		<Grid
			gap="2"
			columns={{ initial: "1", sm: "2" }}
			justify="center"
			align="center"
		>
			<Text align="center"> Grid 1</Text>
			<Text align="center"> Grid 2</Text>
			<Text align="center"> Grid 3</Text>
			<Text align="center"> Grid 4</Text>
		</Grid>
	);
}
