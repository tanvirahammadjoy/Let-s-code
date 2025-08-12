const carouselImages = document.querySelector('.carousel-images');
const images = document.querySelectorAll('.carousel-images img');
const prevButton = document.querySelector('.prev');
const nextButton = document.querySelector('.next');

let currentIndex = 1; // start at first real image
let allowShift = true;

// 1️⃣ Clone first and last images
const firstClone = images[0].cloneNode(true);
const lastClone = images[images.length - 1].cloneNode(true);

carouselImages.appendChild(firstClone);
carouselImages.insertBefore(lastClone, images[0]);

// Update width for cloned images
const allImages = document.querySelectorAll('.carousel-images img');

// Start in correct position
carouselImages.style.transform = `translateX(${-currentIndex * 100}%)`;

// Update carousel with smooth transition
function shiftSlide(dir) {
    if (allowShift) {
        carouselImages.style.transition = "transform 0.5s ease";
        currentIndex += dir;
        carouselImages.style.transform = `translateX(${-currentIndex * 100}%)`;
        allowShift = false;
    }
}

// Handle infinite loop effect
carouselImages.addEventListener('transitionend', () => {
    if (allImages[currentIndex].alt === firstClone.alt) {
        carouselImages.style.transition = "none";
        currentIndex = 1; // Jump to first real
        carouselImages.style.transform = `translateX(${-currentIndex * 100}%)`;
    }
    if (allImages[currentIndex].alt === lastClone.alt) {
        carouselImages.style.transition = "none";
        currentIndex = allImages.length - 2; // Jump to last real
        carouselImages.style.transform = `translateX(${-currentIndex * 100}%)`;
    }
    allowShift = true;
});

// Buttons
prevButton.addEventListener('click', () => shiftSlide(-1));
nextButton.addEventListener('click', () => shiftSlide(1));
