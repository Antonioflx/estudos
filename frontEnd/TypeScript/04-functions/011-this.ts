// uso do this em function

const user = {
	id: 123,

	admin: false,
	// becomeAdmin: function() {
	//     this.admin = true;
	// }, pode ser assim
	// ou
	becomeAdmin() {
		this.admin = true;
	},
};

interface User {
	id: number | string;
	admin: boolean;
}

interface DB {
	filterUsers(filter: (this: User) => boolean): User[];
}

function getDB(): DB {
	const users: User[] = [
		{ id: 1, admin: true },
		{ id: 2, admin: false },
	];

	return {
		filterUsers(filter) {
			return users.filter((user) => filter.call(user));
		},
	};
}

const db = getDB();

const admins = db.filterUsers(function (this: User) {
	return this.admin;
});

console.log(admins);
