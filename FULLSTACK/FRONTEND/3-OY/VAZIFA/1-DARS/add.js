// import {users} from "./data.js";

// // 1-MASALA: CREATE

// function createUser(newUser) {
//     if (
//         typeof newUser.firstName !== "string" ||
//         newUser.firstName.trim() === "" ||
//         typeof newUser.lastName !== "string" ||
//         newUser.lastName.trim() === ""
//     ) {
//         return "First name va last name bo'sh bo'lmasligi kerak!";
//     }

//     if (!Number.isInteger(newUser.age) || newUser.age < 18) {
//         return "Yosh kamida 18 bo'lishi kerak!";
//     }

//     let emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

//     if (
//         typeof newUser.email !== "string" ||
//         !emailRegex.test(newUser.email)
//     ) {
//         return "Email formati noto'g'ri!";
//     }

//     let emailExists = users.some(
//         item => item.email.toLowerCase() === newUser.email.trim().toLowerCase()
//     );

//     if (emailExists) {
//         return "Bu email allaqachon mavjud!";
//     }

//     let roles = ["admin", "moderator", "user"];

//     if (!roles.includes(newUser.role)) {
//         return "Noto'g'ri role!";
//     }

//     let balance = newUser.balance ?? 0;

//     if (
//         typeof balance !== "number" ||
//         !Number.isFinite(balance) ||
//         balance < 0
//     ) {
//         return "Balance manfiy bo'lmasligi kerak!";
//     }

//     let isActive = newUser.isActive ?? true;

//     if (typeof isActive !== "boolean") {
//         return "isActive boolean bo'lishi kerak!";
//     }

//     let newId = Math.max(...users.map(item => item.id)) + 1;

//     let user = {
//         id: newId,
//         firstName: newUser.firstName.trim(),
//         lastName: newUser.lastName.trim(),
//         age: newUser.age,
//         email: newUser.email.trim(),
//         role: newUser.role,
//         isActive: isActive,
//         balance: balance
//     };

//     users.push(user);

//     return user;
// }

// console.log(createUser({
//     firstName: "Bobur",
//     lastName: "Hasanov",
//     age: 25,
//     email: "bobur@gmail.com",
//     role: "user",
//     balance: 600
// }));


// // 2-MASALA: GET USERS

// function getUsers() {
//     users.forEach(user => {
//         console.log("ID:", user.id);
//         console.log("Name:", user.firstName + " " + user.lastName);
//         console.log("Email:", user.email);
//         console.log("Role:", user.role);
//         console.log("Status:", user.isActive ? "Active" : "Inactive");
//         console.log("Balance: $" + user.balance);
//         console.log("----------------------");
//     });

//     return users;
// }

// getUsers();


// // 3-MASALA: GET USER BY ID

// function getUserById(id) {
//     let user = users.find(item => item.id === id);

//     if (!user) {
//         return "User not found";
//     }

//     return user;
// }

// console.log(getUserById(3));
// console.log(getUserById(100));


// // 4-MASALA: GET USERS BY ROLE

// function getUsersByRole(role) {
//     let result = users.filter(item => item.role === role);

//     return result;
// }

// console.log(getUsersByRole("admin"));
// console.log(getUsersByRole("moderator"));


// // 5-MASALA: UPDATE USER

// function updateUser(id, updatedData) {
//     let user = users.find(item => item.id === id);

//     if (!user) {
//         return "User not found";
//     }

//     if ("id" in updatedData) {
//         return "ID ni o'zgartirish mumkin emas!";
//     }

//     if (
//         "firstName" in updatedData &&
//         (
//             typeof updatedData.firstName !== "string" ||
//             updatedData.firstName.trim() === ""
//         )
//     ) {
//         return "First name bo'sh bo'lmasligi kerak!";
//     }

//     if (
//         "lastName" in updatedData &&
//         (
//             typeof updatedData.lastName !== "string" ||
//             updatedData.lastName.trim() === ""
//         )
//     ) {
//         return "Last name bo'sh bo'lmasligi kerak!";
//     }

//     if (
//         "age" in updatedData &&
//         (!Number.isInteger(updatedData.age) || updatedData.age < 18)
//     ) {
//         return "Yosh kamida 18 bo'lishi kerak!";
//     }

//     if ("email" in updatedData) {
//         let emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

//         if (
//             typeof updatedData.email !== "string" ||
//             !emailRegex.test(updatedData.email.trim())
//         ) {
//             return "Email formati noto'g'ri!";
//         }

//         let emailExists = users.some(
//             item =>
//                 item.email.toLowerCase() === updatedData.email.trim().toLowerCase() &&
//                 item.id !== id
//         );

//         if (emailExists) {
//             return "Bu email boshqa foydalanuvchida mavjud!";
//         }
//     }

//     let roles = ["admin", "moderator", "user"];

//     if (
//         "role" in updatedData &&
//         !roles.includes(updatedData.role)
//     ) {
//         return "Noto'g'ri role!";
//     }

//     if (
//         "balance" in updatedData &&
//         (
//             typeof updatedData.balance !== "number" ||
//             !Number.isFinite(updatedData.balance) ||
//             updatedData.balance < 0
//         )
//     ) {
//         return "Balance manfiy bo'lmasligi kerak!";
//     }

//     if (
//         "isActive" in updatedData &&
//         typeof updatedData.isActive !== "boolean"
//     ) {
//         return "isActive boolean bo'lishi kerak!";
//     }

//     let allowedFields = [
//         "firstName",
//         "lastName",
//         "age",
//         "email",
//         "role",
//         "isActive",
//         "balance"
//     ];

//     let cleanData = {};

//     allowedFields.forEach(key => {
//         if (key in updatedData) {
//             cleanData[key] = updatedData[key];
//         }
//     });

//     if (cleanData.firstName) {
//         cleanData.firstName = cleanData.firstName.trim();
//     }

//     if (cleanData.lastName) {
//         cleanData.lastName = cleanData.lastName.trim();
//     }

//     if (cleanData.email) {
//         cleanData.email = cleanData.email.trim();
//     }

//     Object.assign(user, cleanData);

//     return users;
// }

// console.log(updateUser(2, {
//     age: 20,
//     balance: 800
// }));

// console.log(updateUser(4, {
//     firstName: "Madina",
//     email: "madina.new@gmail.com"
// }));

// console.log(updateUser(1, {
//     role: "superadmin"
// }));


// // 6-MASALA: DELETE USER

// function deleteUser(id) {
//     let index = users.findIndex(item => item.id === id);

//     if (index === -1) {
//         return "User not found";
//     }

//     if (users[index].role === "admin") {
//         return "Admin foydalanuvchisini o'chirish mumkin emas!";
//     }

//     users.splice(index, 1);

//     return users;
// }

// console.log(deleteUser(3));
// console.log(deleteUser(1));
// console.log(deleteUser(100));


// // YAKUNIY NATIJA

// console.log(users);
