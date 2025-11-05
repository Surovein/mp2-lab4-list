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
	};
	TNode* pFirst;
	size_t sz;
public:
	TSinglyList()
	{
		pFirst = nullptr;
		sz = 0;
	}
	TSinglyList(const vector<T>& v);
	TSinglyList(const TSinglyList& list);
	TSinglyList(TSinglyList&& list) noexcept;
	TSinglyList& operator=(const TSinglyList& list);
	TSinglyList& operator=(const TSinglyList&& list)noexcept;
	~TSinglyList();
	size_t size() const noexcept;
	bool IsEmpty() const noexcept;
	T& Front()noexcept;
	void PushFront(const T& val);
	void PopFront()noexcept;
	T& operator[](size_t pos);
	void PushAfter(size_t pos, const T& val);
	void EraseAfter(size_t pos);
};