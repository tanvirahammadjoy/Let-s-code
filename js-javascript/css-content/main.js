// Mobile Navigation Toggle
const mobileMenu = document.getElementById('mobile-menu')
const navMenu = document.querySelector('.nav-menu')

mobileMenu.addEventListener('click', () => {
	// Toggle the hamburger menu animation
	mobileMenu.classList.toggle('active')

	// Toggle the navigation menu visibility
	navMenu.classList.toggle('active')
})

// Close mobile menu when clicking on a nav link
const navLinks = document.querySelectorAll('.nav-link')

navLinks.forEach(link => {
	link.addEventListener('click', () => {
		mobileMenu.classList.remove('active')
		navMenu.classList.remove('active')
	})
})

// Close mobile menu when clicking outside
document.addEventListener('click', e => {
	if (!mobileMenu.contains(e.target) && !navMenu.contains(e.target)) {
		mobileMenu.classList.remove('active')
		navMenu.classList.remove('active')
	}
})

// Smooth scrolling for navigation links (fallback for older browsers)
navLinks.forEach(link => {
	link.addEventListener('click', e => {
		e.preventDefault()

		const targetId = link.getAttribute('href')
		const targetSection = document.querySelector(targetId)

		if (targetSection) {
			const offsetTop = targetSection.offsetTop - 70 // Account for fixed navbar height

			window.scrollTo({
				top: offsetTop,
				behavior: 'smooth',
			})
		}
	})
})

// Navbar background change on scroll
const navbar = document.querySelector('.navbar')

window.addEventListener('scroll', () => {
	if (window.scrollY > 50) {
		navbar.style.backgroundColor = 'rgba(30, 58, 138, 0.95)'
		navbar.style.backdropFilter = 'blur(10px)'
	} else {
		navbar.style.backgroundColor = '#1e3a8a'
		navbar.style.backdropFilter = 'none'
	}
})

// Add active state to current section in navigation
const sections = document.querySelectorAll('section[id]')

const highlightNavLink = () => {
	const scrollPosition = window.scrollY + 100

	sections.forEach(section => {
		const sectionTop = section.offsetTop
		const sectionHeight = section.offsetHeight
		const sectionId = section.getAttribute('id')
		const navLink = document.querySelector(`.nav-link[href="#${sectionId}"]`)

		if (
			scrollPosition >= sectionTop &&
			scrollPosition < sectionTop + sectionHeight
		) {
			navLinks.forEach(link => link.classList.remove('active'))
			if (navLink) {
				navLink.classList.add('active')
			}
		}
	})
}

window.addEventListener('scroll', highlightNavLink)

// Button interactions
const heroButton = document.querySelector('.hero-button')
const contactButton = document.querySelector('.contact-button')

heroButton.addEventListener('click', () => {
	document.querySelector('#services').scrollIntoView({
		behavior: 'smooth',
	})
})

contactButton.addEventListener('click', () => {
	alert('Contact form would open here!')
})

// Add loading animation
window.addEventListener('load', () => {
	document.body.style.opacity = '0'
	document.body.style.transition = 'opacity 0.3s ease'

	setTimeout(() => {
		document.body.style.opacity = '1'
	}, 100)
})

// Keyboard navigation support
document.addEventListener('keydown', e => {
	if (e.key === 'Escape') {
		mobileMenu.classList.remove('active')
		navMenu.classList.remove('active')
	}
})

// Touch gesture support for mobile menu
let touchStartX = 0
let touchEndX = 0

document.addEventListener('touchstart', e => {
	touchStartX = e.changedTouches[0].screenX
})

document.addEventListener('touchend', e => {
	touchEndX = e.changedTouches[0].screenX
	handleSwipe()
})

const handleSwipe = () => {
	if (touchEndX < touchStartX - 50) {
		// Swipe left - close menu if open
		mobileMenu.classList.remove('active')
		navMenu.classList.remove('active')
	}
	if (touchEndX > touchStartX + 50) {
		// Swipe right - open menu if closed (optional)
		// You can implement this if desired
	}
}
