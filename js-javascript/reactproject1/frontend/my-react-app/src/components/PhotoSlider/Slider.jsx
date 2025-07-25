// lets make an image slider component
import React, { useState } from 'react';
import './Slider.css';

const Slider = ({ images }) => {
    const [currentImageIndex, setCurrentImageIndex] = useState(0);

    const handleNext = () => {
        setCurrentImageIndex((prevIndex) => (prevIndex + 1) % images.length);
    };

    const handlePrev = () => {
        setCurrentImageIndex((prevIndex) => (prevIndex - 1 + images.length) % images.length);
    };  

    return (
        <div className="slider-container">
            <button className="slider-button prev" onClick={handlePrev}>❮</button>
            <img src={images[currentImageIndex]} alt={`Slide ${currentImageIndex + 1}`} className="slider-image" />
            <button className="slider-button next" onClick={handleNext}>❯</button>
        </div>
    )
};

export default Slider;