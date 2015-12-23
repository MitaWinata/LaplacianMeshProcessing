#include "face.h"

Face::Face()
{
    _normal = Vector3d(0.0, 0.0, 0.0);
    _nodes  = Vector3i(0, 0, 0);
}

Face::Face(Vector3i nodes)
{
    _normal = Vector3d(0.0, 0.0, 0.0);
    _nodes  = nodes;
}

Face::~Face()
{
}

Vector3d Face::getNormal()
{
    return _normal;
}

Vector3i Face::getNodes()
{
    return _nodes;
}

inline void Face::setNormal(Vector3d normal)
{
    _normal = normal;
}

inline void Face::setNodes(Vector3i nodes)
{
    _nodes = nodes;
}

double Face::getArea()
{
    return _area;
}

void Face::setArea(double area)
{
    _area = area;
}

void Face::calculateFaceNormal(QVector<Node *> * nodeVector)
{
    // get the i.th node
    Node * i = nodeVector->at(_nodes[0]);
    // get the j.th node
    Node * j = nodeVector->at(_nodes[1]);
    // get the k.th node
    Node * k = nodeVector->at(_nodes[2]);

    // get the position of the i.th node
    Vector3d i_position = i->getPosition();
    // get the position of the j.th node
    Vector3d j_position = j->getPosition();
    // get the position of the k.th node
    Vector3d k_position = k->getPosition();

    // calculate the face normal
    Vector3d faceNormal = (j_position - i_position).cross(k_position - i_position);
    // set the face normal
    setNormal(faceNormal.normalized());
    // set the face area
    setArea(0.5 * faceNormal.norm());

    // add the face normal to the each node
    i->setNormal(i->getNormal() + faceNormal.normalized());
    j->setNormal(j->getNormal() + faceNormal.normalized());
    k->setNormal(k->getNormal() + faceNormal.normalized());
}

void Face::display()
{
    std::cout << "NODES  : " << _nodes;
    std::cout << "NORMAL : " << _normal;
}
