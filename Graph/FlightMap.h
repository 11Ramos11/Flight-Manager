/** @file FlightMap.h
 *  @brief Contains the FlightMap class declaration.
 *  @author -
 *  @bug No known bugs.
 */

#ifndef AED_FEUP_PROJ_2_22_23_FLIGHTMAP_H
#define AED_FEUP_PROJ_2_22_23_FLIGHTMAP_H

#include <list>
#include <vector>
#include <queue>
#include <iostream>
#include <unordered_map>
#include "Airport.h"

using namespace std;

/** @brief FlightMap class to represent a flight map.
 *
 */
class FlightMap {

    //! @brief Holds all airports.
    unordered_map<string,  AirportPTR> airports;

public:

    /** Create a new FlightMap.
     *
     * Does nothing.
     */
    FlightMap();

    /** @brief Sets the airports to the given argument.
     *
     * @param airports of const unordered_map<string,  AirportPTR> type.
     * @return Void.
     */
    void setAirports(const unordered_map<string,  AirportPTR> airports);

    /** @brief Depth-First Search implementation.
     *
     * @param code of string type.
     * @return Void.
     */
    void dfs(string code);

    /** @brief Breadth-First Search implementation.
     *
     * @param code of const string type.
     * @return Void.
     */
    void bfs(const string& code);

    /** @brief Returns all lists with minors airport paths.
     *
     * It uses BFS implementation.
     *
     * @param airportDepart of AirportPTR type.
     * @param airportDestination of AirportPTR type.
     * @return One or more lists with the minors airport paths.
     */
    list<list<AirportPTR>> getPaths(AirportPTR airportDepart, AirportPTR airportDestination, unordered_set<string> airlines);

    /** @brief Returns the best set od flights that can use to fly from one airport to another.
     *
     * It uses the return of the "getPaths" method and leach all the lists, keeping only the best of the best ones.
     *
     * @param paths of list<list<AirportPTR>> type.
     * @param destinationCode of string type.
     * @return The best set of flights.
     */
    list<list<Flight>> bestFlights(list<list<AirportPTR>> paths, string destinationCode);

    /** @brief Represents the number of different countries of the flights that arrived at the airport.
     *
     * @param airportPtr of AirportPTR type.
     * @return Number of different countries.
     */
    int numDifferentCountries(AirportPTR airportPtr);
};

#endif
