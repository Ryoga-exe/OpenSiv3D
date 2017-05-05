﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Fwd.hpp"
# include "BlendState.hpp"
# include "Rectangle.hpp"

namespace s3d
{
	/// <summary>
	/// 2D グラフィックス
	/// </summary>
	/// <remarks>
	/// 2D　グラフィックスに関連する機能を提供します。
	/// </remarks>
	namespace Graphics2D
	{
		/// <summary>
		/// 2D 描画のブレンドステートを設定します。
		/// </summary>
		/// <param name="blendState">
		/// ブレンドステート
		/// </param>
		/// <returns>
		/// なし
		/// </returns>
		void SetBlendState(const BlendState& blendState);

		/// <summary>
		/// 現在の 2D 描画のブレンドステートを取得します。
		/// </summary>
		/// <returns>
		/// 現在の 2D 描画のブレンドステート
		/// </returns>
		BlendState GetBlendState();

		void SetViewport(const Optional<Rect>& viewport);

		Optional<Rect> GetViewport();
	}
}
