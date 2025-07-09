import { Select } from "@radix-ui/themes";

export default function LearningSelect() {
	return (
		<Select.Root defaultValue="apple">
			<Select.Trigger />
			<Select.Content position="popper">
				<Select.Group>
					<Select.Label>Fruits</Select.Label>
					<Select.Item value="orange">Orange</Select.Item>
					<Select.Item value="apple">Apple</Select.Item>
					<Select.Item value="grape" disabled>
						Grape
					</Select.Item>
				</Select.Group>
				<Select.Separator />
				<Select.Group>
					<Select.Label>Vegetables</Select.Label>
					<Select.Item value="carrot">Carrot</Select.Item>
					<Select.Item value="potato">Potato</Select.Item>
				</Select.Group>
			</Select.Content>
		</Select.Root>
	);
}
