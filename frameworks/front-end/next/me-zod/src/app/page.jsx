import { z } from "zod";
import Form from "./form/form";
import LearningZod from "./zod/stringZod/learningZod";
import MsgZod from "./zod/stringZod/msgZod";

/*
  schema(string objeto) === qualquer tipo de dado.

  const mySchema = z.string();  


  mySche
*/

export default function Page() {
	const mySchema = z.string();

	// console.log(mySchema.parse("tuna"));

	return (
		<div id="container-principal">
			<Form />;{/* <LearningZod /> */}
			{/* <MsgZod /> */}
		</div>
	);
}
