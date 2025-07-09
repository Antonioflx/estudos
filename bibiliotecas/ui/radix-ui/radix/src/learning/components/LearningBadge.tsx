import { Badge, Flex } from "@radix-ui/themes";

export function LearningBadge() {
	return (
		<Flex gap="2">
			<Badge color="orange">Em Progesso</Badge>
			<Badge color="blue">Em Revisão</Badge>
			<Badge color="green">Completo</Badge>
			<Badge color="yellow" size="3">
				Pendente
			</Badge>
			<Badge color="yellow" size="3" variant="solid">
				Pendente
			</Badge>
		</Flex>
	);
}
