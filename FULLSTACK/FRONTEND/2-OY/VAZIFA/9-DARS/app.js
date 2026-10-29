// 1
function isPrime(num) {
  if (num <= 1) return false;
  for (let i = 2; i <= Math.sqrt(num); i++) {
    if (num % i === 0) return false;
  }
  return true;
}

function getPrimeNumbers(numbers) {
  return numbers.filter(isPrime);
}

console.log(getPrimeNumbers([2, 4, 5, 9, 11]));

// 2
function getPassedStudents(students) {
  return students.filter((student) => student.score >= 60);
}

const studentsList = [
  { id: 1, name: "Ali", score: 55 },
  { id: 2, name: "Vali", score: 60 },
  { id: 3, name: "Zarina", score: 97 },
  { id: 4, name: "Olim", score: 45 },
];

console.log(getPassedStudents(studentsList));

// 3
function multiplyNumbers(numbers) {
  return numbers.reduce((total, num) => total * num, 1);
}

console.log(multiplyNumbers([2, 3, 4]));

// 4
function getLowStockProducts(products) {
  return products.filter((product) => product.stock < 10);
}

const productsList = [
  { id: 1, name: "Sichqoncha", price: 150000, stock: 5 },
  { id: 2, name: "Klaviatura", price: 300000, stock: 10 },
  { id: 3, name: "Monitor", price: 1200000, stock: 3 },
];

console.log(getLowStockProducts(productsList));

// 5
function findProductById(products, id) {
  return products.find((product) => product.id === id);
}

const productsForFind = [
  { id: 1, name: "Mouse", price: 150000 },
  { id: 3, name: "Keyboard", price: 300000 },
  { id: 5, name: "Monitor", price: 1200000 },
];

console.log(findProductById(productsForFind, 3));
console.log(findProductById(productsForFind, 10));

// 6
function getTopStudent(students) {
  return students.reduce((maxStudent, current) => {
    return current.score > maxStudent.score ? current : maxStudent;
  });
}

const studentsGroup = [
  { id: 1, name: "Ali", score: 75 },
  { id: 2, name: "Zarina", score: 97 },
  { id: 3, name: "Bobur", score: 84 },
];

console.log(getTopStudent(studentsGroup));

// 7
function addStudent(students, newStudent) {
  students.push(newStudent);
  return students;
}

let existingStudents = [
  { id: 1, name: "Ali", score: 75 },
  { id: 2, name: "Vali", score: 85 },
];

let newStudentObj = { id: 9, name: "Kamola", score: 81 };
console.log(addStudent(existingStudents, newStudentObj));

// 8
function getExpensiveProducts(products) {
  return products.filter((product) => product.price > 500000);
}

const allProducts = [
  { id: 1, name: "Naushnik", price: 250000 },
  { id: 2, name: "Telefon", price: 500000 },
  { id: 3, name: "Noutbuk", price: 6500000 },
  { id: 4, name: "Monitor", price: 1800000 },
];

console.log(getExpensiveProducts(allProducts));

// 9
function increaseScores(students) {
  return students.map((student) => ({ ...student, score: student.score + 10 }));
}

const originalStudents = [
  { id: 1, name: "Ali", score: 75 },
  { id: 2, name: "Vali", score: 45 },
];

const updatedStudents = increaseScores(originalStudents);
console.log("Yangi:", updatedStudents);
console.log("Asl ro'yxat o'zgarmagan:", originalStudents);

// 10
function calculateTotalInventoryValue(products) {
  return products.reduce(
    (total, product) => total + product.price * product.stock,
    0,
  );
}

const inventory = [
  { id: 1, name: "Klaviatura", price: 200000, stock: 4 },
  { id: 2, name: "Sichqoncha", price: 100000, stock: 5 },
  { id: 3, name: "Monitor", price: 1000000, stock: 2 },
];

console.log(calculateTotalInventoryValue(inventory));
