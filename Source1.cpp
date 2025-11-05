template<typename T> class TSinglyList
{
	struct TNode
	{
		T value;
		TNode* pNext;
		TNode(T data, TNode* n)
		{
			value = data;
			pNext = n;
		}
		TNode& operator=(const TNode& node)
		{
			value = node.value;
			pNext = node.pNext;
		}
		//void swap(TNode& 1hs, TNode& 2hs)
		//{
		//	std::swap(1hs.value, 2hs.value);
		//	std::swap(1hs.pNext, 2hs.pNext);
		//}
	};
	TNode* pFirst;
	size_t sz;
public:
	TSinglyList()
	{
		pFirst = nullptr;
		sz = 0;
	}
	TSinglyList(const vector<T>& v)
	{

	}
	TSinglyList(const TSinglyList& list)
	{
		sz = list.sz;
		pFirst = list.pFirst;
	}
	TSinglyList(TSinglyList&& list) noexcept
	{
		pFirst = nullptr;
		swap(*this, list);
	}
	TSinglyList& operator=(const TSinglyList& list)
	{
		pFirst = list.pFirst;
		sz = list.sz;
		return *this;
	}
	void swap(TSinglyList& 1hs, TSinglyList& 2hs)
	{
		std::swap(1hs.sz, 2hs.sz);
		std::swap(1hs.pFirst, 2hs.pFirst);
	}
	TSinglyList& operator=(const TSinglyList&& list)noexcept
	{
		swap(*this, list);
		return *this;
	}
	~TSinglyList();
	size_t size() const noexcept;
	bool IsEmpty() const noexcept;
	T& Front()noexcept;
	void PushFront(const T& val)
	{
		TNode* t = new TNode(val, pFirst);
		pFirst = t;
	}
	void PopFront()noexcept;
	T& operator[](size_t pos);
	void PushAfter(size_t pos, const T& val);
	void EraseAfter(size_t pos);
};