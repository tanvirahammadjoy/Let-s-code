// video card component
import React from "react";
import "./VideoCard.css";

// VideoCard component definition
// This component displays a video card with a title, description, and thumbnail image
// Props: title (string), description (string), thumbnail (string URL)
// Usage: <VideoCard title="Video Title" description="Video Description" thumbnail="thumbnail_url.jpg" />
// Example: <VideoCard title="My Video" description="This is a video description." thumbnail="https://example.com/thumbnail.jpg" />
// The component uses functional components and CSS for styling
// Ensure to import the CSS file for styling the video card
// The component can be used in other parts of the application to display video information
// The thumbnail image should be a valid URL pointing to the image resource
// The component can be customized further by adding more props or styles as needed
// This component can be reused in different parts of the application where video information needs to be displayed
// Make sure to handle any potential errors with image loading or missing props
// The component can be extended to include additional features like play buttons or video duration
// Ensure to test the component in different scenarios to verify its functionality and appearance
// The component is designed to be simple and reusable, making it easy to integrate into various parts
// of the application without requiring significant changes to the codebase
// The component can be imported and used in other components or pages as needed
// Example usage in a parent component: <VideoCard title="Sample Video" description="This is a sample video." thumbnail="https://example.com/sample-thumbnail.jpg" />

const VideoCard = ({ title, description, thumbnail }) => {
  // Render the video card with title, description, and thumbnail
  return (
    <>
      <div className="video-card">
        <img src={thumbnail} alt={title} className="video-thumbnail" />
        <h3 className="video-title">{title}</h3>
        <p className="video-description">{description}</p>
        {/* Button to watch the video, can be linked to a video player or another page */}
        <button className="watch-button">Watch Video</button>
        {/* Button to like the video */}
        <button className="like-button">Like</button>
        
      </div>
      {/* <style jsx>{`
            .video-card {
            border: 1px solid #ccc;
            border-radius: 8px;
            padding: 16px;
            text-align: center;
            max-width: 300px;
            margin: 16px auto;
            }
            .video-thumbnail {
            width: 100%;
            height: auto;
            border-radius: 4px;
            }
            .video-title {
            font-size: 1.2em;
            margin: 12px 0 8px;
            }
            .video-description {
            font-size: 0.9em;
            color: #555;
            }
        `}</style> */}
    </>
  );
};

export default VideoCard;
