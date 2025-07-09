import { Button, Flex } from "@radix-ui/themes";
import { useState } from "react";

type VariantValuesProps =
	| "classic"
	| "solid"
	| "soft"
	| "surface"
	| "outline";

export default function LearningButtons() {
	const variantOptions: VariantValuesProps[] = [
		"classic",
		"solid",
		"soft",
		"surface",
		"outline",
	];
	const [variantValue, setVariantValue] =
		useState<VariantValuesProps>(variantOptions[0]);

	function randomizeVariant() {
		const randomIndex = Math.floor(
			Math.random() * variantOptions.length
		);

		setVariantValue(variantOptions[randomIndex]);
	}

	return (
		<Flex gap="2" direction="column" width="100px">
			<Button size="3">BookMark</Button>

			<Button size="3" radius="large">
				Radius 2
			</Button>
			<Button size="3" radius="medium">
				Radius 3
			</Button>
			<Button
				size="3"
				variant={variantValue}
				onClick={randomizeVariant}
			>
				Teste
			</Button>
			<Button size="3" loading variant="solid">
				loading
			</Button>
		</Flex>
	);
}
