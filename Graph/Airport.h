/** @file Airport.h
 *  @brief Contains the Airport class declaration.
 *  @author -
 *  @bug No known bugs.
 */

#ifndef AED_FEUP_PROJ_2_22_23_AIRPORT_H
#define AED_FEUP_PROJ_2_22_23_AIRPORT_H

#include <string>
#include <unordered_set>
#include <list>
#include <cmath>

using namespace std;

/** @brief Airline struct to represent a airline.
 *
 */
struct Airline{

    //! @brief Holds the airline code.
    string code;

    //! @brief Holds the airline name.
    string name;

    //! @brief Holds the airline call sign.
    string callSign;

    //! @brief Holds the country that the airline belongs to.
    string country;
};

/** @brief Flight struct to represent a flight.
 *
 */
struct Flight {

    //! @brief Holds the flight destination.
    int destination;

    //! @brief Holds the flight distance.
    int distance;

    //! @brief Holds the airline that can be used to the flight.
    list<Airline> airlines;
};

/** @brief Airport class to represent an airport.
 *
 */
class Airport {

public:

    //! @brief Holds the airport code.
    string code;

    //! @brief Holds the airport name.
    string name;

    //! @brief Holds the city that the airport belongs to.
    string city;

    //! @brief Holds the country that the airport belongs to.
    string country;

    //! @brief Holds the airport latitude.
    float latitude;

    //! @brief Holds the airport longitude.
    float longitude;

    //! @brief Holds the flight that depart from the airport.
    list<Flight> flights;

    //! @brief Holds the airport has already visited or not.
    bool visited;

    /** Create a new Airport with a code, a name, a city, a country, a latitude and a longitude.
     *
     * @param code Of Type string.
     * @param name Of Type string.
     * @param country Of Type string.
     * @param latitude Of Type string.
     * @param longitude Of Type string.
     */
    Airport(string code, string name, string city, string country, float latitude, float longitude);

    /** Create a copy of a Airport.
     *
     * @param airport Of Type const Airport.
     */
    Airport(const Airport& airport);

    /** @brief Operator overload.
     *
     * Compare if two airports have the same code.
     *
     * @param airport of type const Airport.
     * @return True if the codes are equals.
     */
    bool operator == (const Airport & airport) const;

    /** @brief Hash function declaration.
     *
     */
    struct hashFunction
    {
        size_t operator()(const Airport& airport) const;
    };

    /** @brief Calculate distance between two Airports.
     *
     * Calculate the distance between latitudes and longitudes,
     * convert latitudes to radians and apply the Haversine formula.
     *
     * @param airport1 Of Airport type.
     * @param airport2 Of Airport type.
     * @return double that corresponds to the distance.
     */
    const double distanceBetweenAirports(Airport airport1, Airport airport2) const;
};

#endif //AED_FEUP_PROJ_2_22_23_AIRPORT_H
