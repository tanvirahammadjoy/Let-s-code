import React, { useState, useEffect } from 'react';
import './Slider.css';

const Slider = ({ images, interval = 3000 }) => {
    const [currentImageIndex, setCurrentImageIndex] = useState(0);

    // Automatically slide
    useEffect(() => {
        const timer = setInterval(() => {
            setCurrentImageIndex((prevIndex) => (prevIndex + 1) % images.length);
        }, interval);

        // Clear interval on unmount or when image changes manually
        return () => clearInterval(timer);
    }, [currentImageIndex, images.length, interval]);

    // Manual navigation
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
    );
};

export default Slider;
