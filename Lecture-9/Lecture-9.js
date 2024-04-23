/* Javascript Date() object */

/* 1 Jan 1970 */

/* Javascript Date() month */

/* 0 to 11 */

let now = new Date();

// console.log(now);

// console.log(typeof now);

let stringDate = now.toString();

// console.log(stringDate);

// console.log(now.toLocaleDateString());

// console.log(now.toLocaleString());

// console.log(now.toISOString());

// console.log(now.getDate());

// console.log(now.getMonth());

// console.log(now.getFullYear());

// console.log(now.getHours());

// console.log(now.getMinutes());

// console.log(now.getSeconds());

// console.log(now.getMilliseconds());

// console.log(Date.now());

// const moonlanding = new Date('june 19, 50 00:20:18');
// moonlanding.setMillisecounds(2000);

console.log(now.setFullYear(2024));

console.log(now.setDate(23));

console.log(now.setMonth(50));

console.log(now.setHours(5));

console.log(now.setMinutes(5));

// console.log(now.setSecounds(6000000));

console.log(now.getMilliseconds());

console.log(now.getSeconds());

console.log(now);

