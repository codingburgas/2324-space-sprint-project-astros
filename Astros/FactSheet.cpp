#include <iostream>
#include <string>
#include "GlobalFunctions.h"
#include "FactSheet.h"

using namespace std;

int Sol = 0, Merc = 0, Ven = 0, Earth = 0, Mars = 0, Asteroid = 0, Jupi = 0, Sat = 0, Uran = 0, Nep = 0, Plu = 0;

void SolFact() {
	Sol++;
	
	string Fact[10] = {
		"The Sun is a star, a massive ball of glowing gas that provides light and heat to the solar system. \n"
		"It is located at the center of our solar system, with the planets orbiting around it.\n"
		"The Sun's diameter is about 109 times that of Earth.\n"
		"Its mass is approximately 330,000 times that of Earth.\n"
		"The Sun is composed mainly of hydrogen (about 75%) and helium (about 24%) by mass.\n",
		"Its core is incredibly hot, reaching temperatures of about 15 million degrees Celsius (27 million degrees Fahrenheit).\n"
		"The Sun generates energy through a process called nuclear fusion, where hydrogen atoms combine to form helium, releasing vast amounts of energy.\n"
		"This energy radiates outward from the core through several layers, ultimately reaching the surface and then into space as sunlight.\n"
		"The Sun's surface temperature is about 5,500 degrees Celsius (9,932 degrees Fahrenheit).\n"
		"Sunspots, cooler regions on the Sun's surface, are caused by magnetic activity and appear dark compared to the surrounding areas.\n",
		"Solar flares, sudden bursts of energy, can occur near sunspots and release large amounts of radiation into space.\n"
		"The Sun's magnetic field is constantly changing and can influence space weather throughout the solar system.\n"
		"Solar winds, streams of charged particles, flow outward from the Sun in all directions at speeds of about 1.6 million kilometers per hour (1 million miles per hour).\n"
		"These solar winds interact with Earth's magnetic field, producing phenomena such as auroras.\n"
		"The Sun's magnetic field goes through an 11-year cycle of activity, with periods of high and low sunspot numbers known as the solar cycle.\n",
		"During periods of high activity, the Sun's surface becomes more active, with increased sunspot and solar flare activity.\n"
		"Conversely, during periods of low activity, the Sun's surface is quieter, with fewer sunspots and solar flares.\n"
		"The Sun's energy output varies slightly over the course of its solar cycle, with the total solar irradiance changing by about 0.1%.\n"
		"The Sun is about 4.6 billion years old and is roughly halfway through its main sequence stage of life.\n"
		"It is expected to continue burning hydrogen in its core for another 5 billion years before undergoing significant changes.\n",
		"Eventually, the Sun will exhaust its hydrogen fuel and start burning helium, leading to its expansion into a red giant.\n"
		"As a red giant, the Sun will engulf the inner planets, including Earth, before eventually shedding its outer layers to form a planetary nebula.\n"
		"The core of the Sun will collapse to form a white dwarf, a dense and dim remnant of its former self.\n"
		"The Sun's gravity holds the solar system together, keeping the planets in their orbits.\n"
		"Its gravitational pull is strongest at its surface, where the acceleration due to gravity is about 274 meters per second squared.\n",
		"The Sun's gravity also affects the paths of comets, asteroids, and other objects in the solar system.\n"
		"The Sun's rotation period varies with latitude, completing a full rotation once every 25 days near its equator and around 35 days near its poles.\n"
		"It rotates faster at its equator than at higher latitudes, a phenomenon known as differential rotation.\n"
		"The Sun's equatorial region completes a rotation about two weeks faster than its polar regions.\n"
		"The Sun's rotation causes its magnetic field to become twisted and tangled, leading to the formation of sunspots and other magnetic phenomena.\n",
		"Solar astronomers study the Sun using telescopes equipped with special filters to observe its surface features and solar activity.\n"
		"Observations of the Sun help scientists understand its structure, behavior, and its influence on the solar system.\n"
		"The Sun's energy output is a crucial factor in Earth's climate and weather patterns.\n"
		"Changes in solar activity can influence temperatures, atmospheric circulation, and cloud formation on Earth.\n"
		"Scientists use satellites and spacecraft to study the Sun up close, including NASA's Solar Dynamics Observatory (SDO) and the Parker Solar Probe.\n",
		"The Parker Solar Probe is the closest spacecraft to ever approach the Sun, studying its outer atmosphere and solar wind.\n"
		"The Sun's outer atmosphere, called the corona, is much hotter than its surface, with temperatures reaching millions of degrees Celsius.\n"
		"The exact mechanism behind the corona's extreme heat is still a subject of research and debate among scientists.\n"
		"The Sun's magnetic field extends far beyond the visible surface, forming a region of space called the heliosphere.\n"
		"Voyager 1 and Voyager 2 are spacecraft that have traveled beyond the heliosphere, providing valuable data about the Sun's influence on interstellar space.\n",
		"The Sun is part of the Milky Way galaxy, located in one of its spiral arms about 27,000 light-years from the galactic center.\n"
		"It orbits the center of the Milky Way at a speed of about 828,000 kilometers per hour (514,000 miles per hour).\n"
		"The Sun's orbit around the galaxy takes about 230 million years to complete, known as a cosmic year.\n"
		"The Sun's motion through the galaxy affects the orbits of nearby stars and can influence the formation of star clusters and other structures.\n"
		"The Sun is relatively stable compared to other stars, with a luminosity that has remained fairly constant over billions of years.\n",
		"However, it does experience periodic variations in activity, such as the solar cycle and longer-term changes in solar output.\n"
		"The Sun's gravitational influence extends far beyond the edges of the solar system, shaping the orbits of distant objects in the Oort Cloud.\n"
		"The Sun's position in the sky changes throughout the year due to Earth's orbit around it, causing the seasons.\n"
		"Sunlight provides energy for photosynthesis, driving the growth of plants and supporting life on Earth.\n"
		"The Sun has been revered by civilizations throughout history as a symbol of power, life, and divinity.\n"
	};

	for (int i = Sol - 1; i < Sol; i++) {
		if (i == 10) {
			cout << "There aren't any different facts to offer about the Sun." << endl;
			cout << "Note: The counter will reset and the facts will be repeated all over again." << endl;
			Sol = 0;
		}
		else {
			cout << Fact[i];
			cout << endl;
		}
	}
}

void MercFact() {
	Merc++;
	
	string Fact[10] = {
		"Mercury is the smallest planet in our solar system.\n"
		"It is the closest planet to the Sun, orbiting at an average distance of about 36 million miles (58 million kilometers).\n"
		"A year on Mercury is equivalent to about 88 Earth days.\n"
		"Despite its small size, Mercury has a relatively high density, indicating a large iron core.\n"
		"Its surface is heavily cratered, resembling Earth's Moon.\n",
		"Mercury has a very thin atmosphere, composed mainly of oxygen, sodium, hydrogen, helium, and potassium.\n"
		"Surface temperatures on Mercury vary greatly, ranging from about -290 degrees Fahrenheit (-180 degrees Celsius) at night to 800 degrees Fahrenheit (430 degrees Celsius) during the day.\n"
		"Mercury has no moons or rings.\n"
		"Its orbit around the Sun is the most elliptical of all the planets in the solar system.\n"
		"Mercury experiences the greatest temperature variations of any planet in the solar system.\n",
		"Its surface is covered in plains, cliffs, and ridges.\n"
		"Mercury's rotation is unique; it completes three rotations about its axis for every two orbits around the Sun, resulting in a day on Mercury (one rotation) lasting about 176 Earth days.\n"
		"The Caloris Basin is one of the largest and youngest impact basins on Mercury, created by a massive asteroid collision.\n"
		"Mercury's magnetic field is weak compared to Earth's but is thought to be generated by a dynamo effect within its iron core.\n"
		"The planet was named after the Roman messenger god Mercury due to its fast orbit around the Sun.\n",
		"Mercury is visible to the naked eye from Earth and has been observed for thousands of years.\n"
		"The Mariner 10 spacecraft provided the first close-up images of Mercury during three flybys in the 1970s.\n"
		"MESSENGER (MErcury Surface, Space ENvironment, GEochemistry, and Ranging) was the first spacecraft to orbit Mercury, providing detailed data on its surface, composition, and magnetic field.\n"
		"BepiColombo, a joint mission between the European Space Agency (ESA) and the Japan Aerospace Exploration Agency (JAXA), is currently studying Mercury, focusing on its magnetic field, surface, and interior structure.\n"
		"Mercury's lack of an atmosphere allows the solar wind to interact directly with its surface, causing it to lose small amounts of material over time.\n",
		"Mercury's surface features include scarps, or cliffs, caused by the planet's contraction as its core cooled and solidified.\n"
		"The Kuiper crater on Mercury is one of the largest impact craters on the planet, spanning about 155 miles (250 kilometers) in diameter.\n"
		"Mercury has a significant sodium exosphere, produced by the vaporization of sodium-rich surface rocks.\n"
		"The planet's surface is covered in regolith, a layer of loose, fragmented material created by impacts and other geological processes.\n"
		"Mercury has no significant geological activity like plate tectonics or volcanic eruptions.\n",
		"The planet's surface is heavily cratered, indicating a lack of significant erosion or resurfacing processes.\n"
		"Mercury's surface gravity is about 38% of Earth's gravity.\n"
		"Mercury's orbit is inclined by about 7 degrees to the plane of the solar system.\n"
		"Mercury has been visited by only two spacecraft, Mariner 10 and MESSENGER, prior to BepiColombo.\n"
		"Mercury's core is thought to make up about 60% of its total mass.\n",
		"The planet has a very thin exosphere, consisting mainly of hydrogen, helium, oxygen, sodium, calcium, potassium, and water vapor.\n"
		"Mercury's surface is composed mostly of volcanic basaltic rock.\n"
		"The smallest planet has the largest temperature range, from hot enough to melt lead during the day to cold enough to freeze carbon dioxide at night.\n"
		"Mercury has no atmosphere to retain heat, causing extreme temperature fluctuations between its day and night sides.\n"
		"Its surface temperature can exceed 800 degrees Fahrenheit (430 degrees Celsius) during the day and drop to minus 290 degrees Fahrenheit (minus 180 degrees Celsius) at night.\n",
		"Mercury has the greatest temperature range of any planet in our solar system.\n"
		"Due to its proximity to the Sun, Mercury has been explored less than most other planets.\n"
		"It is the second densest planet in the solar system, after Earth.\n"
		"Mercury's surface is covered in a fine layer of dust and small rocks, known as regolith.\n"
		"The planet's surface is scarred by impact craters, some of which are hundreds of kilometers in diameter.\n",
		"Mercury's atmosphere is so thin that it cannot trap heat, leading to extreme temperature variations between its day and night sides.\n"
		"Mercury has no moons or rings orbiting around it.\n"
		"The planet's surface is heavily cratered, suggesting that it has undergone little geological activity in recent history.\n"
		"Mercury's surface gravity is only about 38% of Earth's, meaning you would weigh much less on Mercury than on Earth.\n"
		"Mercury's surface is littered with impact craters, some of which have names like Shakespeare, Tolstoj, and Beethoven.\n",
		"The surface of Mercury is so hot during the day that lead would melt on it.\n"
		"Mercury's thin atmosphere is composed mainly of oxygen, sodium, hydrogen, helium, and potassium.\n"
		"The planet's surface is covered in plains, cliffs, and impact craters.\n"
		"Mercury's surface is heavily cratered, indicating a lack of geological activity.\n"
		"Mercury's surface is covered in a layer of fine dust and rocks, known as regolith.\n" 
	};

	for (int i = Merc - 1; i < Merc; i++) {
		if (i == 10) {
			cout << "There aren't any different facts to offer about Mercury." << endl;
			cout << "Note: The counter will reset and the facts will be repeated all over again." << endl;
			Sol = 0;
		}
		else {
			cout << Fact[i];
			cout << endl;
		}
	}
}

void VenFact() {
	cout << "This is Venus" << endl;
}

void EarthFact() {
	cout << "This is the Earth" << endl;
}

void MarsFact() {
	cout << "This is Mars" << endl;
}

void AsteroidFact() {
	cout << "This is the Asteroid Belt" << endl;
}

void JupiFact() {
	cout << "This is Jupiter" << endl;
}

void SatFact() {
	cout << "This is Saturn" << endl;
}

void UranFact() {
	cout << "This is Uranus" << endl;
}

void NepFact() {
	cout << "This is Neptune" << endl;
}

void PluFact() {
	cout << "This is Pluto" << endl;
}