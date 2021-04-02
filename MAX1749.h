#ifndef MAX1749_H
#define MAX1749_H

/**
 * MAX1749 datasheet: https://datasheets.maximintegrated.com/en/ds/MAX1749.pdf
 */

class MAX1749 {
  public:
    /**
     * Constructor
     * 
     * @param pin - pin number corresponding to MAX1749's ON input
     */
    MAX1749(uint8_t pin);

    /**
     * Toggles MAX1749's ON pin state HIGH/ON
     */
    void on();

    /**
     * Toggles MAX1749's ON pin state LOW/OFF
     */
    void off();

    /**
     * Gets the MAX1749's ON pin state
     */
    bool getState();

    /**
     * Gets the MAX1749's ON pin assigned at construction
     */
    uint8_t getPin();

  private:
    /**
     * MAX1749 ON pin number
     */
    uint8_t _pin;
  
    /**
     * Current state of MAX1749's ON pin
     */
    bool _state = false;

    /**
     * Initializes MAX1749
     */
    void initialize();

    /**
     * Actuate MAX1749's ON pin
     */
    void actuate(bool state);
};

#endif
