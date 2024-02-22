#include <iostream>
#include <string>
#include "GlobalFunctions.h"
#include "FactSheet.h"

using namespace std;

int Sol = 0, Merc = 0, Ven = 0, Earth = 0, EarthMoon=0, Mars = 0, MarsMoon = 0, Asteroid = 0, Jupi = 0, Sat = 0, Uran = 0, Nep = 0, Plu = 0, Kuiper=0;

void StandardFactCout(int FactCount, int &CelestialBody, string Fact[]) {
	//This is the standard Fact-Printing function //
	for (int i = CelestialBody - 1; i < CelestialBody; i++) { // Based on the given name of the Celestial Body... //
		if (i == FactCount) { // ... and the maximum fact count, it prints a corresponding answer // 
			cout << endl;
			cout << "There aren't any more facts to offer about this celestial body" << endl; // Those two lines are printed every time the user reaches the limit of the fact sheet and the //
			cout << "Note: The counter will reset and the facts will be repeated all over again." << endl; // programme can no longer print out any new facts // 
			cout << endl;
			CelestialBody = 0; // If that's the case, the fact counter is reset to 0 //
		}
		else { // But if that's not the case, it simply prints a set of 5 facts and separates it with a new line //
			cout << Fact[i]; 
			cout << endl;
		}
	}
}

void SolFact() {
	Sol++;
	
	// This is an example of a Fact-Containing function or simply a fact sheet //

	string Fact[10] = {
		"The Sun is a star, a massive ball of glowing gas that provides light and heat to the solar system.\n\n"
		"It is located at the center of our solar system, with the planets orbiting around it.\n\n"
		"The Sun's diameter is about 109 times that of Earth.\n\n"
		"Its mass is approximately 330,000 times that of Earth.\n\n"
		"The Sun is composed mainly of hydrogen (about 75%) and helium (about 24%) by mass.\n\n", // As you can see (check Line 32 also), there is a comma only every 5 facts. //
		"Its core is incredibly hot, reaching temperatures of about 15 million degrees Celsius (27 million degrees Fahrenheit).\n\n" // This is done with the purpose of printing out 5 facts each time the function is called upon, without the need of much code //
		"The Sun generates energy through a process called nuclear fusion, where hydrogen atoms combine to form helium, releasing vast amounts of energy.\n\n"
		"This energy radiates outward from the core through several layers, ultimately reaching the surface and then into space as sunlight.\n\n"
		"The Sun's surface temperature is about 5,500 degrees Celsius (9,932 degrees Fahrenheit).\n\n"
		"Sunspots, cooler regions on the Sun's surface, are caused by magnetic activity and appear dark compared to the surrounding areas.\n\n",
		"Solar flares, sudden bursts of energy, can occur near sunspots and release large amounts of radiation into space.\n\n"
		"The Sun's magnetic field is constantly changing and can influence space weather throughout the solar system.\n\n"
		"Solar winds, streams of charged particles, flow outward from the Sun in all directions at speeds of about 1.6 million kilometers per hour (1 million miles per hour).\n\n"
		"These solar winds interact with Earth's magnetic field, producing phenomena such as auroras.\n\n"
		"The Sun's magnetic field goes through an 11-year cycle of activity, with periods of high and low sunspot numbers known as the solar cycle.\n\n",
		"During periods of high activity, the Sun's surface becomes more active, with increased sunspot and solar flare activity.\n\n"
		"Conversely, during periods of low activity, the Sun's surface is quieter, with fewer sunspots and solar flares.\n\n"
		"The Sun's energy output varies slightly over the course of its solar cycle, with the total solar irradiance changing by about 0.1%.\n\n"
		"The Sun is about 4.6 billion years old and is roughly halfway through its main sequence stage of life.\n\n"
		"It is expected to continue burning hydrogen in its core for another 5 billion years before undergoing significant changes.\n\n",
		"Eventually, the Sun will exhaust its hydrogen fuel and start burning helium, leading to its expansion into a red giant.\n\n"
		"As a red giant, the Sun will engulf the inner planets, including Earth, before eventually shedding its outer layers to form a planetary nebula.\n\n"
		"The core of the Sun will collapse to form a white dwarf, a dense and dim remnant of its former self.\n\n"
		"The Sun's gravity holds the solar system together, keeping the planets in their orbits.\n\n"
		"Its gravitational pull is strongest at its surface, where the acceleration due to gravity is about 274 meters per second squared.\n\n",
		"The Sun's gravity also affects the paths of comets, asteroids, and other objects in the solar system.\n\n"
		"The Sun's rotation period varies with latitude, completing a full rotation once every 25 days near its equator and around 35 days near its poles.\n\n"
		"It rotates faster at its equator than at higher latitudes, a phenomenon known as differential rotation.\n\n"
		"The Sun's equatorial region completes a rotation about two weeks faster than its polar regions.\n\n"
		"The Sun's rotation causes its magnetic field to become twisted and tangled, leading to the formation of sunspots and other magnetic phenomena.\n\n",
		"Solar astronomers study the Sun using telescopes equipped with special filters to observe its surface features and solar activity.\n\n"
		"Observations of the Sun help scientists understand its structure, behavior, and its influence on the solar system.\n\n"
		"The Sun's energy output is a crucial factor in Earth's climate and weather patterns.\n\n"
		"Changes in solar activity can influence temperatures, atmospheric circulation, and cloud formation on Earth.\n\n"
		"Scientists use satellites and spacecraft to study the Sun up close, including NASA's Solar Dynamics Observatory (SDO) and the Parker Solar Probe.\n\n",
		"The Parker Solar Probe is the closest spacecraft to ever approach the Sun, studying its outer atmosphere and solar wind.\n\n"
		"The Sun's outer atmosphere, called the corona, is much hotter than its surface, with temperatures reaching millions of degrees Celsius.\n\n"
		"The exact mechanism behind the corona's extreme heat is still a subject of research and debate among scientists.\n\n"
		"The Sun's magnetic field extends far beyond the visible surface, forming a region of space called the heliosphere.\n\n"
		"Voyager 1 and Voyager 2 are spacecraft that have traveled beyond the heliosphere, providing valuable data about the Sun's influence on interstellar space.\n\n",
		"The Sun is part of the Milky Way galaxy, located in one of its spiral arms about 27,000 light-years from the galactic center.\n\n"
		"It orbits the center of the Milky Way at a speed of about 828,000 kilometers per hour (514,000 miles per hour).\n\n"
		"The Sun's orbit around the galaxy takes about 230 million years to complete, known as a cosmic year.\n\n"
		"The Sun's motion through the galaxy affects the orbits of nearby stars and can influence the formation of star clusters and other structures.\n\n"
		"The Sun is relatively stable compared to other stars, with a luminosity that has remained fairly constant over billions of years.\n\n",
		"However, it does experience periodic variations in activity, such as the solar cycle and longer-term changes in solar output.\n\n"
		"The Sun's gravitational influence extends far beyond the edges of the solar system, shaping the orbits of distant objects in the Oort Cloud.\n\n"
		"The Sun's position in the sky changes throughout the year due to Earth's orbit around it, causing the seasons.\n\n"
		"Sunlight provides energy for photosynthesis, driving the growth of plants and supporting life on Earth.\n\n"
		"The Sun has been revered by civilizations throughout history as a symbol of power, life, and divinity.\n\n"
	};

	// Every fact sheet is basically the same. They only vary when it comes to the number of facts they contain. //

	StandardFactCout(10, Sol, Fact);
}

void MercFact() {
	Merc++;
	
	string Fact[10] = {
		"Mercury is the smallest planet in our solar system.\n\n"
		"It is the closest planet to the Sun, orbiting at an average distance of about 36 million miles (58 million kilometers).\n\n"
		"A year on Mercury is equivalent to about 88 Earth days.\n\n"
		"Despite its small size, Mercury has a relatively high density, indicating a large iron core.\n\n"
		"Its surface is heavily cratered, resembling Earth's Moon.\n\n",
		"Mercury has a very thin atmosphere, composed mainly of oxygen, sodium, hydrogen, helium, and potassium.\n\n"
		"Surface temperatures on Mercury vary greatly, ranging from about -290 degrees Fahrenheit (-180 degrees Celsius) at night to 800 degrees Fahrenheit (430 degrees Celsius) during the day.\n\n"
		"Mercury has no moons or rings.\n\n"
		"Its orbit around the Sun is the most elliptical of all the planets in the solar system.\n\n"
		"Mercury experiences the greatest temperature variations of any planet in the solar system.\n\n",
		"Its surface is covered in plains, cliffs, and ridges.\n\n"
		"Mercury's rotation is unique; it completes three rotations about its axis for every two orbits around the Sun, resulting in a day on Mercury (one rotation) lasting about 176 Earth days.\n\n"
		"The Caloris Basin is one of the largest and youngest impact basins on Mercury, created by a massive asteroid collision.\n\n"
		"Mercury's magnetic field is weak compared to Earth's but is thought to be generated by a dynamo effect within its iron core.\n\n"
		"The planet was named after the Roman messenger god Mercury due to its fast orbit around the Sun.\n\n",
		"Mercury is visible to the naked eye from Earth and has been observed for thousands of years.\n\n"
		"The Mariner 10 spacecraft provided the first close-up images of Mercury during three flybys in the 1970s.\n\n"
		"MESSENGER (MErcury Surface, Space ENvironment, GEochemistry, and Ranging) was the first spacecraft to orbit Mercury, providing detailed data on its surface, composition, and magnetic field.\n\n"
		"BepiColombo, a joint mission between the European Space Agency (ESA) and the Japan Aerospace Exploration Agency (JAXA), is currently studying Mercury, focusing on its magnetic field, surface, and interior structure.\n\n"
		"Mercury's lack of an atmosphere allows the solar wind to interact directly with its surface, causing it to lose small amounts of material over time.\n\n",
		"Mercury's surface features include scarps, or cliffs, caused by the planet's contraction as its core cooled and solidified.\n\n"
		"The Kuiper crater on Mercury is one of the largest impact craters on the planet, spanning about 155 miles (250 kilometers) in diameter.\n\n"
		"Mercury has a significant sodium exosphere, produced by the vaporization of sodium-rich surface rocks.\n\n"
		"The planet's surface is covered in regolith, a layer of loose, fragmented material created by impacts and other geological processes.\n\n"
		"Mercury has no significant geological activity like plate tectonics or volcanic eruptions.\n\n",
		"The planet's surface is heavily cratered, indicating a lack of significant erosion or resurfacing processes.\n\n"
		"Mercury's surface gravity is about 38% of Earth's gravity.\n\n"
		"Mercury's orbit is inclined by about 7 degrees to the plane of the solar system.\n\n"
		"Mercury has been visited by only two spacecraft, Mariner 10 and MESSENGER, prior to BepiColombo.\n\n"
		"Mercury's core is thought to make up about 60% of its total mass.\n\n",
		"The planet has a very thin exosphere, consisting mainly of hydrogen, helium, oxygen, sodium, calcium, potassium, and water vapor.\n\n"
		"Mercury's surface is composed mostly of volcanic basaltic rock.\n\n"
		"The smallest planet has the largest temperature range, from hot enough to melt lead during the day to cold enough to freeze carbon dioxide at night.\n\n"
		"Mercury has no atmosphere to retain heat, causing extreme temperature fluctuations between its day and night sides.\n\n"
		"Its surface temperature can exceed 800 degrees Fahrenheit (430 degrees Celsius) during the day and drop to minus 290 degrees Fahrenheit (minus 180 degrees Celsius) at night.\n\n",
		"Mercury has the greatest temperature range of any planet in our solar system.\n\n"
		"Due to its proximity to the Sun, Mercury has been explored less than most other planets.\n\n"
		"It is the second densest planet in the solar system, after Earth.\n\n"
		"Mercury's surface is covered in a fine layer of dust and small rocks, known as regolith.\n\n"
		"The planet's surface is scarred by impact craters, some of which are hundreds of kilometers in diameter.\n\n",
		"Mercury's atmosphere is so thin that it cannot trap heat, leading to extreme temperature variations between its day and night sides.\n\n"
		"Mercury has no moons or rings orbiting around it.\n\n"
		"The planet's surface is heavily cratered, suggesting that it has undergone little geological activity in recent history.\n\n"
		"Mercury's surface gravity is only about 38% of Earth's, meaning you would weigh much less on Mercury than on Earth.\n\n"
		"Mercury's surface is littered with impact craters, some of which have names like Shakespeare, Tolstoj, and Beethoven.\n\n",
		"The surface of Mercury is so hot during the day that lead would melt on it.\n\n"
		"Mercury's thin atmosphere is composed mainly of oxygen, sodium, hydrogen, helium, and potassium.\n\n"
		"The planet's surface is covered in plains, cliffs, and impact craters.\n\n"
		"Mercury's surface is heavily cratered, indicating a lack of geological activity.\n\n"
		"Mercury's surface is covered in a layer of fine dust and rocks, known as regolith.\n\n" 
	};

	StandardFactCout(10, Merc, Fact);
}

void VenFact() {
	Ven++;

	string Fact[10] = {
		"Venus is the second planet from the Sun and is often called Earth's 'sister planet' due to their similar size and composition.\n\n"
		"It is named after the Roman goddess of love and beauty.\n\n"
		"Venus is sometimes referred to as the 'morning star' or the 'evening star' because it is visible from Earth during the morning and evening.\n\n"
		"The planet has a thick atmosphere composed mainly of carbon dioxide with clouds of sulfuric acid, making it extremely inhospitable.\n\n"
		"Surface temperatures on Venus are hot enough to melt lead, reaching up to 880 degrees Fahrenheit (471 degrees Celsius), making it the hottest planet in the solar system.\n\n",
		"Despite being closer to the Sun than Mercury, Venus is not the hottest planet because its thick atmosphere traps heat.\n\n"
		"Venus rotates in the opposite direction to most planets, with retrograde rotation, meaning its sun rises in the west and sets in the east.\n\n"
		"A day on Venus is longer than its year, with a rotation period of about 243 Earth days and an orbital period of about 225 Earth days.\n\n"
		"Venus has no moons and no rings.\n\n"
		"Its surface is covered in volcanic features, including extensive lava flows, volcanic plains, and thousands of volcanoes.\n\n",
		"The planet's surface is relatively young, with evidence of volcanic activity continuing into recent geological times.\n\n"
		"Venus has the most volcanoes of any planet in the solar system, with over 1,600 major volcanoes or volcanic features.\n\n"
		"The largest volcano on Venus, called Maat Mons, is about 5 miles (8 kilometers) high and 180 miles (300 kilometers) in diameter.\n\n"
		"Venus has a surface gravity about 90% of Earth's, meaning objects would weigh slightly less there.\n\n"
		"The planet has no magnetic field, which may contribute to its lack of a protective atmosphere.\n\n",
		"Venus has been visited by several spacecraft, including the Soviet Venera missions and NASA's Magellan spacecraft.\n\n"
		"The dense atmosphere of Venus prevents direct observations of its surface from space, requiring radar imaging to map its features.\n\n"
		"The surface of Venus is dotted with impact craters, but due to volcanic activity, the number of craters is relatively low compared to other bodies in the solar system.\n\n"
		"Venus' atmosphere experiences super-rotation, where winds at its cloud level circulate much faster than the planet rotates.\n\n"
		"The atmospheric pressure on Venus is about 92 times that of Earth's, similar to the pressure found at a depth of about 3,000 feet (900 meters) in Earth's oceans.\n\n",
		"Venus' thick atmosphere causes a greenhouse effect, trapping heat and making its surface extremely hot.\n\n"
		"The planet's clouds are composed mainly of sulfuric acid droplets, with occasional lightning and thunder.\n\n"
		"The dense clouds of Venus reflect about 70% of the sunlight that reaches them, making the planet very bright in the sky.\n\n"
		"The composition of Venus' clouds was first identified by the Soviet Venera and American Pioneer Venus missions.\n\n"
		"Venus' atmosphere is devoid of water vapor, suggesting that any water present on the planet's surface in the past has been lost.\n\n",
		"The lack of a magnetic field and protective atmosphere on Venus results in its surface being bombarded by solar wind and cosmic rays.\n\n"
		"Venus' thick atmosphere makes it difficult for heat to escape, resulting in a lack of significant temperature variation between its day and night sides.\n\n"
		"The surface of Venus is marked by vast plains, highland regions, and large volcanic features like shield volcanoes and lava channels.\n\n"
		"The Soviet Venera 13 lander was the first spacecraft to successfully transmit images from the surface of Venus in 1982.\n\n"
		"The harsh conditions on Venus make it challenging for spacecraft to survive for long periods on its surface.\n\n",
		"Venus' lack of plate tectonics means its surface does not undergo the same recycling processes as Earth's, leading to older surface features being preserved.\n\n"
		"The rotation of Venus is synchronized with its orbit around the Sun, meaning the same side always faces the Sun during specific points in its orbit.\n\n"
		"The temperature on Venus' surface is hot enough to melt most metals, including lead and zinc.\n\n"
		"The planet's surface is thought to be relatively young, with many regions showing evidence of recent volcanic activity.\n\n"
		"Venus' clouds contain sulfur dioxide and sulfuric acid, which contributes to the planet's acidic environment.\n\n",
		"The presence of sulfur compounds in Venus' atmosphere is believed to be due to volcanic activity and the breakdown of rocks on its surface.\n\n"
		"Venus has undergone extensive resurfacing events, which have erased many older surface features.\n\n"
		"The Venusian surface is marked by vast plains, highland regions, and thousands of volcanic features.\n\n"
		"Venus' surface temperature is uniform across its entire globe due to the planet's slow rotation and thick atmosphere.\n\n"
		"Venus' surface pressure is equivalent to being about 1 kilometer (0.62 miles) underwater on Earth.\n\n",
		"The clouds of Venus reflect a significant amount of sunlight, contributing to its high albedo, or reflectivity.\n\n"
		"Venus' dense atmosphere produces strong winds at its cloud level, with speeds reaching up to 200 miles per hour (320 kilometers per hour).\n\n"
		"Venus' thick atmosphere contains layers of clouds, including sulfuric acid clouds, which obscure observations of its surface from space.\n\n"
		"The atmosphere of Venus is composed mainly of carbon dioxide, with trace amounts of nitrogen and other gases.\n\n"
		"Venus' lack of a magnetic field means it is more susceptible to the effects of solar wind, which can strip away its atmosphere over time.\n\n",
		"The surface of Venus is characterized by vast plains, highland regions, and volcanic features such as shield volcanoes and lava channels.\n\n"
		"Venus' surface is marked by numerous impact craters, volcanic features, and tectonic structures.\n\n"
		"Venus' dense atmosphere produces intense greenhouse effect, trapping heat and making it the hottest planet in the solar system.\n\n"
		"The surface of Venus has been shaped by extensive volcanic activity, with evidence of recent volcanic eruptions.\n\n"
		"Venus' thick atmosphere is composed mainly of carbon dioxide, with clouds of sulfuric acid, creating extreme surface conditions.\n\n"
	};

	StandardFactCout(10, Ven, Fact);
}

void EarthFact() {
	Earth++;

	string Fact[10] = {
		"Earth is the third planet from the Sun and the only known planet to support life.\n\n"
		"It is the fifth largest planet in the solar system by diameter.\n\n"
		"Earth orbits the Sun at an average distance of about 93 million miles (150 million kilometers).\n\n"
		"The planet has a diverse range of ecosystems, including deserts, forests, grasslands, and oceans.\n\n"
		"Earth has a unique atmosphere composed primarily of nitrogen (78%) and oxygen (21%), with traces of other gases.\n\n",
		"The Earth's atmosphere plays a crucial role in regulating temperature and supporting life.\n\n"
		"The atmosphere also protects the planet from harmful solar radiation and meteoroids.\n\n"
		"Earth has a relatively large moon, which helps stabilize its axial tilt and causes tides in its oceans.\n\n"
		"The Earth's magnetic field is generated by the movement of molten iron in its outer core.\n\n"
		"This magnetic field helps shield the planet from charged particles from the Sun, forming the magnetosphere.\n\n",
		"Earth's surface is approximately 71% water, with the remaining 29% consisting of continents and islands.\n\n"
		"The planet's surface is constantly reshaped by geological processes such as erosion, plate tectonics, and volcanic activity.\n\n"
		"Earth's crust is divided into several rigid plates that float on the semi-fluid mantle beneath them.\n\n"
		"The movement of these tectonic plates causes earthquakes, volcanic eruptions, and the formation of mountains.\n\n"
		"Earth has a diverse range of climates, from polar regions with permanent ice caps to equatorial regions with tropical rainforests.\n\n",
		"Throughout all the four seasons, the planet earth remains round as it orbits around the Sun.\n\n"
		"Earth's rotation on its axis gives rise to day and night cycles, with one rotation taking approximately 24 hours.\n\n"
		"The Earth's rotation is gradually slowing down due to tidal forces from the Moon, causing days to become longer over time.\n\n"
		"The Earth's orbit around the Sun is not a perfect circle but is slightly elliptical, with the distance from the Sun varying throughout the year.\n\n"
		"Earth's distance from the Sun, along with its axial tilt, determines the length and intensity of seasons.\n\n",
		"The Earth's atmosphere is divided into several layers, including the troposphere, stratosphere, mesosphere, thermosphere, and exosphere.\n\n"
		"The ozone layer, located in the stratosphere, absorbs most of the Sun's ultraviolet radiation, protecting life on Earth from harmful exposure.\n\n"
		"Earth's oceans contain about 97% of the planet's water, with the remaining 3% found in ice caps, glaciers, and freshwater sources.\n\n"
		"The oceans play a critical role in regulating climate and absorbing carbon dioxide from the atmosphere.\n\n"
		"Earth's biosphere encompasses all living organisms and their interactions with the environment.\n\n",
		"Life on Earth originated billions of years ago and has evolved into an incredibly diverse array of species.\n\n"
		"The study of Earth's past climates and environments is known as paleoclimatology and provides insights into long-term climate trends.\n\n"
		"Earth's surface is constantly changing due to natural processes such as erosion, weathering, and sedimentation.\n\n"
		"Human activities, such as deforestation, pollution, and urbanization, are also significant drivers of environmental change.\n\n"
		"Earth is the only known planet with liquid water on its surface, a key ingredient for life as we know it.\n\n",
		"The Earth's gravitational pull keeps the atmosphere and oceans in place and determines the planet's weight.\n\n"
		"Earth's gravity is about 9.8 meters per second squared or roughly 32 feet per second squared.\n\n"
		"The Earth's magnetic poles are not aligned with its geographic poles and undergo periodic reversals over geological time scales.\n\n"
		"The Earth's magnetic field protects the planet from charged particles in the solar wind, which can strip away the atmosphere.\n\n"
		"Earth's rotation axis is tilted relative to its orbital plane, giving rise to the changing seasons as different parts of the planet receive varying amounts of sunlight.\n\n",
		"The Earth's surface is divided into several major tectonic plates, which interact at plate boundaries, leading to earthquakes, volcanic eruptions, and mountain formation.\n\n"
		"Earth's oceans are home to a vast array of marine life, including fish, mammals, invertebrates, and microorganisms.\n\n"
		"The Earth's atmosphere contains about 21% oxygen, which is essential for respiration in most organisms.\n\n"
		"The Earth's atmosphere also contains small amounts of greenhouse gases, such as carbon dioxide, methane, and water vapor, which help regulate the planet's temperature.\n\n"
		"Earth's climate is influenced by a variety of factors, including solar radiation, atmospheric composition, ocean currents, and volcanic activity.\n\n",
		"The Earth's oceans play a crucial role in regulating climate by absorbing and transporting heat around the planet.\n\n"
		"The Earth's atmosphere is composed of several layers, each with its own unique characteristics and properties.\n\n"
		"The Earth's magnetic field is generated by the movement of molten iron and nickel in its outer core, known as the geodynamo process.\n\n"
		"The Earth's magnetic field helps protect the planet from harmful solar radiation and charged particles from the Sun.\n\n"
		"Earth's climate has undergone significant changes throughout its history, including ice ages, warm periods, and fluctuations in atmospheric carbon dioxide levels.\n\n",
		"The Earth's rotation is gradually slowing down due to tidal forces from the Moon, causing the length of a day to increase by about 1.7 milliseconds per century.\n\n"
		"Earth's atmosphere is mostly composed of nitrogen (about 78%) and oxygen (about 21%), with trace amounts of other gases such as argon, carbon dioxide, and water vapor.\n\n"
		"The Earth's surface is divided into several major tectonic plates, which float on the semi-fluid asthensphere beneath them and move over time due to mantle convection.\n\n"
		"Earth's magnetic field is not static but undergoes periodic reversals, where the magnetic north and south poles switch places over geological time scales.\n\n"
		"Earth is the only planet in the solar system known to have liquid water on its surface, which is essential for the existence\n\n"
	};

	StandardFactCout(10, Earth, Fact);
}

void MoonsFact(string PlanetName) {
	// The MoonsFact() function, depending on the PlanetName that the moon corresponds to, ... //
	if (PlanetName == "The Earth") EarthMoonFact(); // ... either uses one of those two functions ... //
	else if (PlanetName == "Mars") MarsMoonFact();
	else if (PlanetName == "Jupiter") cout << JupiMoonFacts[0]; // ... or simply prints the facts by itself. //
	else if (PlanetName == "Saturn") cout << SatMoonFacts[0];
	else if (PlanetName == "Uranus") cout << UranMoonFacts[0];
	else if (PlanetName == "Neptune") cout << NepMoonFacts[0];
	else if (PlanetName == "Pluto") cout << PluMoonFacts[0];
	else cout << "This celestial body holds no moons. Please enter a valid answer." << endl;
}

void EarthMoonFact() { // Earth's and Mars' Moon functions are an exception, because they each hold more facts than the rest of the moons and are way less in terms of numbers... //
	EarthMoon++; // ... with Earth having only one and Mars having 2. //

	string Fact[3] = {
		"The Moon is Earth's only natural satellite, orbiting our planet at an average distance of about 239,000 miles (385,000 kilometers).\n\n"
		"Its diameter is about one-quarter of Earth's, making it the fifth-largest moon in the solar system relative to its planet.\n\n"
		"The Moon's surface is covered in a fine layer of powdery dust and rocky debris called regolith.\n\n"
		"It lacks a significant atmosphere, allowing sunlight to directly reach its surface and causing extreme temperature variations.\n\n"
		"The Moon's gravity is about one-sixth that of Earth's, making it possible for astronauts to perform spectacular leaps and jumps.\n\n",
		"Lunar days (days/nights) last about 29.5 Earth days due to the Moon's synchronous rotation, meaning it takes the same amount of time to complete one orbit around Earth as it does to rotate once on its axis.\n\n"
		"The Moon's surface is marked by vast plains called maria (singular: mare), formed by ancient volcanic activity billions of years ago.\n\n"
		"Apollo 11 astronauts Neil Armstrong and Buzz Aldrin became the first humans to walk on the Moon's surface on July 20, 1969.\n\n"
		"Since then, a total of 12 astronauts have walked on the Moon as part of NASA's Apollo program between 1969 and 1972.\n\n"
		"The Moon's gravity influences Earth's tides, causing them to rise and fall in a regular pattern.\n\n",
		"The Moon experiences phases, changing its appearance in the sky as it orbits Earth and sunlight illuminates different portions of its surface.\n\n"
		"Lunar eclipses occur when Earth passes directly between the Sun and the Moon, casting a shadow on the Moon's surface.\n\n"
		"The Moon is gradually moving away from Earth at a rate of about 1.5 inches (3.8 centimeters) per year, due to tidal forces.\n\n"
		"The Moon's surface temperature can vary greatly, ranging from about 253 degrees Fahrenheit (123 degrees Celsius) in sunlight to -387 degrees Fahrenheit (-233 degrees Celsius) in shadow.\n\n"
		"Future lunar exploration aims to return humans to the Moon's surface, establish sustainable habitats, and utilize its resources for scientific research and potential future space missions.\n\n"

	};
		
	StandardFactCout(3, EarthMoon, Fact);
}

void MarsFact() {
	Mars++;

	string Fact[10] = {
		"Mars is the fourth planet from the Sun in the solar system.\n\n"
		"It is often referred to as the 'Red Planet' due to its reddish appearance.\n\n"
		"Mars has a thin atmosphere composed mainly of carbon dioxide, with traces of nitrogen and argon.\n\n"
		"The surface of Mars is dry and rocky, with large dust storms that can cover the entire planet.\n\n"
		"Mars has two small moons, Phobos and Deimos, which are thought to be captured asteroids.\n\n",
		"The average surface temperature on Mars is about -80 degrees Fahrenheit (-62 degrees Celsius).\n\n"
		"Mars has polar ice caps made of water ice and dry ice (frozen carbon dioxide).\n\n"
		"The tallest volcano in the solar system, Olympus Mons, is located on Mars.\n\n"
		"Olympus Mons is about 13.6 miles (22 kilometers) high, nearly three times the height of Mount Everest.\n\n"
		"Mars has a canyon system called Valles Marineris, which is about 2,500 miles (4,000 kilometers) long and up to 7 miles (11 kilometers) deep.\n\n",
		"Valles Marineris is the largest canyon system in the solar system.\n\n"
		"Mars has the largest volcano, the largest canyon system, and the largest impact crater (Hellas Planitia) in the solar system.\n\n"
		"The largest canyon on Mars, Valles Marineris, is named after the Mariner 9 spacecraft, which first observed it in 1971.\n\n"
		"Mars has a day length similar to Earth's, with a rotation period of about 24.6 hours.\n\n"
		"Mars has a year length of about 687 Earth days.\n\n",
		"Mars experiences significant temperature variations between day and night, ranging from about -195 degrees Fahrenheit (-125 degrees Celsius) at night to about 70 degrees Fahrenheit (20 degrees Celsius) during the day near the equator.\n\n"
		"Mars' surface is covered in iron oxide (rust), giving it a reddish appearance.\n\n"
		"Mars has seasons similar to Earth's due to its axial tilt of about 25 degrees.\n\n"
		"The two polar ice caps on Mars grow and shrink with the seasons, composed of a mixture of water ice and dry ice.\n\n"
		"Mars has the largest volcano in the solar system, Olympus Mons, which is about 370 miles (600 kilometers) in diameter.\n\n",
		"The surface gravity on Mars is about 38% of Earth's, meaning objects weigh less on Mars.\n\n"
		"Mars has a thin atmosphere, with a surface pressure less than 1% of Earth's atmospheric pressure.\n\n"
		"Despite its thin atmosphere, Mars can experience intense dust storms that can cover the entire planet for months.\n\n"
		"Mars' atmosphere is too thin to support liquid water on the surface, but water ice exists beneath the surface and at the polar ice caps.\n\n"
		"Mars has a relatively smooth northern hemisphere and a heavily cratered southern hemisphere.\n\n",
		"The southern hemisphere of Mars is older and more heavily cratered than the northern hemisphere.\n\n"
		"Mars has the largest canyon system in the solar system, Valles Marineris, which is thought to have formed from tectonic activity and erosion.\n\n"
		"Mars has no global magnetic field, but localized magnetic fields have been detected in some regions of the planet's crust.\n\n"
		"Mars' thin atmosphere allows for significant temperature variations between day and night and between different locations on the planet.\n\n"
		"Mars' thin atmosphere also results in strong winds that can create dust storms and shape the planet's surface.\n\n",
		"Mars has been visited by numerous spacecraft, including orbiters, landers, and rovers, sent by various space agencies from around the world.\n\n"
		"The first successful Mars mission was NASA's Mariner 4, which flew by the planet in 1965 and returned the first close-up images of its surface.\n\n"
		"Mars has been a primary target for exploration due to its potential for harboring past or present life and its similarities to Earth.\n\n"
		"The surface of Mars is covered in various geological features, including craters, volcanoes, valleys, and plains.\n\n"
		"Mars has the highest volcano in the solar system, Olympus Mons, which is about 13.6 miles (22 kilometers) high and 370 miles (600 kilometers) in diameter.\n\n",
		"Mars has the deepest canyon in the solar system, Valles Marineris, which is about 2,500 miles (4,000 kilometers) long and up to 7 miles (11 kilometers) deep.\n\n"
		"Mars has a thin atmosphere composed mainly of carbon dioxide, with traces of nitrogen and argon.\n\n"
		"The surface of Mars is heavily cratered, indicating a history of impacts from asteroids and comets.\n\n"
		"Mars has polar ice caps made of water ice and dry ice (frozen carbon dioxide), which grow and shrink with the seasons.\n\n"
		"Mars has a thin atmosphere that is not breathable for humans, with a surface pressure about 0.6% of Earth's atmospheric pressure.\n\n",
		"Mars has a reddish appearance due to iron oxide (rust) on its surface.\n\n"
		"Mars has two small moons, Phobos and Deimos, which are irregularly shaped and likely captured asteroids.\n\n"
		"Mars has a day length similar to Earth's, with a rotation period of about 24.6 hours.\n\n"
		"Mars has a year length of about 687 Earth days, or about 1.88 Earth years.\n\n"
		"Mars' thin atmosphere allows for significant temperature variations between day and night, with daytime temperatures reaching about \n70 degrees Fahrenheit (20 degrees Celsius) near the equator and nighttime temperatures dropping to about -195 degrees Fahrenheit (-125 degrees Celsius).\n\n",
		"Mars' thin atmosphere also results in strong winds that can create dust storms that cover the entire planet for months at a time.\n\n"
		"Mars has been a target for exploration due to its potential for harboring past or present life and its similarities to Earth.\n\n"
		"Mars has been visited by numerous spacecraft, including orbiters, landers, and rovers, sent by various space agencies from around the world.\n\n"
		"The first successful Mars mission was NASA's Mariner 4, which flew by the planet in 1965 and returned the first close-up images of its surface.\n\n"
		"Mars has been a subject of fascination for scientists and the public alike, with ongoing efforts to study its geology, climate, and potential for life.\n\n"
	};
	
	StandardFactCout(10, Mars, Fact);
}

void MarsMoonFact() {
	MarsMoon++;

	string Fact[5] = {
		"Mars has two moons named Phobos and Deimos.\n\n"
		"Phobos is the larger and closer of the two moons to Mars.\n\n"
		"Deimos is the smaller and outermost moon of Mars.\n\n"
		"Both moons are irregularly shaped and heavily cratered.\n\n"
		"Phobos orbits very close to Mars, completing a revolution in just 7 hours and 39 minutes.\n\n",
		"Deimos orbits farther from Mars and takes about 30.3 hours to complete one orbit.\n\n"
		"Both moons are believed to be captured asteroids or Kuiper Belt objects.\n\n"
		"Phobos appears to be gradually moving closer to Mars and may eventually collide with the planet or break apart to form a ring.\n\n"
		"Deimos, on the other hand, is moving away from Mars slowly.\n\n"
		"Both moons were discovered in 1877 by American astronomer Asaph Hall.\n\n",
		"Phobos orbits Mars at a distance of about 5,800 kilometers (3,600 miles) from its surface.\n\n"
		"Deimos orbits Mars at a distance of about 23,460 kilometers (14,580 miles) from its surface.\n\n"
		"Phobos appears to be gradually spiraling inward toward Mars due to tidal forces.\n\n"
		"Deimos is the smaller of the two moons, with a diameter of only about 12 kilometers (7.5 miles).\n\n"
		"Phobos is the larger of the two moons, with a diameter of about 22 kilometers (14 miles).\n\n",
		"The origin of Mars' moons is still not fully understood, but they are likely captured asteroids from the asteroid belt.\n\n"
		"Phobos is tidally locked to Mars, meaning it always shows the same face to the planet.\n\n"
		"Deimos, being farther from Mars, takes over 2.7 days to complete one orbit.\n\n"
		"Phobos and Deimos were named after the sons of the Greek god of war, Ares, which corresponds to Mars in Roman mythology.\n\n"
		"Phobos' surface is covered in regolith, with large craters and grooves caused by impacts.\n\n",
		"Deimos' surface is also heavily cratered, but it lacks the deep grooves seen on Phobos.\n\n"
		"Phobos' low orbit means that it rises in the west and sets in the east on Mars, opposite to the usual celestial motion.\n\n"
		"Deimos, being farther from Mars, rises and sets more conventionally, although it still appears to move backward compared to the stars.\n\n"
		"The orbits of both moons are nearly equatorial to Mars, unlike most natural satellites in the solar system.\n\n"
		"Both moons have very low surface gravity, making them potential targets for future human exploration and even potential bases for missions to Mars.\n\n"
	};

	StandardFactCout(5, MarsMoon, Fact);
}

void AsteroidBeltFact() {
	Asteroid++;

	string Fact[5] = {
		"The asteroid belt is a region of space located between the orbits of Mars and Jupiter.\n\n"
		"It contains millions of rocky objects, called asteroids, ranging in size from tiny pebbles to several hundred miles in diameter.\n\n"
		"The total mass of all the asteroids in the belt is estimated to be less than the mass of Earth's Moon.\n\n"
		"The largest asteroid in the belt is Ceres, which is about 590 miles (940 kilometers) in diameter.\n\n"
		"Ceres is so large that it is classified as a dwarf planet, making it the largest object in the asteroid belt.\n\n",
		"The asteroid belt is not as densely packed as often depicted in science fiction; the average distance between asteroids is about 600,000 miles (1 million kilometers).\n\n"
		"Most asteroids in the belt are composed of rocky and metallic materials, similar to the composition of Earth's crust.\n\n"
		"Some asteroids in the belt contain water ice and organic compounds, raising the possibility that they could have delivered these materials to Earth in the past.\n\n"
		"The asteroid belt is believed to be remnants of the early solar system that never accreted into a planet due to the gravitational influence of Jupiter.\n\n"
		"Jupiter's powerful gravity prevented the formation of a planet in the asteroid belt by disrupting the gravitational accretion process.\n\n",
		"The orbits of asteroids in the belt can be highly elliptical and inclined relative to the plane of the solar system.\n\n"
		"Most asteroids in the belt have relatively stable orbits that keep them confined to the region between Mars and Jupiter.\n\n"
		"However, some asteroids can have orbits that bring them close to Earth, posing a potential impact hazard.\n\n"
		"The first asteroid, Ceres, was discovered by Italian astronomer Giuseppe Piazzi in 1801.\n\n"
		"Ceres was initially classified as a planet but later reclassified as an asteroid when many similar objects were discovered in the same region.\n\n",
		"The second asteroid, Pallas, was discovered by German astronomer Heinrich Wilhelm Olbers in 1802.\n\n"
		"The asteroid belt is not a significant barrier to spacecraft traveling through the solar system; spacecraft can navigate through the belt with minimal risk of collision.\n\n"
		"NASA's Dawn spacecraft visited two asteroids in the belt, Vesta and Ceres, providing valuable insights into their composition and geology.\n\n"
		"The Dawn mission revealed that Vesta has a heavily cratered surface and a large impact basin known as Rheasilvia.\n\n"
		"Ceres, on the other hand, has a more diverse surface with bright spots that may be deposits of water ice.\n\n",
		"Some asteroids in the belt are classified as near-Earth asteroids (NEAs) because their orbits bring them close to Earth's orbit.\n\n"
		"NASA and other space agencies closely monitor NEAs to assess their potential impact hazards and develop mitigation strategies.\n\n"
		"Several spacecraft missions, such as OSIRIS-REx and Hayabusa2, have visited near-Earth asteroids to study their composition and collect samples.\n\n"
		"Studying asteroids in the belt can provide valuable insights into the early solar system's formation and evolution.\n\n"
		"Future missions to the asteroid belt may include asteroid mining and exploration for resources such as water and metals.\n\n"
	};

	StandardFactCout(5, Asteroid, Fact);
}

void JupiFact() {
	Jupi++;

	string Fact[10] = {
		"Jupiter is the largest planet in the solar system, with a diameter of about 86,881 miles (139,822 kilometers).\n\n"
		"It is primarily composed of hydrogen and helium, similar to the composition of the Sun.\n\n"
		"Jupiter has a strong magnetic field, about 14 times stronger than Earth's.\n\n"
		"The planet has a rapid rotation, completing a day in just under 10 hours.\n\n"
		"Jupiter has a faint ring system composed of dust particles, first discovered by the Voyager 1 spacecraft.\n\n",
		"The Great Red Spot on Jupiter is a massive storm that has been raging for at least 400 years.\n\n"
		"The Great Red Spot is large enough to fit several Earths inside it.\n\n"
		"Jupiter has at least 79 moons, including the four largest moons known as the Galilean moons: Io, Europa, Ganymede, and Callisto.\n\n"
		"The Galilean moons were discovered by Galileo Galilei in 1610 and were the first objects found to orbit another planet.\n\n"
		"Io, one of Jupiter's moons, is the most volcanically active body in the solar system.\n\n",
		"Europa, another moon of Jupiter, has a subsurface ocean beneath its icy crust, making it a target for astrobiology research.\n\n"
		"Ganymede is the largest moon in the solar system and has its own magnetic field.\n\n"
		"Ganymede is the only moon in the solar system known to have its own magnetic field.\n\n"
		"Callisto, the outermost of the Galilean moons, has a heavily cratered surface and a relatively thin atmosphere.\n\n"
		"Jupiter's magnetic field creates intense radiation belts around the planet, posing a hazard to spacecraft.\n\n",
		"Jupiter's atmosphere is divided into bands of clouds, with alternating light and dark stripes.\n\n"
		"The bands of clouds are caused by Jupiter's rapid rotation and convective motion in its atmosphere.\n\n"
		"Jupiter's atmosphere contains ammonia, methane, and other trace gases, which give it its distinct colors.\n\n"
		"The upper atmosphere of Jupiter is composed mainly of hydrogen and helium.\n\n"
		"Jupiter's intense magnetic field traps charged particles from the solar wind, creating auroras near its poles.\n\n",
		"Jupiter emits more heat than it receives from the Sun, indicating ongoing internal processes.\n\n"
		"Jupiter has a faint planetary ring system composed of dust particles.\n\n"
		"The rings of Jupiter were first discovered by the Voyager 1 spacecraft in 1979.\n\n"
		"Jupiter's rings are primarily composed of small dust particles ejected from nearby moons.\n\n"
		"The rings of Jupiter are relatively faint and difficult to observe from Earth.\n\n",
		"Jupiter's interior is thought to consist of a dense core of rock and metal surrounded by layers of metallic hydrogen and liquid hydrogen.\n\n"
		"The pressure and temperature inside Jupiter increase with depth, reaching extreme conditions in its core.\n\n"
		"Jupiter's strong magnetic field is generated by the motion of metallic hydrogen in its interior.\n\n"
		"The magnetic field of Jupiter extends far beyond the planet, creating a magnetosphere that interacts with its moons and the solar wind.\n\n"
		"Jupiter has a faint ring system composed of dust particles, first discovered by the Voyager 1 spacecraft.\n\n",
		"The Great Red Spot on Jupiter is a massive storm that has been raging for at least 400 years.\n\n"
		"The Great Red Spot is large enough to fit several Earths inside it.\n\n"
		"Jupiter has at least 79 moons, including the four largest moons known as the Galilean moons: Io, Europa, Ganymede, and Callisto.\n\n"
		"The Galilean moons were discovered by Galileo Galilei in 1610 and were the first objects found to orbit another planet.\n\n"
		"Io, one of Jupiter's moons, is the most volcanically active body in the solar system.\n\n",
		"Europa, another moon of Jupiter, has a subsurface ocean beneath its icy crust, making it a target for astrobiology research.\n\n"
		"Ganymede is the largest moon in the solar system and has its own magnetic field.\n\n"
		"Ganymede is the only moon in the solar system known to have its own magnetic field.\n\n"
		"Callisto, the outermost of the Galilean moons, has a heavily cratered surface and a relatively thin atmosphere.\n\n"
		"Jupiter's magnetic field creates intense radiation belts around the planet, posing a hazard to spacecraft.\n\n",
		"Jupiter's atmosphere is divided into bands of clouds, with alternating light and dark stripes.\n\n"
		"The bands of clouds are caused by Jupiter's rapid rotation and convective motion in its atmosphere.\n\n"
		"Jupiter's atmosphere contains ammonia, methane, and other trace gases, which give it its distinct colors.\n\n"
		"The upper atmosphere of Jupiter is composed mainly of hydrogen and helium.\n\n"
		"Jupiter's intense magnetic field traps charged particles from the solar wind, creating auroras near its poles.\n\n",
		"Jupiter emits more heat than it receives from the Sun, indicating ongoing internal processes.\n\n"
		"Jupiter has a faint planetary ring system composed of dust particles.\n\n"
		"The rings of Jupiter were first discovered by the Voyager 1 spacecraft in 1979.\n\n"
		"Jupiter's rings are primarily composed of small dust particles ejected from nearby moons.\n\n"
		"The rings of Jupiter are relatively faint and difficult to observe from Earth.\n\n"
	};

	StandardFactCout(10, Jupi, Fact);
}

string JupiMoonFacts[1] = { // It is important to remember that the bigger Celestial bodies such as Jupiter, Saturn, Uranus and Neptune hold more moons that there are facts about //
	// That is because the rest of the moons don't exactly have many interesting facts and are not under the lens of any major ongoing research //
	"Io is the innermost of Jupiter's Galilean moons, Io is known for its volcanic activity, with hundreds of active volcanoes observed on its surface.\n\n"
	"The second Galilean moon, Europa, has a smooth surface covered in ice. \nIt is believed to have a subsurface ocean of liquid water beneath its icy crust, making it a target for astrobiological research.\n\n"
	"Ganymede is the largest moon in the solar system and the third Galilean moon. \nIt has its own magnetic field and a diverse terrain featuring cratered areas, grooved terrain, and regions with evidence of tectonic activity.\n\n"
	"Callisto is the outermost of the Galilean moons and the second-largest moon of Jupiter. \nIt has a heavily cratered surface, indicating little geological activity compared to Io, Europa, and Ganymede.\n\n"
	"Note: The most prominent moons of Jupiter are referred to as \"Galilean\" because they were all discovered by Galileo Galilei in 1610.\n\n"
};

void SatFact() {
	Sat++;

	string Fact[10] = {
		"Saturn is the sixth planet from the Sun in our solar system.\n\n"
		"It is the second-largest planet, with a diameter of about 74,900 miles (120,500 kilometers).\n\n"
		"Saturn is a gas giant, primarily composed of hydrogen and helium.\n\n"
		"The planet's average density is less than that of water, meaning it could float in water.\n\n"
		"Saturn has a unique feature - its prominent ring system, which consists of ice particles, dust, and rocks.\n\n",
		"The rings of Saturn are about 175,000 miles (282,000 kilometers) in diameter but only about 30 feet (10 meters) thick.\n\n"
		"These rings are divided into several main groups: A, B, and C rings, with the Cassini Division separating the A and B rings.\n\n"
		"The rings are continuously changing due to interactions with Saturn's moons and other factors.\n\n"
		"Saturn has the fastest rotation rate of any planet in the solar system, completing a day in about 10.7 hours.\n\n"
		"Its rapid rotation causes it to flatten slightly at the poles and bulge at the equator.\n\n",
		"Saturn has a strong magnetic field, slightly weaker than Jupiter's but still much stronger than Earth's.\n\n"
		"This magnetic field is about 578 times more powerful than Earth's.\n\n"
		"The magnetic field of Saturn is not perfectly aligned with its rotation axis, causing it to have a noticeable tilt.\n\n"
		"The tilt of Saturn's magnetic field axis is about 0.6 degrees relative to its rotation axis.\n\n"
		"Saturn's atmosphere is primarily composed of hydrogen (about 96%) and helium (about 3%).\n\n",
		"Trace amounts of other gases, such as methane, ammonia, and water vapor, are also present in its atmosphere.\n\n"
		"Saturn's upper atmosphere features bands of clouds and winds that can reach speeds of up to 1,100 miles per hour (1,800 kilometers per hour).\n\n"
		"The atmosphere of Saturn exhibits a variety of weather patterns, including storms, jet streams, and cloud formations.\n\n"
		"The temperature in Saturn's upper atmosphere is much colder than on Earth, averaging around -288 degrees Fahrenheit (-178 degrees Celsius).\n\n"
		"Saturn's hexagonal-shaped jet stream at its north pole is a unique atmospheric phenomenon.\n\n",
		"The hexagonal jet stream has a diameter of about 20,000 miles (32,000 kilometers).\n\n"
		"The cause of the hexagonal shape is still not fully understood.\n\n"
		"Saturn has a series of fainter rings known as the D, E, F, and G rings, located beyond the main ring system.\n\n"
		"The rings of Saturn are believed to be relatively young, possibly formed within the last few hundred million years.\n\n"
		"The particles in Saturn's rings range in size from micrometers to several meters.\n\n",
		"Saturn has been visited by several spacecraft, including Pioneer 11, Voyager 1 and 2, and the Cassini-Huygens mission.\n\n"
		"The Cassini-Huygens mission provided detailed observations of Saturn's rings, atmosphere, and magnetosphere.\n\n"
		"Saturn's rings are visible from Earth with even a small telescope.\n\n"
		"The rings can appear to vanish when viewed edge-on from Earth, a phenomenon known as ring plane crossing.\n\n"
		"Saturn has a series of narrow ringlets within its main ring system.\n\n",
		"These ringlets are caused by the gravitational influence of nearby moons.\n\n"
		"The largest gap in Saturn's rings, the Cassini Division, is about 2,920 miles (4,700 kilometers) wide.\n\n"
		"Saturn's rings are named in the order of their discovery, using letters of the alphabet.\n\n"
		"The main rings are designated with letters A, B, and C, in order of increasing distance from Saturn.\n\n"
		"Saturn's rings are not solid structures but are instead made up of countless individual particles orbiting the planet.\n\n",
		"Saturn's rings are constantly changing due to collisions between particles and interactions with moons.\n\n"
		"The rings of Saturn are believed to be remnants of a moon or moons that were shattered by tidal forces.\n\n"
		"Shepherd moons, such as Prometheus and Pandora, help maintain the shape of Saturn's rings by gravitationally interacting with the ring particles.\n\n"
		"Saturn has a faint planetary ring system composed of dust particles.\n\n"
		"The rings of Saturn were first observed by Galileo Galilei in 1610 but were later identified as rings by Christiaan Huygens in 1655.\n\n",
		"Saturn's rings are mostly composed of water ice, with some rocky material mixed in.\n\n"
		"The outer edge of Saturn's rings is known as the Phoebe ring, named after Saturn's moon Phoebe.\n\n"
		"Saturn's rings are much brighter when viewed from Earth's perspective than when viewed from spacecraft near Saturn.\n\n"
		"The rings of Saturn are visible through even a small telescope from Earth.\n\n"
		"Saturn's rings are believed to be a temporary feature in its geological history.\n\n",
		"The rings of Saturn are continuously being replenished by small impacts and collisions between ring particles.\n\n"
		"Saturn's rings are so extensive that they would stretch from Earth to the Moon if they were laid flat.\n\n"
		"The rings of Saturn are made up of countless individual particles, ranging in size from micrometers to several meters.\n\n"
		"Saturn's rings reflect sunlight, making them appear bright and visible from Earth.\n\n"
		"The rings of Saturn are one of the most iconic features of the solar system and have fascinated astronomers for centuries.\n\n"
	};

	StandardFactCout(10, Sat, Fact);
}

string SatMoonFacts[1] = {
	"Titan is the largest moon of Saturn and the second-largest moon in the solar system. \nTitan is unique due to its thick atmosphere primarily composed of nitrogen, with traces of methane and ethane. \nIt also has seas of liquid hydrocarbons on its surface, making it one of the most Earth-like bodies in the solar system.\n\n"
	"Rhea is the second-largest moon of Saturn and has a heavily cratered surface, indicating its ancient age. \nIt has a relatively bright surface, composed primarily of water and ice.\n\n"
	"Iapetus is known for its stark contrast in surface brightness, with one hemisphere being much darker than the other. \nThis leads to its nickname, the 'yin-yang moon.' Its dark side is covered in a layer of dark material, possibly derived from organic compounds.\n\n"
	"Tethys has a relatively smooth surface with a large impact crater called Odysseus on one side. \nLike Dione, it also features some wispy terrain.\n\n"
	"Enceladus is known for its geysers of water vapor and icy particles erupting from its south polar region, indicating the presence of a subsurface ocean beneath its icy crust. \nThis moon has garnered significant interest for its potential habitability.\n\n"
	"Dione has a heavily cratered surface, similar to Rhea, but it also exhibits bright, linear features called 'wispy terrain,' thought to be fractures caused by tectonic forces.\n\n"
};

void UranFact() {
	Uran++;

	string Fact[10] = {
		"Uranus is the seventh planet from the Sun in our solar system.\n\n"
		"It is classified as an ice giant, along with Neptune.\n\n"
		"Uranus is the third-largest planet by radius and fourth-largest by mass in the solar system.\n\n"
		"The planet's diameter is about 31,518 miles (50,724 kilometers).\n\n"
		"Uranus has a unique rotation axis, tilted nearly perpendicular to the plane of its orbit.\n\n",
		"This extreme tilt causes Uranus to appear to roll on its side as it orbits the Sun.\n\n"
		"A day on Uranus lasts about 17 hours and 14 minutes, while a year is equivalent to about 84 Earth years.\n\n"
		"The atmosphere of Uranus is primarily composed of hydrogen (about 83%) and helium (about 15%).\n\n"
		"Trace amounts of methane in Uranus' atmosphere give it a blue-green color.\n\n"
		"Uranus has a series of faint rings composed of dust and small rocks.\n\n",
		"The rings of Uranus were first discovered in 1977.\n\n"
		"The rings of Uranus are darker and less defined than those of Saturn.\n\n"
		"The magnetic field of Uranus is tilted relative to its rotation axis.\n\n"
		"Uranus' magnetic field is weaker than that of Jupiter and Saturn but stronger than Earth's.\n\n"
		"Uranus has a faint planetary ring system, discovered during its occultation of a star in 1977.\n\n",
		"The rings of Uranus are much younger than those of Saturn, possibly formed from the breakup of moons or moonlets.\n\n"
		"The rings of Uranus are named after characters from the works of William Shakespeare and Alexander Pope.\n\n"
		"Uranus has a series of bright cloud features, including bands and spots.\n\n"
		"These cloud features are caused by convection within Uranus' atmosphere.\n\n"
		"Uranus has a layered atmosphere, with distinct cloud layers at different altitudes.\n\n",
		"Methane in Uranus' upper atmosphere absorbs red light, giving the planet its blue-green appearance.\n\n"
		"Uranus' atmosphere also contains trace amounts of other hydrocarbons.\n\n"
		"The weather patterns on Uranus are less well-understood compared to other gas giants.\n\n"
		"Uranus has a faint magnetic field, likely generated by convective motions in its icy mantle.\n\n"
		"The magnetic axis of Uranus is tilted at an angle of about 60 degrees to its rotation axis.\n\n",
		"Uranus has a faint, dusty ring system composed of dark material.\n\n"
		"The rings of Uranus were discovered using ground-based telescopes.\n\n"
		"Uranus has a system of faint, dark rings, composed primarily of dust and small rocks.\n\n"
		"Uranus has an axial tilt of approximately 98 degrees, causing its poles to experience extended periods of sunlight or darkness during different parts of its orbit.\n\n"
		"The extreme tilt of Uranus' axis is believed to have been caused by a cataclysmic collision with a planet-sized object early in its history.\n\n",
		"Unlike other planets, Uranus rotates on its side, with its equator almost perpendicular to its orbit around the Sun.\n\n"
		"Uranus was the first planet discovered with the aid of a telescope, spotted by William Herschel in 1781.\n\n"
		"Uranus is often referred to as an \"ice giant\" due to its composition of water, ammonia, and methane ice surrounding a rocky core.\n\n"
		"The blue-green color of Uranus is due to the presence of methane in its atmosphere, which absorbs red light and reflects blue-green light.\n\n"
		"Uranus' atmosphere experiences extreme wind speeds, with gusts reaching up to 560 miles per hour (900 kilometers per hour).\n\n",
		"Uranus has a total of 13 known rings, which were discovered by Voyager 2 in 1986 during its flyby.\n\n"
		"The rings of Uranus are named after scientists and literary characters associated with the planet.\n\n"
		"The rings of Uranus are composed primarily of dark particles, making them difficult to observe from Earth.\n\n"
		"Uranus has a complex magnetosphere, influenced by its tilted magnetic field and its interaction with solar wind.\n\n"
		"The magnetosphere of Uranus extends far into space, interacting with its moons and affecting their orbits.\n\n",
		"Uranus has an unusual rotational period, with its magnetosphere and magnetic field tilted at an angle of about 60 degrees to its axis of rotation.\n\n"
		"Voyager 2 provided the first close-up images of Uranus and its moons during its flyby in 1986.\n\n"
		"Uranus has a faint and sporadic aurora, similar to Earth's northern lights, but much weaker.\n\n"
		"The presence of methane in Uranus' atmosphere gives it a distinct smell, often described as resembling rotten eggs or a skunk-like odor.\n\n"
		"Uranus has been studied extensively by ground-based telescopes, space-based observatories, and spacecraft missions.\n\n",
		"The study of Uranus provides valuable insights into the formation and evolution of ice giant planets in the solar system.\n\n"
		"Uranus has a system of faint, narrow rings, which are likely composed of dust and small rocky particles.\n\n"
		"The rings of Uranus are continuously replenished by micrometeoroid impacts and collisions among ring particles.\n\n"
		"Uranus has a complex system of cloud layers in its atmosphere, including methane, ammonia, and water clouds.\n\n"
		"The extreme tilt of Uranus' axis causes its magnetic field to wobble irregularly, leading to variations in its magnetosphere over time.\n\n"
	};

	StandardFactCout(10, Uran, Fact);
}

string UranMoonFacts[1] = { 
	"Titania is the largest moon of Uranus and the eighth-largest moon in the solar system. \nIt has a relatively young surface with impact craters, valleys, and faults. \nTitania's surface is composed mainly of water ice with some rocky material.\n\n"
	"Oberon is the second-largest moon of Uranus and the ninth-largest moon in the solar system. \nIt has a heavily cratered surface, indicating its ancient age. \nOberon's surface is made up of water ice and rock.\n\n"
	"Umbriel is the third-largest moon of Uranus and has a dark, heavily cratered surface. \nIt lacks the bright features seen on some of Uranus's other moons. \nUmbriel's surface is primarily made up of water ice.\n\n"
	"Ariel is the fourth-largest moon of Uranus and has a relatively young surface with few impact craters. \nIt exhibits extensive geological features such as valleys, ridges, and faults. \nAriel's surface is composed of water ice and rocky material.\n\n"
	"Miranda is the smallest and innermost of Uranus's major moons. \nIt has a varied and geologically complex surface, with features like cliffs, valleys, and terraces. \nMiranda's surface is composed of water ice and rocky material.\n\n"
};

void NepFact() {
	Nep++;

	string Fact[10] = {
		"Neptune is the eighth and farthest planet from the Sun in our solar system.\n\n"
		"It was discovered in 1846 by astronomers Urbain Le Verrier, Johann Galle, and John Couch Adams.\n\n"
		"Neptune is classified as an ice giant, similar to its neighbor Uranus.\n\n"
		"The planet is named after the Roman god of the sea, Neptune.\n\n"
		"Neptune has a diameter of about 30,775 miles (49,528 kilometers), making it the fourth-largest planet in the solar system.\n\n",
		"Its atmosphere is primarily composed of hydrogen and helium, along with traces of methane.\n\n"
		"Methane in Neptune's atmosphere gives it a blue coloration, similar to Uranus.\n\n"
		"Neptune's atmosphere features the fastest winds in the solar system, reaching speeds of up to 1,200 miles per hour (2,000 kilometers per hour).\n\n"
		"The Great Dark Spot, a large storm similar to Jupiter's Great Red Spot, was observed on Neptune in the late 1980s by the Voyager 2 spacecraft.\n\n"
		"Neptune has a total of six rings, which were first discovered in 1989 during the Voyager 2 flyby.\n\n",
		"Its rings are faint and composed of dust particles, similar to those of Uranus.\n\n"
		"The magnetic field of Neptune is tilted relative to its rotation axis, similar to Uranus.\n\n"
		"The magnetic field of Neptune is significantly stronger than that of Uranus.\n\n"
		"Voyager 2 provided the first close-up images of Neptune and its moons during its flyby in 1989.\n\n"
		"Neptune experiences distinct seasons due to its axial tilt of about 28 degrees.\n\n",
		"Like the other gas giants, Neptune does not have a solid surface, but rather a thick atmosphere that transitions into a liquid mantle.\n\n"
		"The interior of Neptune is likely composed of rock and metal, surrounded by layers of icy materials.\n\n"
		"The pressure and temperature increase dramatically as one descends deeper into Neptune's atmosphere.\n\n"
		"Neptune radiates more heat than it receives from the Sun, indicating an internal heat source, likely leftover from its formation.\n\n"
		"Neptune's rapid rotation causes it to bulge slightly at the equator.\n\n",
		"Its rotation period is about 16 hours, making it the third fastest-spinning planet in the solar system.\n"
		"The Voyager 2 spacecraft provided detailed observations of Neptune's complex cloud patterns, including bright and dark bands.\n\n"
		"The core of Neptune is estimated to be about the size of Earth and is thought to be composed of rock and metal.\n\n"
		"Neptune has a thin layer of clouds in its upper atmosphere, mostly composed of methane ice crystals.\n\n"
		"The temperature on Neptune's surface is extremely cold, averaging around -353 degrees Fahrenheit (-214 degrees Celsius).\n\n",
		"The high-speed winds in Neptune's atmosphere are believed to be driven by the planet's internal heat and its rapid rotation.\n\n"
		"The rings of Neptune are named after astronomers who made significant contributions to the study of the planet.\n\n"
		"Neptune's rings are believed to be relatively young and may be continuously replenished by the breakup of small moons or moonlets.\n\n"
		"Neptune's rings are much fainter and narrower compared to those of Saturn.\n\n"
		"The largest ring around Neptune is named Adams, after the astronomer John Couch Adams.\n\n",
		"Neptune has a faint, partial ring arc known as Liberte.\n\n"
		"The rings of Neptune are predominantly composed of microscopic dust particles and small rocky debris.\n\n"
		"Neptune's magnetosphere extends far into space and interacts with its moons and the solar wind.\n\n"
		"The magnetic axis of Neptune is tilted at an angle of about 47 degrees to its rotation axis.\n\n"
		"Neptune's magnetic field undergoes complex interactions with the solar wind, leading to the formation of auroras near its poles.\n\n",
		"The magnetosphere of Neptune is highly dynamic, with changes observed over short timescales.\n\n"
		"Neptune has a faint magnetic field, likely generated by convective motions in its icy mantle.\n\n"
		"Neptune's magnetic field is weaker than that of Jupiter and Saturn but stronger than Earth's.\n\n"
		"The weather patterns on Neptune are less well-understood compared to other gas giants.\n\n"
		"Neptune has a faint, dusty ring system composed of dark material.\n\n",
		"The rings of Neptune were discovered using ground-based telescopes.\n\n"
		"Neptune has a system of faint, dark rings, composed primarily of dust and small rocks.\n\n"
		"Neptune's rings are likely maintained by a balance between inward gravitational forces and outward forces caused by collisions.\n\n"
		"The rings of Neptune are continuously evolving due to interactions with the planet's moons and the solar wind.\n\n"
		"Neptune's rings may contain remnants of moons or moonlets that were shattered by impacts.\n\n",
		"Neptune's rings cast shadows on the planet's surface during certain alignments with the Sun.\n\n"
		"Neptune's rings are divided into several arcs, including the Galle, Le Verrier, Lassell, and Arago arcs.\n\n"
		"Neptune's rings are difficult to observe from Earth due to their faintness and their alignment with the plane of the planet's orbit.\n\n"
		"The rings of Neptune have been studied in detail by the Hubble Space Telescope, providing insights into their structure and dynamics.\n\n"
		"Understanding the rings of Neptune helps scientists better understand the formation and evolution of planetary ring systems in general.\n\n"
	};

	StandardFactCout(10, Nep, Fact);
}

string NepMoonFacts[1] = {
	"Triton: Triton is the largest moon of Neptune and the seventh-largest moon in the solar system. \nIt is unique among the large moons in the solar system because it orbits Neptune in a retrograde direction, opposite to the planet's rotation. \nTriton is thought to be a captured Kuiper Belt object due to its retrograde orbit and geologically active surface, which features cryovolcanism and nitrogen geysers.\n\n"
	"Proteus: Proteus is the second-largest moon of Neptune and is irregularly shaped. \nIt is heavily cratered and is thought to be one of the largest irregularly shaped bodies in the solar system. \nProteus orbits close to Neptune and is believed to be an ancient body, possibly a remnant from the formation of the Neptune system.\n\n"
	"Nereid: Nereid is the third-largest moon of Neptune and is much smaller than Triton and Proteus. \nIt has a highly eccentric orbit and is one of the most distant regular moons from Neptune. \nNereid's surface is thought to be heavily cratered, but its exact characteristics are still uncertain due to its distance and small size.\n\n"
};

void PluFact() { // While Pluto is not a Planet, it is still one of the major Celestial bodies in the Solar system and deserves a place on the fact sheet //
	Plu++;

	string Fact[5] = {
		"Pluto was discovered on February 18, 1930, by astronomer Clyde Tombaugh.\n\n"
		"It was initially considered the ninth planet in our solar system.\n\n"
		"Pluto was reclassified as a 'dwarf planet' by the International Astronomical Union (IAU) in 2006.\n\n"
		"It is located in the Kuiper Belt, a region beyond Neptune filled with icy bodies.\n\n"
		"Pluto's average distance from the Sun is about 3.7 billion miles (5.9 billion kilometers).\n\n",
		"It takes Pluto about 248 Earth years to orbit the Sun.\n\n"
		"Pluto has five known moons: Charon, Styx, Nix, Kerberos, and Hydra.\n\n"
		"Charon is the largest moon of Pluto and is about half the size of Pluto itself.\n\n"
		"Pluto is smaller than Earth's Moon, with a diameter of about 1,473 miles (2,370 kilometers).\n\n"
		"Its surface is covered in frozen nitrogen, methane, and carbon monoxide.\n\n",
		"Pluto's atmosphere is thin and composed mainly of nitrogen, with traces of methane and carbon monoxide.\n\n"
		"Temperatures on Pluto can drop as low as -375 degrees Fahrenheit (-225 degrees Celsius).\n\n"
		"Pluto's surface features include mountains, valleys, and large plains of frozen ice.\n"
		"It has a reddish-brown color due to complex organic molecules called tholins.\n\n"
		"Pluto's orbit is more elliptical and tilted compared to the planets, causing it to cross Neptune's orbit.\n\n",
		"A year on Pluto is equivalent to 248 Earth years, but a day lasts about 6.4 Earth days.\n\n"
		"Pluto was named after the Roman god of the underworld.\n\n"
		"It was first suggested to be named after the Greek god of the underworld, Hades.\n\n"
		"Pluto's discovery was partially motivated by predictions of a ninth planet's existence based on perturbations in Neptune's orbit.\n\n"
		"The discovery of Eris and other Kuiper Belt objects prompted a reevaluation of Pluto's planetary status.\n\n",
		"New Horizons, a NASA spacecraft, conducted a flyby of Pluto in 2015, providing detailed images and data.\n\n"
		"This flyby revealed geological activity on Pluto, including mountains made of water ice.\n\n"
		"Pluto's largest moon, Charon, has a canyon system called Serenity Chasma that is estimated to be 4-6 miles (7-9 kilometers) deep.\n\n"
		"Pluto's atmosphere can freeze and collapse as it moves farther from the Sun during its elliptical orbit.\n\n"
		"Despite being reclassified, Pluto remains a fascinating object of study for astronomers, offering insights into the outer reaches of our solar system.\n\n"
	};

	StandardFactCout(5, Plu, Fact);
}

string PluMoonFacts[1] = {
	"Suprisingly, Pluto is big enough to hold moons, despite having a smaller surface area than Russia."
	"Nix is a small moon of Pluto, discovered in 2005. \nIt has an irregular shape and a reddish hue, likely due to its surface composition. \nNix orbits in the same plane as Charon and Hydra, suggesting a common origin.\n\n"
	"Hydra is similar in size and shape to Nix, also discovered in 2005. \nIt has an elongated shape and exhibits a varied surface with different geological features. \nHydra's surface composition and origin are still topics of ongoing research and study.\n\n"
	"Charon is the largest moon of Pluto, with a diameter about half that of Pluto's. \nIt orbits very close to Pluto, and some scientists consider Pluto and Charon to be a binary system rather than a planet and its moon. \nCharon's surface is heavily cratered and features a variety of geological formations.\n\n"
	"Styx is one of the smaller moons of Pluto, discovered in 2012. \nIt has an irregular shape and orbits between the orbits of Charon and Nix. \nStyx's surface composition and geological features are still not well understood due to limited observations.\n\n"
	"Kerberos is the smallest and faintest of Pluto's moons, discovered in 2011. \nIt has a highly reflective surface and orbits close to Charon. \nKerberos' small size and distant orbit make it challenging to study in detail.\n\n"
};

void KuiperBeltFact() {
	Kuiper++;

	string Fact[5] = {
		"The Kuiper Belt is a region of the outer solar system beyond Neptune.\n\n"
		"It is similar to the asteroid belt but is composed mainly of icy bodies.\n\n"
		"The Kuiper Belt is named after Dutch-American astronomer Gerard Kuiper, who first proposed its existence.\n\n"
		"It is estimated to contain hundreds of thousands of objects larger than 100 kilometers in diameter.\n\n"
		"The largest known object in the Kuiper Belt is the dwarf planet Pluto.\n\n",
		"Pluto was once considered the ninth planet before its reclassification as a dwarf planet in 2006.\n\n"
		"The Kuiper Belt extends from about 30 astronomical units (AU) to 50 AU from the Sun.\n\n"
		"One AU is the average distance from the Earth to the Sun, approximately 93 million miles (150 million kilometers).\n\n"
		"The discovery of the first Kuiper Belt object, 1992 QB1, was announced in 1992.\n\n"
		"The Kuiper Belt is thought to be the source of short-period comets.\n\n",
		"Short-period comets have orbits that last less than 200 years and are influenced by the gravitational pull of Neptune.\n\n"
		"The Kuiper Belt is also home to long-period comets, which have orbits lasting thousands to millions of years.\n\n"
		"Some Kuiper Belt objects have moons, such as Pluto's moons Charon, Nix, Hydra, Kerberos, and Styx.\n\n"
		"The New Horizons spacecraft conducted a flyby of Pluto in 2015, providing valuable data about the dwarf planet and its moons.\n\n"
		"Beyond the Kuiper Belt lies the scattered disc, a sparsely populated region of icy bodies with highly eccentric orbits.\n\n",
		"The discovery of the Kuiper Belt has revolutionized our understanding of the outer solar system.\n\n"
		"Objects in the Kuiper Belt are thought to be remnants from the early solar system's formation.\n\n"
		"The Kuiper Belt is home to a variety of objects, including dwarf planets, planetesimals, and small icy bodies.\n\n"
		"The study of the Kuiper Belt helps scientists learn more about the formation and evolution of the solar system.\n\n"
		"The International Astronomical Union (IAU) recognizes Pluto, Eris, Haumea, Makemake, and others as dwarf planets in the Kuiper Belt.\n\n",
		"The Hubble Space Telescope has been instrumental in discovering and studying objects within the Kuiper Belt.\n\n"
		"The Kuiper Belt is believed to contain objects with a wide range of compositions, including water ice, methane ice, and organic compounds.\n\n"
		"Some Kuiper Belt objects have highly inclined orbits compared to the plane of the solar system.\n\n"
		"The Kuiper Belt was likely formed from leftover material that did not accrete into planets during the solar system's formation.\n\n"
		"Continued exploration and study of the Kuiper Belt offer insights into the outer regions of our solar system and the processes that shaped it.\n\n"
	};

	StandardFactCout(5, Kuiper, Fact);
}