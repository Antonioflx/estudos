import {
	Box,
	Flex,
	Separator,
	TabNav,
	Tabs,
	Text,
} from "@radix-ui/themes";

export default function LearningTabs() {
	return (
		<Flex gap="2" direction="column">
			<Tabs.Root defaultValue="account">
				<Tabs.List>
					<Tabs.Trigger value="account">Account</Tabs.Trigger>
					<Tabs.Trigger value="documents">Documents</Tabs.Trigger>
					<Tabs.Trigger value="settings">Settings</Tabs.Trigger>
				</Tabs.List>

				<Box pt="3">
					<Tabs.Content value="account">
						<Text size="2">Make changes to your account.</Text>
					</Tabs.Content>
					<Tabs.Content value="documents">
						<Text size="2">Access and update your documents</Text>
					</Tabs.Content>
					<Tabs.Content value="settings">
						<Text size="2">
							Edit your profile or update contact information.
						</Text>
					</Tabs.Content>
				</Box>
			</Tabs.Root>
			{/* Tab nav*/}
			<Separator />
			<Text size="2" as="div">
				{" "}
				Tab Nav
			</Text>
			<TabNav.Root>
				<TabNav.Link href="#">Account</TabNav.Link>
				<TabNav.Link href="#">Documents</TabNav.Link>
				<TabNav.Link href="#">Settings</TabNav.Link>
			</TabNav.Root>
		</Flex>
	);
}
