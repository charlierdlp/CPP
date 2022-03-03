#pragma once

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T* _data;

	public:
		Array() : _size(0), _data(NULL) 
		{
		}
		Array(unsigned int n) : _size(n), _data(new T[n])
		{
		}
		Array(const Array<T>& other) : _size(other._size), _data(new T[other._size])
		{
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
		~Array()
		{
			delete[] _data;
		}
		Array operator=(const Array<T>& other)
		{
			if (this != &other)
			{
				delete[] _data;
				_size = other._size;
				_data = new T[other._size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = other._data[i];
			}
			return *this;
		}
		Array operator[](unsigned int i) const
		{
			if (i >= _size || i < 0)
				throw std::exception();
			return _data[i];
		}
};