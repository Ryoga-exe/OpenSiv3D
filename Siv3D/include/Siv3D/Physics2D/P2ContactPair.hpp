﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2021 Ryo Suzuki
//	Copyright (c) 2016-2021 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "../Common.hpp"
# include "P2Fwd.hpp"

namespace s3d
{
	/// @brief 2 つの物体が接触しているときのそれらの ID (P2BodyID) のペア
	struct P2ContactPair
	{
		/// @brief 接触している物体の ID
		P2BodyID a;

		/// @brief 接触しているもう一方の物体の ID
		P2BodyID b;

		[[nodiscard]]
		friend constexpr bool operator ==(const P2ContactPair& lhs, const P2ContactPair& rhs) noexcept
		{
			return (lhs.a == rhs.a) && (lhs.b == rhs.b);
		}

		[[nodiscard]]
		friend constexpr bool operator !=(const P2ContactPair& lhs, const P2ContactPair& rhs) noexcept
		{
			return (lhs.a != rhs.a) || (lhs.b != rhs.b);
		}
	};
}

//////////////////////////////////////////////////
//
//	Hash
//
//////////////////////////////////////////////////

template <>
struct std::hash<s3d::P2ContactPair>
{
	[[nodiscard]]
	size_t operator()(const s3d::P2ContactPair& value) const noexcept
	{
		return s3d::Hash::FNV1a(value);
	}
};
