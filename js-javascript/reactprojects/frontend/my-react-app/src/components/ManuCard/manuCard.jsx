import React from "react";
import "./manuCard.css"; // Optional for extra styles

const ManuCard = ({ title, links }) => {
  const [isCollapsed, setIsCollapsed] = React.useState(true);

  return (
    <>
      {/* Toggle Button */}
      <button
        className="fixed top-2 left-4 z-0 bg-gray-800 text-white px-3 py-2 rounded md:hidden"
        onClick={() => setIsCollapsed(!isCollapsed)}
      >
        {isCollapsed ? "☰" : "✖"}
      </button>

      {/* Slide-in Drawer */}
      <div
        className={`fixed top-0 left-0 h-full w-64 bg-gray-900 text-white z-40 transform transition-transform duration-300 ease-in-out ${
          isCollapsed ? "-translate-x-full" : "translate-x-0"
        } md:static md:transform-none md:block`}
      >
        <div className="p-4 border-b border-gray-700 flex justify-between items-center">
          <h2 className="text-lg font-semibold">{title}</h2>
          <button
            onClick={() => setIsCollapsed(true)}
            className="md:hidden text-white"
          >
            ✖
          </button>
        </div>
        <ul className="p-4 space-y-2">
          {links.map((link, index) => (
            <li key={index}>
              <a
                href={link.url}
                className="block px-3 py-2 rounded hover:bg-gray-700"
              >
                {link.name}
              </a>
            </li>
          ))}
        </ul>
      </div>
    </>
  );
};

export default ManuCard;
