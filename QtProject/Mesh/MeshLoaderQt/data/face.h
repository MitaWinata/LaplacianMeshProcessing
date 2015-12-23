/**
 *  Face class. It contains the face's nodes, normal and the face related methods.
 */
#ifndef FACE_H
#define FACE_H

#include "node.h"

#include <Eigen/Core>
#include <QVector>
#include <iostream>
using namespace Eigen;

class Face
{
public:

    /**
     * Face constructor.
     * It creates the face and its nodes, Its nodes will be defined 0 automaticaly
     */
    Face();

    /**
     * Face constructor.
     * It creates the face and its nodes, Its nodes will be defined according to the given parameter
     */
    Face(Vector3i nodes);

    /**
     * Face destructor.
     * It deletes the face object and free the memory
     */
    ~Face();

    /**
     * It returns the normal of the face
     * @return the normal of the face
     */
     Vector3d getNormal();

    /**
     * It sets the normal of the face according to the given parameter
     * @param normal a Vector3d argument.
     */
    void setNormal(Vector3d normal);

    /**
     * It returns the nodes of the face
     * @return the nodes of the face
     */
    Vector3i getNodes();

    /**
     * It sets the normal of the face according to the given parameter
     * @param nodes a Vector3i argument.
     */
    void setNodes(Vector3i nodes);

    /**
     * It returns the area of the face
     * @return the area of the face
     */
    double getArea();

    /**
     * It sets the area of the face according to the given parameter
     * @param area a DOUBLE argument.
     */
    void setArea(double area);

    /**
     * it calculate the normal of the face
     */
    void calculateFaceNormal(QVector<Node *> * nodeVector);

    /**
     * it displays the nodes and the normal of the face
     */
    void display();

private:

    /**
     * the normal of the face
     */
    Vector3d _normal;

    /**
     * the nodes of the face
     */
    Vector3i _nodes;


    /**
     * the area of the face
     */
    double _area;

};

#endif // FACE_H
