import React, { useState } from "react";

const ImagePopupCard = () => {
  const [isOpen, setIsOpen] = useState(false);

  const image = {
    url: "https://source.unsplash.com/random/800x600",
    title: "Beautiful Landscape",
    description: "This is a stunning view of nature captured in golden hour.",
  };

  return (
    <div className="relative">
      {/* Gallery Card */}
      <div
        className="max-w-sm cursor-pointer rounded-xl overflow-hidden shadow-lg hover:shadow-2xl transition duration-300"
        onClick={() => setIsOpen(true)}
      >
        <img
          src={image.url}
          alt={image.title}
          className="w-full h-60 object-cover"
        />
        <div className="px-4 py-3 bg-white">
          <h2 className="text-xl font-semibold">{image.title}</h2>
        </div>
      </div>

      {/* Popup Modal */}
      {isOpen && (
        <div
          className="fixed inset-0 bg-black bg-opacity-60 flex items-center justify-center z-50"
          onClick={() => setIsOpen(false)}
        >
          <div
            className="bg-white rounded-xl overflow-hidden max-w-3xl w-full shadow-lg relative"
            onClick={(e) => e.stopPropagation()}
          >
            {/* Close Button */}
            <button
              className="absolute top-3 right-3 text-black text-2xl font-bold"
              onClick={() => setIsOpen(false)}
            >
              &times;
            </button>

            {/* Image and Text */}
            <img
              src={image.url}
              alt={image.title}
              className="w-full h-80 object-cover"
            />
            <div className="p-6">
              <h2 className="text-2xl font-semibold mb-2">{image.title}</h2>
              <p className="text-gray-700">{image.description}</p>
            </div>
          </div>
        </div>
      )}
    </div>
  );
};

export default ImagePopupCard;
