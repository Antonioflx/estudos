import {
	Avatar,
	Box,
	Button,
	Checkbox,
	Flex,
	Grid,
	Heading,
	Inset,
	Popover,
	Text,
	TextArea,
} from "@radix-ui/themes";

export default function LearningPopOver() {
	return (
		<Flex maxWidth="350px" gap="2" direction="column">
			<Popover.Root>
				<Popover.Trigger>
					<Button variant="soft">
						<svg
							xmlns="http://www.w3.org/2000/svg"
							width="16"
							height="16"
							viewBox="0 0 24 24"
							fill="none"
							stroke="currentColor"
							strokeWidth="2"
							strokeLinecap="round"
							strokeLinejoin="round"
							className="lucide lucide-message-square-icon lucide-message-square"
						>
							<path d="M21 15a2 2 0 0 1-2 2H7l-4 4V5a2 2 0 0 1 2-2h14a2 2 0 0 1 2 2z" />
						</svg>
						Comentar
					</Button>
				</Popover.Trigger>
				<Popover.Content width="360px">
					<Flex gap="3">
						<Avatar
							size="2"
							fallback="A"
							src="https://images.unsplash.com/photo-1607346256330-dee7af15f7c5?&w=64&h=64&dpr=2&q=70&crop=focalpoint&fp-x=0.67&fp-y=0.5&fp-z=1.4&fit=crop"
							radius="full"
						/>
						<Box flexGrow="1">
							<TextArea
								placeholder="Escreva um comentário"
								style={{ height: 80 }}
							/>
							<Flex gap="3" mt="3" justify="between">
								<Flex align="center" gap="2" asChild>
									<Text as="label" size="2">
										<Checkbox />
										<Text>Enviar para o grupo</Text>
									</Text>
								</Flex>
								<Popover.Close>
									<Button size="1">Comentar</Button>
								</Popover.Close>
							</Flex>
						</Box>
					</Flex>
				</Popover.Content>
			</Popover.Root>
			<Popover.Root>
				<Popover.Trigger>
					<Button variant="soft">
						<svg
							xmlns="http://www.w3.org/2000/svg"
							width="24"
							height="24"
							viewBox="0 0 24 24"
							fill="none"
							stroke="currentColor"
							strokeWidth="2"
							strokeLinecap="round"
							strokeLinejoin="round"
							className="lucide lucide-share-icon lucide-share"
						>
							<path d="M12 2v13" />
							<path d="m16 6-4-4-4 4" />
							<path d="M4 12v8a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2v-8" />
						</svg>
						Compartilhar Imagem
					</Button>
				</Popover.Trigger>
				<Popover.Content width="360px" size="4">
					<Grid columns="130px 1fr">
						<Inset side="left" pr="current">
							<img
								src="https://images.unsplash.com/photo-1618005182384-a83a8bd57fbe?&auto=format&fit=crop&w=400&q=80"
								style={{
									objectFit: "cover",
									width: "100%",
									height: "100%",
								}}
							/>
						</Inset>
						<Box>
							<Heading size="2" mb="1">
								Compartilhar Imagem
							</Heading>
							<Text as="p" size="2" mb="4" color="gray">
								Imagem em 3D
							</Text>
							<Flex direction="column" align="stretch">
								<Popover.Close>
									<Button size="2" variant="soft">
										<svg
											xmlns="http://www.w3.org/2000/svg"
											width="24"
											height="24"
											viewBox="0 0 24 24"
											fill="none"
											stroke="currentColor"
											strokeWidth="2"
											strokeLinecap="round"
											strokeLinejoin="round"
											className="lucide lucide-file-symlink-icon lucide-file-symlink"
										>
											<path d="m10 18 3-3-3-3" />
											<path d="M14 2v4a2 2 0 0 0 2 2h4" />
											<path d="M4 11V4a2 2 0 0 1 2-2h9l5 5v13a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2v-3a2 2 0 0 1 2-2h7" />
										</svg>
										Copiar Link
									</Button>
								</Popover.Close>
							</Flex>
						</Box>
					</Grid>
				</Popover.Content>
			</Popover.Root>
		</Flex>
	);
}
