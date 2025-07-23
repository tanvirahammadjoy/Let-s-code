import React from "react";
// import { useState } from 'react';
import "./home.css";
// import reactLogo from './assets/react.svg';
// import viteLogo from '/vite.svg';
import VideoCard from "../components/Video-card/Video-card";
// import Popupcard from "../components/Popup-card/Popup-card";

function Home() {
  // const [count, setCount] = useState(0);
  // Function to handle the close event of the popup
  //   const handlePopupClose = () => {
  //     // Logic to handle popup close, e.g., update state or perform an action
  //     // For demonstration, we can log a message to the console
  //     // This can be replaced with actual logic to close the popup
  //     // For example, if using state to control visibility, you can set it to false
  //     // setPopupVisible(false);
  //     // For now, we will just log a message
  //     // This can be replaced with actual logic to close the popup
  //     // For example, if using state to control visibility, you can set it to false
  //     // setPopupVisible(false);

  //     // write logic to close the popup
  //     console.log("Popup closed");
  //   };
  return (
    <>
      <div className="home">
        <div>
          <h1>Home Page</h1>
        </div>
        <div className="video-list">
          <VideoCard
            title="Sample Video"
            description="This is a sample video."
            thumbnail="https://images.unsplash.com/photo-1682687220923-c58b9a4592ae?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.1.0&ixid=M3wxMjA3fDF8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
          />
          <VideoCard
            title="Sample Video"
            description="This is a sample video."
            thumbnail="https://images.unsplash.com/photo-1752867494754-f2f0accbc7d9?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
          />
          <VideoCard
            title="Sample Video"
            description="This is a sample video."
            thumbnail="https://images.unsplash.com/photo-1752867494500-9ea9322f58c9?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
          />
          <VideoCard
            title="Sample Video"
            description="This is a sample video."
            thumbnail="https://images.unsplash.com/photo-1752774713655-10e8fd7c50df?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
          />
          {/* <Popupcard
            title="Sample Popup"
            description="This is a sample popup description."
            onClose={() => {
              handlePopupClose();
            }}
          /> */}
        </div>
      </div>
      {/* styling for the home page */}
      {/* <style>{`
        .home {
          padding: 16px;
          background-color: #f9f9f9;
          text-align: center;
          font-family: Arial, sans-serif;
          margin: 0 auto;
          max-width: 1200px;
          box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
          border-radius: 8px;
          overflow: hidden;
          display: flex;
          flex-direction: column;
          align-items: center;
        }
        .video-list {
          display: flex;
          flex-wrap: wrap;
          justify-content: center;
          gap: 16px;
        }
        h1 {
          color: #333;
          font-size: 2em;
          margin-bottom: 16px;
        }
      `}</style> */}
    </>
  );
}

export default Home;
