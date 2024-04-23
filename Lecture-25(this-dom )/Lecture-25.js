/* This Keyword */

/* this in global scope */

// let user = this

// console.log(this);

/* this inner function */

// function greet() {
//     console.log(this);
// }
// greet();

/* this inside arrow functions */

// let greet = () => console.log(this);

// greet()

/* this inner object */

{
    // let profile = {
    //     firstName: "john",
    //     lastName: "roy",
    //     gender: "male",
    //     age: 24,
        
    //     greet() {
    //         console.log(this.firstName);
    //         console.log(this.lastName);
    //         console.log(this.age);

    //     }

    // }
    // profile.greet()
}

/* this inner object and inner function */

{
    // let user = {
    //     firstName: "dark",
    //     lastName: "mode",
    //     gender: "male",
    //     age: 45,
        
    //     greet() {
    //         console.log(this);
    //         console.log(this.firstName);

    //         function InnerFunc() {
    //             console.log(this);
    //             console.log(this.lastName);
    //         }

    //         InnerFunc()
    //     }
    // }
    // user.greet()
}
    
/* this inner object and inner arrow function */

{
    let profile = {
        name: "rudra",
        age: 20,
        address: "landon",
        
        man: function () {
            console.log(this);
            console.log(this.name);
            
            let input = () => {
                console.log(this);
                console.log(this.address);
            }
            input()
        }

    }
    profile.man()
}