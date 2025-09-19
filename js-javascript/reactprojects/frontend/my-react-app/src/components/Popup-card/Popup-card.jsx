// popup section
import React from "react";
import "./Popup-card.css";

const PopupCard = ({ title, description, onClose }) => {
    // Function to handle the close button click
    const handleClose = () => {
        onClose();
      };
  return (
    <>
      <div className="popup-card">
        <div className="popup-content">
          <h2 className="popup-title">{title}</h2>
          <p className="popup-description">{description}</p>
          <button className="popup-close" onClick={handleClose}>
            Close
          </button>
        </div>
      </div>
      <style>{`
            .popup-card {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background-color: rgba(0, 0, 0, 0.5);
            display: flex;
            justify-content: center;
            align-items: center;
            }
            .popup-content {
            background-color: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
            }
            .popup-title {
            margin-bottom: 10px;
            }
            .popup-description {
            margin-bottom: 20px;
            }
            .popup-close {
            background-color: #007bff;
            color: white;
            border: none;
            padding: 8px 16px;
            border-radius: 4px;
            cursor: pointer;
            }
            .popup-close:hover {
            background-color: #0056b3;
            }
        `}</style>
    </>
  );
};

export default PopupCard;
