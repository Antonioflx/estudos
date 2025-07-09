import { Table } from "@radix-ui/themes";

export default function LearningTable() {
	return (
		<Table.Root variant="surface" size="3">
			<Table.Header>
				<Table.Row>
					<Table.ColumnHeaderCell>
						Nome Completo
					</Table.ColumnHeaderCell>
					<Table.ColumnHeaderCell>Email</Table.ColumnHeaderCell>
					<Table.ColumnHeaderCell>Grupo</Table.ColumnHeaderCell>
				</Table.Row>
			</Table.Header>
			<Table.Body>
				<Table.Row>
					<Table.RowHeaderCell>Antonio Felix</Table.RowHeaderCell>
					<Table.Cell>teste@gmail.com</Table.Cell>
					<Table.Cell>Usuário</Table.Cell>
				</Table.Row>
				<Table.Row>
					<Table.RowHeaderCell>Dante Alves</Table.RowHeaderCell>
					<Table.Cell>teste2@gmail.com</Table.Cell>
					<Table.Cell>Admin</Table.Cell>
				</Table.Row>
				<Table.Row>
					<Table.RowHeaderCell>Iloir Neto</Table.RowHeaderCell>
					<Table.Cell>teste3@gmail.com</Table.Cell>
					<Table.Cell>Gestor</Table.Cell>
				</Table.Row>
			</Table.Body>
		</Table.Root>
	);
}
