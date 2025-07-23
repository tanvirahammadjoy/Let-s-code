// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import "./App.css";
import Home from "./pages/home.jsx";
import About from "./pages/about.jsx";
import Contact from "./pages/contact.jsx";
import { BrowserRouter as Router, Routes, Route, NavLink } from 'react-router-dom'

function App() {
  // const [count, setCount] = useState(0)

  return (
    <Router className="Router">

      <nav className="Nav">
        <ul>
          <li><NavLink to="/" className="Home"><a href="/">Home</a></NavLink></li>
          <li><NavLink to="/about" className="About"><a href="/about">About</a></NavLink></li>
          <li><NavLink to="/contact" className="Contact"><a href="/contact">Contact</a></NavLink></li>
        </ul>
      </nav>

      <Routes className="Routes">
        <Route className="Home" path="/" element={<Home />} />
        <Route className="About" path="/about" element={<About />} />
        <Route className="Contact" path="/contact" element={<Contact />} />
      </Routes>
    </Router>
  );
}

export default App;
