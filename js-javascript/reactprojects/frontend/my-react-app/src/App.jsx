import { BrowserRouter as Router, Routes, Route, NavLink } from "react-router-dom";
import "./App.css";
import Home from "./pages/home.jsx";
import About from "./pages/about.jsx";
import Contact from "./pages/contact.jsx";
import ManuCard from "./components/ManuCard/manuCard.jsx";

function App() {
  return (
    <Router>
      <nav className="flex items-center justify-between flex-wrap bg-gray-800 p-4 text-white">
        {/* Left: ManuCard or Logo */}
        <div className="md:hidden">
          <ManuCard
            title="Navigation"
            links={[
              { name: "Home", url: "/" },
              { name: "About", url: "/about" },
              { name: "Contact", url: "/contact" },
            ]}
          />
        </div>

        {/* Middle: Title */}
        <h1 className="text-white text-3xl md:text-4xl font-bold text-center w-full md:w-auto">
          My React App
        </h1>

        {/* Right: Navigation Links, hidden below 768px */}
        <ul className="hidden md:flex space-x-4">
          <li>
            <NavLink to="/" className="block py-2 px-4 hover:bg-gray-700 rounded">Home</NavLink>
          </li>
          <li>
            <NavLink to="/about" className="block py-2 px-4 hover:bg-gray-700 rounded">About</NavLink>
          </li>
          <li>
            <NavLink to="/contact" className="block py-2 px-4 hover:bg-gray-700 rounded">Contact</NavLink>
          </li>
        </ul>
      </nav>

      <Routes>
        <Route path="/" element={<Home />} />
        <Route path="/about" element={<About />} />
        <Route path="/contact" element={<Contact />} />
      </Routes>
    </Router>
  );
}

export default App;
