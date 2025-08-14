let car = document.querySelector('.car');
let items = document.querySelectorAll('.car .item1');
let prevButton = document.querySelector('.prev');
let nextButton = document.querySelector('.next');
let currentIndex = 1;
let allowShift = true;

let firstClone = items[0].cloneNode(true);
car.appendChild(firstClone);

let lastClone = items[items.length - 1].cloneNode(true);
car.insertBefore(lastClone, items[0]);

let allItems = document.querySelectorAll('.car .item1');

car.style.transform = `translateX(${(-currentIndex) * 100}%)`;

function shiftSlide(dir) {
    if (allowShift) {
        currentIndex += dir;
        car.style.transition = 'transform 0.5s ease';
        car.style.transform = `translateX(${-currentIndex * 100}%)`;
        allowShift = false;
    }
}

car.addEventListener('transitionend', () => {
    if (allItems[currentIndex].id === firstClone.id) {
        car.style.transition = 'none';
        currentIndex = 1;
        car.style.transform = `translateX(${(-currentIndex) * 100}%)`;
    }
    if (allItems[currentIndex].id === lastClone.id) {
        car.style.transition = 'none';
        currentIndex = allItems.length - 2;
        car.style.transform = `translateX(${(-currentIndex) * 100}%)`;
    }
    allowShift = true;
});

prevButton.addEventListener('click', () => {
    shiftSlide(-1);
});

nextButton.addEventListener('click', () => {
    shiftSlide(1);
});

