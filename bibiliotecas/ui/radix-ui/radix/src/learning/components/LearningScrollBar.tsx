import {
	Box,
	Flex,
	Heading,
	ScrollArea,
	Text,
} from "@radix-ui/themes";

export default function LearningScrollBar() {
	return (
		<ScrollArea
			type="auto"
			scrollbars="vertical"
			className="h-48"
			size="1"
		>
			<Box p="2" pr="8">
				<Heading size="4" mb="2" trim="start">
					Principios da tipografia
				</Heading>
				<Flex direction="column" gap="4">
					<Text as="p">
						Lorem ipsum, dolor sit amet consectetur adipisicing elit.
						Eum iste illum, reiciendis quos accusamus culpa dolorum
						tempore consectetur placeat maxime vel, odio nesciunt.
						Dolores aliquam similique ipsum ex odit. Ad! Lorem ipsum
						dolor sit amet consectetur adipisicing elit. Inventore in
						veritatis magnam cupiditate, ut, tenetur esse
						exercitationem nemo sapiente, libero consectetur rem
						adipisci architecto accusantium quos molestias temporibus!
						Perspiciatis, alias. Lorem ipsum dolor sit amet,
						consectetur adipisicing elit. Perferendis nesciunt soluta
						fuga eius minima earum, quaerat quidem ullam laboriosam.
						Magnam, illum? Commodi placeat sed vel velit? Porro, animi
						dicta? Blanditiis.
					</Text>
					<Text as="p">
						Lorem ipsum, dolor sit amet consectetur adipisicing elit.
						Eum iste illum, reiciendis quos accusamus culpa dolorum
						tempore consectetur placeat maxime vel, odio nesciunt.
						Dolores aliquam similique ipsum ex odit. Ad! Lorem ipsum
						dolor sit amet consectetur adipisicing elit. Inventore in
						veritatis magnam cupiditate, ut, tenetur esse
						exercitationem nemo sapiente, libero consectetur rem
						adipisci architecto accusantium quos molestias temporibus!
						Perspiciatis, alias. Lorem ipsum dolor sit amet,
						consectetur adipisicing elit. Perferendis nesciunt soluta
						fuga eius minima earum, quaerat quidem ullam laboriosam.
						Magnam, illum? Commodi placeat sed vel velit? Porro, animi
						dicta? Blanditiis.
					</Text>
					<Text as="p">
						Lorem ipsum, dolor sit amet consectetur adipisicing elit.
						Eum iste illum, reiciendis quos accusamus culpa dolorum
						tempore consectetur placeat maxime vel, odio nesciunt.
						Dolores aliquam similique ipsum ex odit. Ad! Lorem ipsum
						dolor sit amet consectetur adipisicing elit. Inventore in
						veritatis magnam cupiditate, ut, tenetur esse
						exercitationem nemo sapiente, libero consectetur rem
						adipisci architecto accusantium quos molestias temporibus!
						Perspiciatis, alias. Lorem ipsum dolor sit amet,
						consectetur adipisicing elit. Perferendis nesciunt soluta
						fuga eius minima earum, quaerat quidem ullam laboriosam.
						Magnam, illum? Commodi placeat sed vel velit? Porro, animi
						dicta? Blanditiis.
					</Text>
				</Flex>
			</Box>
		</ScrollArea>
	);
}
