/*                  Hierarquia 

1) FilterableProductTable
1.1) SearchBar
1.2) ProductTable
1.2.1) ProductCategoryRow
1.2.2) ProductRow 
*/

import { useState } from "react";

function FilterableProductTable({ products }) {
	const [filterText, setFilterText] = useState("");
	const [inStockOnly, setInStockOnly] = useState(false);

	return (
		<div>
			<SearchBar
				filterText={filterText}
				inStockOnly={inStockOnly}
				onFilterTextChange={setFilterText}
				onInStockOnlyChange={setInStockOnly}
			/>
			<ProductTable
				products={products}
				filterText={filterText}
				inStockOnly={inStockOnly}
			/>
		</div>
	);
}

function ProductCategoryRow({ category }) {
	return (
		<tr>
			<th colSpan={2}>{category}</th>
		</tr>
	);
}

function ProductRow({ product }) {
	const name = product.stocked ? (
		product.name
	) : (
		<span style={{ color: "red" }}>{product.name}</span>
	);

	const price = product.stocked ? (
		product.price
	) : (
		<span style={{ color: "red" }}>{product.price}</span>
	);
	return (
		<tr>
			<td>{name}</td>
			<td>{price}</td>
		</tr>
	);
}

function ProductTable({ products }) {
	const rows = [];
	let lastCategory = null;

	products.forEach((product) => {
		if (product.category !== lastCategory) {
			rows.push(
				<ProductCategoryRow
					category={product.category}
					key={product.category}
				/>
			);
		}
		rows.push(<ProductRow product={product} key={product.name} />);
		lastCategory = product.category;
	});

	return (
		<table>
			<thead>
				<tr>
					<th>Name</th>
					<th>Price</th>
				</tr>
			</thead>
			<tbody>{rows}</tbody>
		</table>
	);
}

function SearchBar({
	filterText,
	inStockOnly,
	onFilterTextChange,
	onInStockOnlyChange,
}) {
	return (
		<form>
			<input
				type="text"
				name="inp-search"
				id="inp-search"
				value={filterText}
				placeholder="Search..."
				onChange={(evt) => onFilterTextChange(evt.target.value)}
			/>
			<label
				htmlFor="inp-search"
				style={{ display: "flex", paddingTop: "10px" }}
			>
				<input
					type="checkbox"
					name="inp-check"
					checked={inStockOnly}
					onChange={(evt) => onInStockOnlyChange(evt.target.value)}
					id="inp-check"
				/>{" "}
				Only show products in stock
			</label>
		</form>
	);
}

const PRODUCTS = [
	{
		category: "Fruits",
		price: "$1",
		stocked: true,
		name: "Apple",
	},
	{
		category: "Fruits",
		price: "$1",
		stocked: true,
		name: "Dragonfruit",
	},
	{
		category: "Fruits",
		price: "$2",
		stocked: false,
		name: "Passionfruit",
	},
	{
		category: "Vegetables",
		price: "$2",
		stocked: true,
		name: "Spinach",
	},
	{
		category: "Vegetables",
		price: "$4",
		stocked: false,
		name: "Pumpkin",
	},
	{
		category: "Vegetables",
		price: "$1",
		stocked: true,
		name: "Peas",
	},
];

export default function Products() {
	return (
		<div>
			<fieldset>
				<FilterableProductTable products={PRODUCTS} />
			</fieldset>
		</div>
	);
}
