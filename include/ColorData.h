#ifndef COLORDATA_H
#define COLORDATA_H

#ifdef ARDUINO
#include <stdint.h>
#else
#include <cstdint>
#endif

#include <memory>

/**
 * @class   ColorData
 * @brief   Data type allowing for color data modifications.
 *
 * You can use e.g. <code>&cd.setColors({0, 0, 0, 0})</code> to set a value
 * and similarly <code>&md(MotionDataType::ACCELEROMETER, MotionDataSpatialAxis:X)</code> to retrieve it.
 *
 * @date    20.11.2023
 */
class ColorData {
public:
  /**
   * @return <strong>red</strong> component of the color as a <code>uint8_t</code> value
   */
  uint8_t getRed();

  /**
   * @return <strong>green</strong> component of the color as a <code>uint8_t</code> value
   */
  uint8_t getGreen();

  /**
   * @return <strong>blue</strong> component of the color as a <code>uint8_t</code> value
   */
  uint8_t getBlue();

  /**
   * @return <strong>brightness/alpha</strong> component of the color as a <code>uint8_t</code> value
   */
  uint8_t getBrightness();

  /**
   * @return array of four <code>uint8_t</code> values (red, blue, green, brightness)
   */
  [[nodiscard]] const uint8_t (&getColor() const)[4];

  /**
   * @brief sets the components of the color using an <code>initializer_list</code>.
   *
   * It is recommended to use up to four values.
   *
   * 1st value: red component,
   * 2nd value: green component,
   * 3rd value: blue component,
   * 4th value: brightness/alpha component
   *
   * >ou may offer up to 4 values.
   */
  void setColor(std::initializer_list<uint8_t> values);

private:
  /**
   * @brief array containing the individual RGB color components of the color.
   */
  uint8_t colorData[4] = {0, 0, 0, 0}; // 4 ColorDataType values
};

#endif // COLORDATA_H
