import {
	Code,
	Em,
	Flex,
	Kbd,
	Link,
	Quote,
	Strong,
	Text,
} from "@radix-ui/themes";

export default function LearningText() {
	return (
		<Flex direction="column" p="4">
			<Text as="p"> Parágrafo</Text>
			<Text as="div"> Text oDiv</Text>
			<Text as="label"> Label</Text>
			<Text as="span"> Span</Text>
			{/* 
                Para ajustar o texto 
                truncate -> fica em ... caso o texto passe
                wrap -> quebra o texto
                nowrap -> n quebra o texto
                balance -> quebra o texto alinhado a direita parece
                e pretty -> a esquerda
            */}
			<Flex maxWidth="300px" mt="4">
				<Text truncate>
					The goal of typography is to relate font size, line height,
					and line width in a proportional way that maximizes beauty
					and makes reading easier and more pleasant.
				</Text>
			</Flex>
			<Flex maxWidth="400px" mt="4">
				<Text wrap="wrap">
					The goal of typography is to relate font size, line height,
					and line width in a proportional way that maximizes beauty
					and makes reading easier and more pleasant.
				</Text>
			</Flex>
			<Text color="gray">Controlando a cor</Text>
			<Text>
				<Strong> Strong</Strong>
			</Text>
			<Text>
				<Em> Italico</Em>
			</Text>
			<Text as="p">
				Look, such a helpful{" "}
				<Kbd>
					<Link href="#" underline="hover">
						Link{" "}
					</Link>
				</Kbd>
				, an <Em>italic emphasis</Em>, a piece of computer{" "}
				<Code>code</Code>, and even a hotkey combination{" "}
				<Kbd>⇧⌘A</Kbd> within the text.
			</Text>
			<Text as="div">
				<Link href="#" underline="hover">
					{" "}
					This is A link
				</Link>
			</Text>

			<Text as="p">
				Mostrando o quote <Quote>This is A Quote...</Quote>
			</Text>
		</Flex>
	);
}
