/* Jquery */


/* Defination / Syntax-1 */
// $(document).ready(function(){
//         $('').click(function(){
//             $('').hide()
//         })
//     })

/* Syntax-2 */

// +

// $(document).ready(function(){
//     alert("What is your Name?")
// })

// $(document).ready(function(){
//     console.log("Dev Bharadva")
//    var a = $('#test-1').html( )

//    console.log(a);
// })

// $(document).ready(function(){
//     $("#list").css("border", "2px solid black");
//     $("li:lt(2)").css("border", "2px solid red");
// })

/* mouse Events */


// $(document).ready(function(){
//     $('#test-1').dblclick(function(){
//         $('#test-1').css('background-color', "orange")
    
//         var a = $('#test-1').html();

//         console.log(a);
//     });
    
//     $('#test-1').click(function(){
//         $('#test-1').css('background-color', "white")

//     });
//     $('#test-1').contextmenu(function(){
//         $('#test-1').css('background-color', "blue")

//     });

//     $('#test-1').mouseenter(function(){
//         $('#test-1').css('background-color', "green")

//     });
//     $('#test-1').mouseleave(function(){
//         $('#test-1').css('background-color', "pink")

//     });

// })

/* keyboard events */

// $(document).ready(function(){
//     $('body').keypress(function(){
//         $(this).css('background-color', 'black');
//     });
// })

// $(document).ready(function(){
//     $('body').keydown(function(){
//         $(this).css('background-color', 'orange');
//     });
// })
// $(document).keyup(function(){
//     $('body').keypress(function(){
//         $(this).css('background-color', 'green');
//     });
// })


/* Form Events */

// focus()
// blur()
// change()
// select()
// submit()

// $(document).ready(function(){
//     $('#mail, #txt , #Skill').focus(function(){
//         $(this).css('background-color', 'gray');
//     });

//     $('#mail, #txt , #Skill').blur(function(){
//         $(this).css('background-color', '');
//     });

//      $('#Skill').change(function(){
//         $(this).css('background-color', 'gold');

//         var a = $(this).val();
//         $('#test').html(a)
//     });

//     $('#mail, #txt').select(function(){
//         $(this).css('background-color', 'Blue');
//     });

//     $('#form').submit(function(){
//         // $(this).css('background-color', 'Blue');

//         alert("Form Submitted");
//     });
// })

/* Window Events */

// $(document).ready(function(){
//     $('#event').scroll(function(){
//         console.log("you are Scrolling");
//     })

//     $(window).resize(function(){
//         console.log("you are Resizing Window Now!");
//     })

    

    
// })

/* Get Methods */

// text()
// html()
// attr()
// val()

$(document).ready(function(){
    var a = $('#event').attr('class')

    console.log(a);
})
