#pragma once


namespace lite {

    /**
     * @brief A generic rank-based list.
     * 
     * 
     * @tparam T The type of the list.
     */
    template<typename T>
    class List {

        public:

        /**
         * @brief Dereference operator. The difference
         * between this and the indexing operator is
         * checking: this does not have runtime checking!
         * 
         * @return T& The first element in the list.
         */
        T& operator*() {
            return *_data;
        }

        /**
         * @brief Pointer addition operator. There is no
         * bound checking on this!
         * 
         * @param i The index to add.
         * @return T* The pointer to return.
         */
        T* operator+(unsigned int i) {
            return _data + i;
        }

        /**
         * @brief A boundary-checked accessor method.
         * 
         * @param i The index to get at.
         * @param out The output.
         * @return true if the given index was in range.
         * @return false if the given index was out of range.
         */
        bool at(unsigned int i, T& out) {
            if (i < _size) {
                out = _data[i];

                return true;
            }

            return false;
        }

        /**
         * @brief Gets the size of the list.
         * 
         * @return The size.
         */
        unsigned int size() const {
            return _size;
        }

        private:

        T* _data;
        unsigned int _size;

    };

}