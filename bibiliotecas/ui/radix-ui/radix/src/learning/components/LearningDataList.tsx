import {
	Badge,
	Code,
	DataList,
	Flex,
	IconButton,
	Link,
} from "@radix-ui/themes";

export default function LearningDataList() {
	return (
		<DataList.Root
			size="3"
			orientation={{ initial: "vertical", sm: "horizontal" }}
		>
			<DataList.Item align="center">
				<DataList.Label minWidth="88px">Status</DataList.Label>
				<DataList.Value>
					<Badge color="jade" variant="soft" radius="full">
						Autorizado
					</Badge>
				</DataList.Value>
			</DataList.Item>
			<DataList.Item align="center">
				<DataList.Label minWidth="88px">ID</DataList.Label>
				<DataList.Value>
					<Flex align="center" gap="2">
						<Code variant="ghost">u_2J89JSA4GJ</Code>
						<IconButton
							size="1"
							aria-label="Copy Value"
							color="gray"
							variant="ghost"
						>
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
								className="lucide lucide-copy-icon lucide-copy"
							>
								<rect
									width="14"
									height="14"
									x="8"
									y="8"
									rx="2"
									ry="2"
								/>
								<path d="M4 16c-1.1 0-2-.9-2-2V4c0-1.1.9-2 2-2h10c1.1 0 2 .9 2 2" />
							</svg>
						</IconButton>
					</Flex>
				</DataList.Value>
			</DataList.Item>
			<DataList.Item align="center">
				<DataList.Label minWidth="88px">Nome</DataList.Label>
				<DataList.Value>Antonio Felix</DataList.Value>
			</DataList.Item>

			<DataList.Item align="center">
				<DataList.Label minWidth="88px">Email</DataList.Label>
				<DataList.Value>
					<Link href="mailto:vlad@workos.com">vlad@workos.com</Link>
				</DataList.Value>
			</DataList.Item>
			<DataList.Item align="center">
				<DataList.Label minWidth="88px">Company</DataList.Label>
				<DataList.Value>
					<Link target="_blank" href="https://workos.com">
						WorkOS
					</Link>
				</DataList.Value>
			</DataList.Item>
		</DataList.Root>
	);
}
