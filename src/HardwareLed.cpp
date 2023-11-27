#include "HardwareLed.h"

uint8_t HardwareLed::getIndex() const {
  return static_cast<uint8_t>(index);
}

const uint8_t (&HardwareLed::getColor())[4] {
  return this->colorData.getColor();
}

void HardwareLed::setColor(std::initializer_list<uint8_t> values) {
  this->colorData.setColor(values);
}

HardwareLed::HardwareLed(uint8_t index) {
  this->index = index;
}
