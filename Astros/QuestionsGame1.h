#pragma once
const int NUM_QUESTIONS = 10; //the number of questions

const char* const questions[NUM_QUESTIONS] = {  //questions
    "Largest planet in our solar system?",
    "Time it takes for Earth to orbit the Sun?",
    "What is a supernova?",
    "Which planet is the so called 'Red Planet'?",
    "What do you call the force that is keeping planets in orbit?",
    "Which is NOT a type of galaxy?",
    "Term for a system that consists of billions of stars?",
    "What's the main difference between a comet and an asteroid?",
    "Closest celestial body to Earth?",
    "What causes a solar eclipse?"
};

const char* const answers[NUM_QUESTIONS][4] = { //answers
    { "Earth", "Mars", "Jupiter", "Saturn" },
    { "24 hours", "365 days", "28 days", "12 years" },
    { "A star that is being formed.", "The explosion of a star at the end of its life cycle.", "A black hole swallowing a star.", "A comet passing by the Earth." },
    { "Venus", "Mars", "Jupiter", "Mercury" },
    { "Magnetism", "Gravity", "Friction", "Electricity" },
    { "Elliptical", "Spiral", "Irregular", "Circular" },
    { "Solar System", "Galaxy", "Universe", "Nebula" },
    { "Comets are made of ice and dust, while asteroids are made of rocks and metals.", "Asteroids are larger than comets.", "Comets can become planets, while asteroids cannot.", "Asteroids emit light, while comets do not." },
    { "The Moon", "The Sun", "Mars", "Venus" },
    { "The Moon passing between the Earth and the Sun", "The Earth passing between the Sun and the Moon", "The Sun moving behind the Earth", "Jupiter blocking the Sun's rays from reaching the Earth" }
};

const int rightAnswers[NUM_QUESTIONS] = { 2, 1, 1, 1, 1, 3, 1, 0, 0, 0 }; //the correct answers
