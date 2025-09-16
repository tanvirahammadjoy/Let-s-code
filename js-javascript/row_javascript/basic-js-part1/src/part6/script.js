let dataBox = document.getElementsByTagName("h1")[0];
let incrimantBtn = document.getElementById("increase");
let decreaseBtn = document.getElementById("decrease");
let resetBtn = document.getElementById("reset");
let inputNum = document.getElementById("input");
let submitBtn = document.getElementById("inputBtn");
let startBtn = document.getElementById("start");
let stopBtn = document.getElementById("stop");
let message1 = document.getElementById("message1");
let message2 = document.getElementById("message2");
// Initialize the counter value
let val = 0;

// random color function with syncing the background color contrast
function getRandomColor() {
	const letters = "0123456789ABCDEF";
	let color = "#";
	for (let i = 0; i < 6; i++) {
		color += letters[Math.floor(Math.random() * 16)];
	}
	return color;
}

// local storage setting
if (localStorage.getItem("counterValue")) {
	val = parseInt(localStorage.getItem("counterValue"));
	dataBox.textContent = val;
	if (val > 0) {
		dataBox.style.color = "green";
	}
	if (val === 10) {
		dataBox.style.color = "red";
	}
	if (val === -10) {
		decreaseBtn.disabled = true; // Disable the button if value is -10
	}
	if (val === 10) {
		incrimantBtn.disabled = true;
	}
}

// adding step size
// increase and decrease functions

function increaseFunc(step) {
	val += step || 1; // Default step size is 1 if not provided
	return val;
}

function decreaseFunc(step) {
	val -= step || 1; // Default step size is 1 if not provided
	return val;
}

if (val === 0) {
	dataBox.style.color = "black";
}

submitBtn.addEventListener("click", function () {
	if (inputNum.value !== "" && inputNum.value !== null) {
		let inputValue = parseInt(inputNum.value);
		if (!isNaN(inputValue) && inputValue > 0 && inputValue + val <= 10) {
			val += inputValue;
			localStorage.setItem("counterValue", val);
			dataBox.textContent = val;
			if (val <= 9) {
				dataBox.style.color = getRandomColor();
				// Sync background color contrast
				document.body.style.backgroundColor = getRandomColor();
			} else if (val > 8 && val < 10) {
				dataBox.style.color = getRandomColor();
				// Sync background color contrast
				document.body.style.backgroundColor = getRandomColor();
			} else if (val === 10) {
				dataBox.style.color = getRandomColor();
				// Sync background color contrast
				document.body.style.backgroundColor = getRandomColor();
			}
		} else {
			message1.style.display = "block";
			setTimeout(() => {
				message1.style.display = "none"; // Hide message after 2 seconds
			}, 2000);
		}
		inputNum.value = ""; // Clear the input field
	}
});

incrimantBtn.addEventListener("click", function () {
	// disable button if equal 10
	if (val === 10) {
		incrimantBtn.disabled = true;
		message1.style.display = "block"; // Show message if trying to exceed 10
		setTimeout(() => {
			message1.style.display = "none"; // Hide message after 2 seconds
		}, 2000);
	}
	if (val < 10) {
		dataBox.innerText = increaseFunc(
			inputNum.value ? parseInt(inputNum.value) : 1
		);
		localStorage.setItem("counterValue", val);
		if (val <= 9) {
			dataBox.style.color = getRandomColor();
			dataBox.style.backgroundColor = getRandomColor();
			// Sync background color contrast
			document.body.style.backgroundColor = getRandomColor();
		} else if (val > 8 && val < 10) {
			dataBox.style.color = getRandomColor();
			dataBox.style.backgroundColor = getRandomColor();
			// Sync background color contrast
			document.body.style.backgroundColor = getRandomColor();
		} else if (val === 10) {
			dataBox.style.color = getRandomColor();
			dataBox.style.backgroundColor = getRandomColor();
			// Sync background color contrast
			document.body.style.backgroundColor = getRandomColor();
		}
	}
});

// want take the value until -10
decreaseBtn.addEventListener("click", function () {
	if (val <= -10) {
		decreaseBtn.disabled = true; // Disable the button if value is 0
		message2.style.display = "block"; // Show message if trying to go below -10
		setTimeout(() => {
			message2.style.display = "none"; // Hide message after 2 seconds
		}, 2000);
	} else {
		dataBox.innerText = decreaseFunc(
			inputNum.value ? parseInt(inputNum.value) : 1
		);
		localStorage.setItem("counterValue", val);
		if (val <= 0) {
			dataBox.style.color = getRandomColor();
			// Sync background color contrast
			document.body.style.backgroundColor = getRandomColor();
		} else if (val < 10) {
			dataBox.style.color = getRandomColor();
			// Sync background color contrast
			document.body.style.backgroundColor = getRandomColor();
		}
	}
});

let interval; // Declare interval variable outside the event listener

startBtn.addEventListener("click", function () {
	// Clear any existing interval before starting a new one
	clearInterval(interval);
	// Check if the value is less than 10 before starting the interval
	if (val === 10) {
		incrimantBtn.disabled = true;
		startBtn.disabled = true;
		message1.style.display = "block"; // Show message if trying to exceed 10
		setTimeout(() => {
			message1.style.display = "none"; // Hide message after 2 seconds
		}, 2000);
	}
	if (val < 10) {
		interval = setInterval(function () {
			if (val < 10) {
				dataBox.textContent = increaseFunc();
				localStorage.setItem("counterValue", val);
				if (val <= 9) {
					dataBox.style.color = getRandomColor();
					// Sync background color contrast
					document.body.style.backgroundColor = getRandomColor();
				} else if (val > 8 && val < 10) {
					dataBox.style.color = getRandomColor();
					// Sync background color contrast
					document.body.style.backgroundColor = getRandomColor();
				} else if (val === 10) {
					dataBox.style.color = getRandomColor();
					// Sync background color contrast
					document.body.style.backgroundColor = getRandomColor();
				}
			} else {
				clearInterval(interval);
			}
		}, 1000);
	}
});

stopBtn.addEventListener("click", function () {
	clearInterval(interval);
});

resetBtn.addEventListener("click", function () {
	dataBox.style.color = "black";
	dataBox.textContent = 0;
	localStorage.removeItem("counterValue");
	val = 0;
	incrimantBtn.disabled = false; // Re-enable the increment button
	decreaseBtn.disabled = false; // Re-enable the decrement button
	startBtn.disabled = false; // Re-enable the start button
	stopBtn.disabled = false; // Re-enable the stop button
	resetBtn.disabled = false; // Re-enable the reset button
});
