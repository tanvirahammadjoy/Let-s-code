let dataBox = document.getElementsByTagName("h1")[0];
let incrimantBtn = document.getElementById("increase");
let decreaseBtn = document.getElementById("decrease");
let resetBtn = document.getElementById("reset");
let inputNum = document.getElementById("input");
let submitBtn = document.getElementById("inputBtn");
let startBtn = document.getElementById("start");
let stopBtn = document.getElementById("stop");

let val = 0;

function increaseFunc() {
	val++;
	return val;
}

function decreaseFunc() {
	val--;
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
			dataBox.textContent = val;
			if (val <= 9) {
				dataBox.style.color = "green";
			} else if (val > 8 && val < 10) {
				dataBox.style.color = "blue";
			} else if (val === 10) {
				dataBox.style.color = "red";
			}
		} else {
			alert("Please enter a valid positive number or you can not exceed 10.");
		}
		inputNum.value = ""; // Clear the input field
	}
});

incrimantBtn.addEventListener("click", function () {
	// if ((val) <= 9) {
	// 	dataBox.style.color = "green";
	// }
	// if ((val) > 8) {
	// 	dataBox.style.color = "blue";
	// }
	// if (val !== 10) {
	// 	dataBox.innerText = increaseFunc();
	// }
	if (val < 10) {
		dataBox.innerText = increaseFunc();
		if (val <= 9) {
			dataBox.style.color = "green";
		} else if (val > 8 && val < 10) {
			dataBox.style.color = "blue";
		} else if (val === 10) {
			dataBox.style.color = "red";
		}
	} else {
		alert("You can not increase more than 10.");
	}
});

decreaseBtn.addEventListener("click", function () {
	// if (val !== 0) {
	// 	dataBox.textContent = decreaseFunc();
	// }
	// if (val <= 9) {
	// 	dataBox.style.color = "green";
	// }
	// if (val <= 0) {
	// 	dataBox.style.color = "black";
	// }
	if (val > 0) {
		dataBox.innerText = decreaseFunc();
		if (val <= 0) {
			dataBox.style.color = "black";
		} else if (val < 10) {
			dataBox.style.color = "green";
		}
	} else {
		alert("You can not decrease below 0.");
	}
});

let interval; // Declare interval variable outside the event listener

startBtn.addEventListener("click", function () {
	if (val < 10) {
		interval = setInterval(function () {
			if (val < 10) {
				dataBox.textContent = increaseFunc();
				if (val <= 9) {
					dataBox.style.color = "green";
				} else if (val > 8 && val < 10) {
					dataBox.style.color = "blue";
				} else if (val === 10) {
					dataBox.style.color = "red";
				}
			} else {
				clearInterval(interval);
			}
		}, 1000);
	} else {
		alert("You can not increase more than 10.");
	}
});

stopBtn.addEventListener("click", function () {
	clearInterval(interval);
});

resetBtn.addEventListener("click", function () {
	dataBox.style.color = "black";
	dataBox.textContent = 0;
	val = 0;
});
