import { SegmentedControl } from "@radix-ui/themes";

export default function LearningSegmentControl() {
	return (
		<SegmentedControl.Root defaultValue="inbox">
			<SegmentedControl.Item value="inbox">
				Inbox
			</SegmentedControl.Item>
			<SegmentedControl.Item value="drafts">
				Drafts
			</SegmentedControl.Item>
			<SegmentedControl.Item value="send">Send</SegmentedControl.Item>
		</SegmentedControl.Root>
	);
}
