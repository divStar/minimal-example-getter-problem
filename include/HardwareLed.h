#ifndef HARDWARELED_H
#define HARDWARELED_H

#include "ILed.h"

class HardwareLed : public ILed {
public:
  explicit HardwareLed(uint8_t index);

  [[nodiscard]] uint8_t getIndex() const override;

  [[nodiscard]] const uint8_t (&getColor())[4] override;

  void setColor(std::initializer_list<uint8_t> values) override;

private:
  uint8_t index;

  ColorData colorData;
};

#endif // HARDWARELED_H
