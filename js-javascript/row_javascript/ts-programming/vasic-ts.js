'use strict';
// let's write some basic TypeScript code
// to demonstrate the use of types, interfaces, and classes in TypeScript
// A simple class to manage users
class UserService {
    constructor() {
        this.users = [];
    }
    addUser(user) {
        this.users.push(user);
    }
    getUserById(id) {
        return this.users.find((user) => user.id === id);
    }
    getAllUsers() {
        return this.users;
    }
}
// Example usage
const userService = new UserService();
userService.addUser({ id: 1, name: 'Alice', email: 'alice@example.com' });
userService.addUser({ id: 2, name: 'Bob', email: 'bob@example.com' });
// Retrieve and log a user by ID
const user = userService.getUserById(1);
if (user) {
    console.log(
        `User ID: ${user.id}, Name: ${user.name}, Email: ${user.email}`
    );
}
// log all users
console.log('All Users:', userService.getAllUsers());
// This code defines a User interface, a UserService class to manage users,
// and demonstrates how to add and retrieve users using the service.
// It showcases the basic features of TypeScript such as type annotations and interfaces.
// This is a simple example to get started with TypeScript programming.
// You can expand this further by adding more features like updating or deleting users,
// or integrating with a database or API for persistent storage.
// Feel free to modify and enhance this code as per your requirements.
// Happy coding with TypeScript!
// Note: Make sure to have TypeScript installed and configured in your environment to run this code.
// You can compile this TypeScript code to JavaScript using the TypeScript compiler (tsc).
// Run `tsc vasic-ts.ts` to compile it, and then run the generated JavaScript file using Node.js or in a browser environment.
// This code is a basic starting point for TypeScript programming and can be used as a foundation
// for building more complex applications with TypeScript.
// Remember to explore TypeScript's advanced features like generics, enums, and decorators
// as you become more comfortable with the language.
// You can also look into TypeScript's configuration options to tailor the compilation process to your needs.
// Happy learning and coding with TypeScript!
