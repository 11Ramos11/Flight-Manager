/** @file Menu.h
 *  @brief Contains the Menu class declaration.
 *  @author -
 *  @bug No known bugs.
 */

#ifndef AED_FEUP_PROJ_2_22_23_MENU_H
#define AED_FEUP_PROJ_2_22_23_MENU_H


#include <string>

using namespace std;

/** @brief Holds all the displayable menus for the Application.
 *
 * Intended to be instanced once.
 */
class Menu {

public:

    //! @brief Defines the string to output in the menu, as an option, for the airport lists.
    static const string AIRPORT_LISTS;

    //! @brief Defines the string to output in the menu, as an option, for the max flights lists.
    static const string MAX_FLIGHTS_LISTS;

    //! @brief Defines the string to output in the menu, as an option to generate flight trajectories.
    static const string GENERATE_TRAJECTORIES;

    //! @brief Defines the string to output in the menu, as an option to showcase possible filters.
    static const string INFO_FILTERED;

    //! @brief Defines the string to output in the menu, as an option to filter info by city.
    static const string LOCAL_CITY;

    //! @brief Defines the string to output in the menu, as an option to filter info by airline.
    static const string LOCAL_AIRLINE;

    //! @brief Defines the string to output in the menu, as an option to showcase information related to one local (specific place).
    static const string INFO_BY_LOCAL;

    //! @brief Defines the string to output in the menu, as an option to showcase information related to one airline.
    static const string INFO_BY_AIRLINES;

    //! @brief Defines the string to output in the menu, as an option, to quit the application.
    static const string QUIT_APPLICATION;

    //! @brief Defines the string to output in the menu, as an option, to go back.
    static const string GO_BACK;

    //! @brief Defines the string to output in the menu, as a message, as a quit message.
    static const string QUIT_MESSAGE;

    //! @brief Defines the string to output in the menu, as a message, for invalid inputs.
    static const string INVALID_INPUT;

    //! @brief Defines the string to output in the menu, as a message, for wrong inputs.
    static const string WRONG_INPUT;

    //! @brief Defines the string to output in the menu, as a message, for wrong input usage.
    static const string WRONG_USAGE_INPUT;

    //! @brief Defines the string to output in the menu, as an option, to show the airports by city.
    static const string BY_CITY;

    //! @brief Defines the string to output in the menu, as an option, to show the airport info numbers.
    static const string BY_NUMBER;

    //! @brief Defines the string to output in the menu, as an option, to show the airport info lists.
    static const string BY_LISTS;

    //! @brief Defines the string to output in the menu, as an option, to show the number of flights.
    static const string FLIGHTS_NUMBER;

    //! @brief Defines the string to output in the menu, as an option, to show the number of airlines in the airport.
    static const string AIRLINES_NUMBER;

    //! @brief Defines the string to output in the menu, as an option, to show the number of different destinations
    static const string DESTINATIONS_NUMBER;

    //! @brief Defines the string to output in the menu, as an option, to show the number of different countries.
    static const string COUNTRIES_NUMBER;

    //! @brief Defines the string to output in the menu, as an option, to list airport flights.
    static const string AIRPORT_FLIGHTS;

    //! @brief Defines the string to output in the menu, as an option, to list airport airlines.
    static const string AIRPORT_AIRLINES;

    //! @brief Defines the string to output in the menu, as an option, to list different airport flight destinations.
    static const string AIRPORT_DESTINATIONS;

    //! @brief Defines the string to output in the menu, as an option, to list different airport flight countries.
    static const string AIRPORT_COUNTRIES;

    //! @brief Defines the string to output in the menu, as an option, to list all airports..
    // static const string ALL_AIRPORTS;


    //! @brief Does nothing.
    Menu();

    /** @brief Shows a message when user write a wrong input.
     *
     * @return Void.
     */
    void getWrongMessage();

    /** @brief Shows a message when user write an invalid input.
     *
     * @return Void.
     */
    void getInvalidMessage();

    /** @brief Displays the start menu.
     *
     * @return Void.
     */
    void startMenu();

    /** @brief Displays the main menu.
     *
     * @return Void.
     */
    void displayMenu();

    /** @brief Displays the filters menu.
     *
     * @return Void.
     */
    void displayFilterMenu();

    /** @brief Displays the filtered local menu.
    *
    * @return Void.
    */
    void displayLocalMenu();

    /** @brief Displays the menu with search type information.
     *
     * @return Void.
     */
    void displaySearchInfoMenu();

    /** @brief Make a break line.
     *
     * @return Void.
     */
    void breakLine();

    /** @brief Displays the menu with numbers information.
     *
     * @return Void.
     */
    void displayNumbersMenu();

    /** @brief Displays the menu with listing information.
     *
     * @return Void.
     */
    void displayListsMenu();


    /** @brief Displays the menu with trajectories information menu.
     *
     * @return Void.
     */
    void displayTrajectoriesMenu();

};

#endif //AED_FEUP_PROJ_2_22_23_MENU_H
