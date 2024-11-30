#pragma once

#include <memory>
#include "node.h"

namespace RUtility
{
    class LinkedList
    {
    private:
        std::unique_ptr<Node> root;
    public:
        LinkedList();
        LinkedList(Node&);
        ~LinkedList();
        void SetRoot(Node&);
    };
}
