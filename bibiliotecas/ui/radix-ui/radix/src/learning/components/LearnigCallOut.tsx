import { Callout, Flex } from "@radix-ui/themes";

export default function LearningCallOut() {
	return (
		<Flex gap="2" direction="column">
			<Callout.Root>
				<Callout.Icon>
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
						className="lucide lucide-info-icon lucide-info"
					>
						<circle cx="12" cy="12" r="10" />
						<path d="M12 16v-4" />
						<path d="M12 8h.01" />
					</svg>
				</Callout.Icon>
				<Callout.Text>
					Precisa de permisão do administrador para acessar a
					aplicação
				</Callout.Text>
			</Callout.Root>
			<Callout.Root size="3">
				<Callout.Icon>
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
						className="lucide lucide-info-icon lucide-info"
					>
						<circle cx="12" cy="12" r="10" />
						<path d="M12 16v-4" />
						<path d="M12 8h.01" />
					</svg>
				</Callout.Icon>
				<Callout.Text>
					Precisa de permisão do administrador para acessar a
					aplicação 2
				</Callout.Text>
			</Callout.Root>
		</Flex>
	);
}
