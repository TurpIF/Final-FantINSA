#ifndef __INVENTORY_H__
#define __INVENTORY_H__

#include <ctype>

namespace ffi {
    template <std::size_t N>
    class inventory {
        public:
            explicit inventory(inventory const &) = delete;
            inventory & operator=(inventory const &) = delete;

            explicit inventory();
            virtual ~inventory();

            ffi::item::item const & get(std::size_t) const;
            inventory & add(ffi::item::item *);
            ffi::item::item * del(ffi::item::item *);
            ffi::item::item * del(std::size_t);

        protected:
            std::array<std::pair<ffi::item::item *, std::size_t>, N> & _ls_item;
    };
}

#endif

