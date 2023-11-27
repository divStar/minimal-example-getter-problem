#ifndef ILED_H
#define ILED_H

#ifdef ARDUINO
#include <stdint.h>
#else
#include <cstdint>
#endif

#include "ColorData.h"

/**
 * @class   ILed
 * @brief   Interface to decouple the actual single led from the task processing it.
 *
 * @date    20.11.2023
 */
class ILed {
public:
  /**
   * @brief Returns the index of the led.
   *
   * @return (uint8_t) index of the led
   */
  [[nodiscard]] virtual uint8_t getIndex() const = 0;

  /**
   * @return array of four <code>uint8_t</code> values (red, blue, green,
   * brightness)
   */
  [[nodiscard]] virtual const uint8_t (&getColor())[4] = 0;

  /**
   * @brief Sets the ColorData of this led.
   *
   * @param colorData (ColorData) color data to set this led to
   */
  virtual void setColor(std::initializer_list<uint8_t> values) = 0;
};

#endif // ILED_H
