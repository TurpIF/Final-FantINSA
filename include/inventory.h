#ifndef __INVENTORY_H__
#define __INVENTORY_H__

namespace ffi {
    template <>
    class inventory {
        public:
            explicit inventory(inventory const &) = delete;
            inventory & operator=(inventory const &) = delete;

            explicit inventory();
            virtual ~inventory();

        protected:
            array_type<ffi::item::item *> 
    };
}

#endif

