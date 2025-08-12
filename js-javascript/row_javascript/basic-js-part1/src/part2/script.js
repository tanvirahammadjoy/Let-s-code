let carouselItems = document.querySelectorAll('.carousel-item');
console.log(carouselItems);
console.log(typeof carouselItems);

let currentIndex = 0;

function showNextItem() {
    carouselItems[currentIndex].classList.remove('active');
    // console.log(carouselItems[currentIndex]);
    // console.log(typeof carouselItems[currentIndex]);

    currentIndex = (currentIndex + 1) % carouselItems.length;
    // console.log(currentIndex);
    // console.log(carouselItems[currentIndex]);
    // console.log(typeof carouselItems[currentIndex]);

    carouselItems[currentIndex].classList.add('active');
    // console.log(carouselItems[currentIndex]);
    // console.log(typeof carouselItems[currentIndex]);
}

setInterval(showNextItem, 3000);
