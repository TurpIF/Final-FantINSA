#ifndef __EQUIPMENT_H__
#define __EQUIPMENT_H__

namespace ffi {
    class equipment {
        public:
            explicit equipment(equipment const &) = delete;
            equipment & operator=(equipment const &) = delete;

            explicit equipment();
            virtual ~equipment();

            ffi::equipment & equip(ffi::item::head *);
            ffi::equipment & equip(ffi::item::armor *);
            ffi::equipment & equip(ffi::item::left_hand *);
            ffi::equipment & equip(ffi::item::right_hand *);
            ffi::equipment & equip(ffi::item::foot *);

            ffi::item::head const & head() const;
            ffi::item::armor const & armor() const;
            ffi::item::left_hand const & left_hand() const;
            ffi::item::right_hand const & right_hand() const;
            ffi::item::foot const & foot() const;

        protected:
            ffi::item::head * _head;
            ffi::item::armor * _armor;
            ffi::item::left_hand * _left_hand;
            ffi::item::right_hand * _right_hand;
            ffi::item::foot * _foot;
    };
}

#endif

