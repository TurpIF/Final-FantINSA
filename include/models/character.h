#ifndef __CHARACTER_H__
#define __CHARACTER_H__

namespace ffi {
    class character {
        public:
            explicit character() = delete;
            explicit character(character const &) = delete;
            character & operator=(character const &) = delete;

            explicit character();
            virtual ~character();

        protected:
            // Identity
            std::string _name;

            // Stats
            ffi::stats & _stats;

            // Objects
            ffi::equipment & _equip;
            ffi::inventory & _inventory;
    };
}

#endif

