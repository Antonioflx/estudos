import { TextField } from "@radix-ui/themes";

export default function LearningTextField() {
	return (
		<TextField.Root placeholder="Pesquisar ">
			<TextField.Slot>
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
					className="lucide lucide-search-icon lucide-search"
				>
					<path d="m21 21-4.34-4.34" />
					<circle cx="11" cy="11" r="8" />
				</svg>
			</TextField.Slot>
		</TextField.Root>
	);
}
