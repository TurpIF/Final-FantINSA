#ifndef __STATS_H__
#define __STATS_H__

#include <ctypes>

namespace ffi {
    class stats {
        public:
            explicit stats() = delete;
            explicit stats(stats const &) = delete;
            stats & operator=(stats const &) = delete;

            virtual ~stats();

            std::size_t strengh() const;
            std::size_t agility() const;
            std::size_t intelligence() const;
            std::size_t dexterity() const;

            void strengh(std::size_t);
            void agility(std::size_t);
            void intelligence(std::size_t);
            void dexterity(std::size_t);

        protected:
            std::size_t _strengh;
            std::size_t _agility;
            std::size_t _intelligence;
            std::size_t _dexterity;
    };

    class char_stats : public stats {
        public:
            explicit stats() = delete;
            explicit stats(stats const &) = delete;
            stats & operator=(stats const &) = delete;

            virtual ~stats();

            std::size_t life() const;
            std::size_t life_max() const;

            std::size_t mana() const;
            std::size_t mana_max() const;

            void life(std::size_t);
            void life_max(std::size_t);

            void mana(std::size_t);
            void mana_max(std::size_t);

        protected:
            std::size_t _life;
            std::size_t _life_max;

            std::size_t _mana;
            std::size_t _mana_max;
    };
}

#endif

