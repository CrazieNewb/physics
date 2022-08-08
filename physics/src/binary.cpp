#include "binary.hpp"

void writeChar(ofstream& file, int value) {
    file.write((char*)&value, sizeof((char)value));
}

void writeInt(ofstream& file, int value) {
    file.write(reinterpret_cast<char*>(&value), sizeof(value));
}

void readChar(ifstream& file, int& value) {
    char p;
    file.read((char*)&p, sizeof(p));
    value = (int)p;
    if (value < 0) value += 256;
}

void readInt(ifstream& file, int& value) {
    file.read(reinterpret_cast<char*>(&value), sizeof(value));
}