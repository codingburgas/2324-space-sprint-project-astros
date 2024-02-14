#pragma once
const int NUM_QUESTIONS = 10;

const char* const questions[NUM_QUESTIONS] = {
    "Largest planet in our solar system?",
    "Time for Earth to orbit Sun?",
    "What is a supernova?",
    "Which planet is the 'Red Planet'?",
    "Force keeping planets in orbit?",
    "Which is NOT a type of galaxy?",
    "Term for system of billions of stars?",
    "Main difference between comet and asteroid?",
    "Closest celestial body to Earth?",
    "What causes a solar eclipse?"
};

const char* const answers[NUM_QUESTIONS][4] = {
    { "Earth", "Mars", "Jupiter", "Saturn" },
    { "24 hours", "365 days", "28 days", "12 years" },
    { "A star that is getting formed.", "The explosion of a star at the end of its life cycle.", "A black hole swallowing a star.", "A comet passing by the Earth." },
    { "Venus", "Mars", "Jupiter", "Mercury" },
    { "Magnetism", "Gravity", "Friction", "Electricity" },
    { "Elliptical", "Spiral", "Irregular", "Circular" },
    { "Solar System", "Galaxy", "Universe", "Nebula" },
    { "Comets are made of ice and dust, while asteroids are made of rocks and metals.", "Asteroids are larger than comets.", "Comets can become planets, while asteroids cannot.", "Asteroids emit light, while comets do not." },
    { "The Moon", "The Sun", "Mars", "Venus" },
    { "The Moon passing between the Earth and the Sun", "The Earth passing between the Sun and the Moon", "The Sun moving behind the Earth", "Jupiter blocking the Sun's rays from reaching the Earth" }
};

const int rightAnswers[NUM_QUESTIONS] = { 2, 1, 1, 1, 1, 3, 1, 0, 0, 0 };