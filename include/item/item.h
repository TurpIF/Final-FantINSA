#ifndef __ITEM_ITEM_H__
#define __ITEM_ITEM_H__

namespace ffi {
    namespace item {
        typedef unsigned int price;

        class item {
            public:
                explicit item() = delete;
                explicit item(item const &) = delete;
                item & operator=(item const &) = delete;

                explicit item(std::stirng const & __name std::string const & __description, ffi::price const & _price);
                virtual ~item();

            protected:
                std::string _name;
                std::string _description;
                ffi::item::price _value;
        };

        class head : public item {
        };

        class armor : public item {
        };

        class left_hand : public item {
        };

        class right_hand : public item {
        };

        class foot : public item {
        };
    }
}

#endif

