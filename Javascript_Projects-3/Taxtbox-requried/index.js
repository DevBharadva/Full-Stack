window.onload = function () {
    var form = document.getElementById('theForm');

    form.button.onclick = function () {
        for (var i = 0; i < form.elements.length; i++) {
            if (form.elements[i].value === '' && form.elements[i].hasAttribute('requried')) {
                alert('There are some required fields!');
                return false;
            }
        }
        form.onsubmit();
    };

};