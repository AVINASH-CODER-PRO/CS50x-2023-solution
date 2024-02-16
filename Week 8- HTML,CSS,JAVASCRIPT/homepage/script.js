
for (let i = 0; i < 8; i++) {
    let button = document.querySelector(`.but${i}`);
    button.addEventListener('click', function() {
        button.style.backgroundColor = 'green';
    });
}
