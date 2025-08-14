let car = document.querySelector('.car');
let items = document.querySelectorAll('.car .item1');
let prevButton = document.querySelector('.prev');
let nextButton = document.querySelector('.next');
let currentIndex = 1;
let allowShift = true;

// Clone first and last items
let firstClone = items[0].cloneNode(true);
firstClone.id = 'first-clone';
car.appendChild(firstClone);

let lastClone = items[items.length - 1].cloneNode(true);
lastClone.id = 'last-clone';
car.insertBefore(lastClone, items[0]);

let allItems = document.querySelectorAll('.car .item1');

// Set initial position
car.style.transform = `translateX(${-currentIndex * 100}%)`;
updateClasses();

function shiftSlide(dir) {
    if (allowShift) {
        currentIndex += dir;
        car.style.transition = 'transform 0.5s ease';
        car.style.transform = `translateX(${-currentIndex * 100}%)`;
        allowShift = false;
    }
}

car.addEventListener('transitionend', () => {
    if (allItems[currentIndex].id === 'first-clone') {
        car.style.transition = 'none';
        currentIndex = 1;
        car.style.transform = `translateX(${-currentIndex * 100}%)`;
    }
    if (allItems[currentIndex].id === 'last-clone') {
        car.style.transition = 'none';
        currentIndex = allItems.length - 2;
        car.style.transform = `translateX(${-currentIndex * 100}%)`;
    }
    updateClasses();
    allowShift = true;
});

prevButton.addEventListener('click', () => shiftSlide(-1));
nextButton.addEventListener('click', () => shiftSlide(1));

function updateClasses() {
    allItems.forEach((item, index) => {
        item.classList.remove('active', 'side');
        if (index === currentIndex) {
            item.classList.add('active');
        } else if (index === currentIndex - 1 || index === currentIndex + 1) {
            item.classList.add('side');
        }
    });
}
