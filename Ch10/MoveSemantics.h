#pragma once

#include <vector>

/// page 283

namespace ch10
{
	class MSItem
	{
	public:
		MSItem() = default;
		virtual ~MSItem() = default;

		MSItem(const MSItem&);
		MSItem& operator = (const MSItem&);

		MSItem(MSItem&&) noexcept;
		MSItem& operator = (MSItem&&) noexcept;

	private:
		std::vector<int> mVec = std::vector<int>(20);

	};

	void TestMS();
}
