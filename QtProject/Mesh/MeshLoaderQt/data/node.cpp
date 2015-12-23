#include "node.h"

Node::Node()
{
    _position = Vector3d(0.0, 0.0, 0.0);
    _color    = Vector3d(0.0, 0.0, 0.0);
    _normal   = Vector3d(0.0, 0.0, 0.0);
}

Node::Node(Vector3d position)
{
    _position = position;
    _color    = Vector3d(0.0, 0.0, 0.0);
    _normal   = Vector3d(0.0, 0.0, 0.0);
}

Node::Node(Vector3d position, Vector3d color)
{
    _position = position;
    _color    = color;
    _normal   = Vector3d(0.0, 0.0, 0.0);
}

Node::~Node()
{
}

Vector3d Node::getPosition()
{
    return _position;
}

void Node::setPosition(Vector3d position)
{
    _position = position;
}

Vector3d Node::getColor()
{
    return _color;
}

void Node::setColor(Vector3d color)
{
    _color = color;
}

Vector3d Node::getNormal()
{
    return _normal;
}

void Node::setNormal(Vector3d normal)
{
    _normal = normal;
}

void Node::display()
{
    std::cout << "POSITION  : " << _position;
    std::cout << "NORMAL    : " << _normal;
    std::cout << "COLOR     : " << _color;
}
