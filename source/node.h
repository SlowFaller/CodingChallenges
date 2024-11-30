#include <memory>

namespace RUtility
{
    class Node
    {
    private:
        std::unique_ptr<Node> node;
    public:
        Node();
        ~Node();
    };

    Node::Node()
    {
    }

    Node::~Node()
    {
    }
}
