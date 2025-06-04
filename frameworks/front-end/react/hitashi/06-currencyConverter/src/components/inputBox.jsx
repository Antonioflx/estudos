import React from "react";

// prettier-ignore
function InputBox({
	label,
	amount,
	onAmountChange,
	onCurrencyChange,
	currencyOptions = [],
	selectedCurrency = "usd",
	amountDisable = false,
	currencyDisabled = false,
	className = "",
}) {
	return (
		<div
			className={` bg-white p-3 rounded-lg text-sm flex ${className}`}
		>
			<div className="w-1-2">
				<label className="text-black/40 mb-2 inline-block">
					{label}
				</label>
				<input
					type="number"
					name=""
					id=""
					step={"0.01"}
					className="outline-none w-full bg-transparent py-1.5"
					placeholder="Amount"
					disabled={amountDisable}
					value={amount}
					onChange={
                        (evt) =>
						    onAmountChange && 
							onAmountChange(Number(evt.target.value))
					}
				/>
			</div>
			<div className="w-1/2 flex flex-wrap justify-end text-right">
				<p className="text-black/40 mb-2 w-full">Currency type</p>
				<select 
					name="" 
					id=""
					className="rounded-lg px-1 py-1 bg-gray-100 cursor-pointer outline-none"
					value={selectedCurrency}
					onChange={
						(evt) => 
							onCurrencyChange &&
							onCurrencyChange(evt.target.value)
					}
					disabled={currencyDisabled}
				>
			
				</select>
			</div>

		</div>
	);
}

export default InputBox;
