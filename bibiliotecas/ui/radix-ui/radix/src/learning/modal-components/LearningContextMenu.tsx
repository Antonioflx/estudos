import { ContextMenu } from "@radix-ui/themes";

export default function LearningContextMenu() {
	return (
		// botão direito
		<ContextMenu.Root>
			<ContextMenu.Trigger>
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
					className="lucide lucide-arrow-right-to-line-icon lucide-arrow-right-to-line"
				>
					<path d="M17 12H3" />
					<path d="m11 18 6-6-6-6" />
					<path d="M21 5v14" />
				</svg>
			</ContextMenu.Trigger>
			<ContextMenu.Content size="2">
				<ContextMenu.Item shortcut="⌘ E" color="red">
					Edit
				</ContextMenu.Item>
				<ContextMenu.Item shortcut="⌘ D" color="gold">
					Duplicate
				</ContextMenu.Item>
				<ContextMenu.Separator />
				<ContextMenu.Item shortcut="⌘ N">Archive</ContextMenu.Item>

				<ContextMenu.Sub>
					<ContextMenu.SubTrigger>More</ContextMenu.SubTrigger>
					<ContextMenu.SubContent>
						<ContextMenu.Item>Move to project…</ContextMenu.Item>
						<ContextMenu.Item>Move to folder…</ContextMenu.Item>
						<ContextMenu.Separator />
						<ContextMenu.Item>Advanced options…</ContextMenu.Item>
					</ContextMenu.SubContent>
				</ContextMenu.Sub>

				<ContextMenu.Separator />
				<ContextMenu.Item>Share</ContextMenu.Item>
				<ContextMenu.Item>Add to favorites</ContextMenu.Item>
				<ContextMenu.Separator />
				<ContextMenu.Item shortcut="⌘ ⌫" color="red">
					Delete
				</ContextMenu.Item>
			</ContextMenu.Content>
		</ContextMenu.Root>
	);
}
