/**
 *  Node class. It contains the node's position, normal, color and the node related methods.
 */
#ifndef NODE_H
#define NODE_H

#include <Eigen/Core>
#include <iostream>
using namespace Eigen;

class Node
{
public:

    /**
     * Node constructor.
     * It creates the node and its properties, Its properties will be defined 0 automaticaly
     */
    Node();

    /**
     * Node constructor.
     * It creates the node and its properties, Its properties will be defined 0 automaticaly except the position of it
     * It will be defined according to the given parameter
     */
    Node(Vector3d position);

    /**
     * Node constructor.
     * It creates the node and its properties, Its properties will be defined 0 automaticaly except the position and the color of it
     * It will be defined according to the given parameter
     */
    Node(Vector3d position, Vector3d color);

    /**
     * Node destructor.
     * It deletes the node object and free the memory
     */
    ~Node();

    /**
     * It returns the position vector of the node
     * @return the position of the node in 3D world
     */
    Vector3d getPosition();

    /**
     * It sets the position vector of the node according to the given parameter
     * @param position a Vector3d argument.
     */
    void setPosition(Vector3d position);

    /**
     * It returns the color of the node
     * @return the color of the node
     */
    Vector3d getColor();

    /**
     * It sets the color of the node according to the given parameter
     * @param color a Vector3d argument.
     */
    void setColor(Vector3d color);

    /**
     * It returns the normal of the node
     * @return the normal of the node
     */
    Vector3d getNormal();

    /**
     * It sets the normal of the node according to the given parameter
     * @param normal a Vector3d argument.
     */
    void setNormal(Vector3d normal);

    /**
     * it displays the position, normal and the color of the node
     */
    void display();

private:

    /**
     * the position vector of the node
     */
    Vector3d _position;

    /**
     * the normal of the node
     */
    Vector3d _normal;

    /**
     * the color of the node
     */
    Vector3d _color;
};

#endif // NODE_H
