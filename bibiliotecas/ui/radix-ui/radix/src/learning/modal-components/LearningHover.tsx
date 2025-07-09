import {
	Avatar,
	Box,
	Flex,
	Heading,
	HoverCard,
	Link,
	Text,
} from "@radix-ui/themes";

export default function LearningHover() {
	return (
		<Text>
			Seguir{" "}
			<HoverCard.Root>
				<HoverCard.Trigger>
					<Link
						href="https://www.instagram.com/antonioflxx/"
						target="_blank"
					>
						@antonioflxx
					</Link>
				</HoverCard.Trigger>
				<HoverCard.Content maxWidth="300px">
					<Flex gap="4">
						<Avatar
							size="3"
							fallback="R"
							radius="full"
							src="https://pbs.twimg.com/profile_images/1337055608613253126/r_eiMp2H_400x400.png"
						/>
						<Box>
							<Heading size="3" as="h3">
								Antonio Felix
							</Heading>
							<Text as="div" size="2" color="gray" mb="2">
								@antonioflxx
							</Text>
							<Text as="div" size="2">
								Minhas fotos, etc.
							</Text>
						</Box>
					</Flex>
				</HoverCard.Content>
			</HoverCard.Root>{" "}
			para observar meu avanço em TI
		</Text>
	);
}
