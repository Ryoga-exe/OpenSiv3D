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

# include <Siv3D/Physics2D/P2Circle.hpp>
# include "P2Common.hpp"

namespace s3d
{
	P2Circle::P2Circle(b2Body& body, const Circle& circle, const P2Material& material, const P2Filter& filter)
		: m_pShape{ std::make_unique<b2CircleShape>() }
	{
		m_pShape->m_radius = static_cast<float>(circle.r);

		m_pShape->m_p.Set(static_cast<float>(circle.x), static_cast<float>(circle.y));

		const b2FixtureDef fixtureDef = detail::MakeFixtureDef(m_pShape.get(), material, filter);

		m_fixtures.fixtures.push_back(body.CreateFixture(&fixtureDef));
	}

	P2ShapeType P2Circle::getShapeType() const noexcept
	{
		return P2ShapeType::Circle;
	}

	void P2Circle::draw(const ColorF& color) const
	{
		getCircle().draw(color);
	}

	void P2Circle::drawFrame(const double thickness, const ColorF& color) const
	{
		getCircle().drawFrame(detail::AdjustThickness(thickness), color);
	}

	void P2Circle::drawWireframe(const double thickness, const ColorF& color) const
	{
		drawFrame(thickness, color);
	}

	Circle P2Circle::getCircle() const
	{
		return{ detail::CalcVec2(m_pShape->m_p, m_fixtures.fixtures[0]->GetBody()->GetTransform()), m_pShape->m_radius };
	}
}
