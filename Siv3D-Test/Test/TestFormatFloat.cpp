﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2016 Ryo Suzuki
//	Copyright (c) 2016 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include "Siv3DTest.hpp"

# if defined(SIV3D_DO_TEST)

using namespace s3d;

TEST(FormatFloat, ToString)
{
	EXPECT_EQ(ToString(0.0),			L"0");
	EXPECT_EQ(ToString(0.0001),			L"0");
	EXPECT_EQ(ToString(0.1),			L"0.1");
	EXPECT_EQ(ToString(1.0),			L"1");
	EXPECT_EQ(ToString(1.0001),			L"1");
	EXPECT_EQ(ToString(1.1),			L"1.1");
	EXPECT_EQ(ToString(1.11),			L"1.11");
	EXPECT_EQ(ToString(1.111),			L"1.111");
	EXPECT_EQ(ToString(1.1111),			L"1.111");
	EXPECT_EQ(ToString(3.14159265),		L"3.142");
	EXPECT_EQ(ToString(10.0),			L"10");
	EXPECT_EQ(ToString(100.0),			L"100");
	EXPECT_EQ(ToString(123.456789),		L"123.457");
	EXPECT_EQ(ToString(123456.789),		L"123456.789");
	EXPECT_EQ(ToString(10000000000.0),	L"10000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::max()), L"179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::min()), L"0");
	EXPECT_EQ(ToString(4.9406564584124654e-324),			L"0");

	EXPECT_EQ(ToString(-0.0),			L"0");
	EXPECT_EQ(ToString(-0.0001),		L"0");
	EXPECT_EQ(ToString(-0.1),			L"-0.1");
	EXPECT_EQ(ToString(-1.0),			L"-1");
	EXPECT_EQ(ToString(-1.1),			L"-1.1");
	EXPECT_EQ(ToString(-1.11),			L"-1.11");
	EXPECT_EQ(ToString(-1.111),			L"-1.111");
	EXPECT_EQ(ToString(-1.1111),		L"-1.111");
	EXPECT_EQ(ToString(-3.14159265),	L"-3.142");
	EXPECT_EQ(ToString(-10.0),			L"-10");
	EXPECT_EQ(ToString(-100.0),			L"-100");
	EXPECT_EQ(ToString(-123.456789),	L"-123.457");
	EXPECT_EQ(ToString(-123456.789),	L"-123456.789");
	EXPECT_EQ(ToString(-10000000000.0),	L"-10000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::lowest()),	L"-179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToString(-std::numeric_limits<double>::min()),	L"0");
	EXPECT_EQ(ToString(-4.9406564584124654e-324),				L"0");

	EXPECT_EQ(ToString(std::sqrt(-1)),								L"nan");
	EXPECT_EQ(ToString(std::numeric_limits<double>::infinity()),	L"inf");
	EXPECT_EQ(ToString(-std::numeric_limits<double>::infinity()),	L"-inf");
}

TEST(FormatFloat, ToString0)
{
	EXPECT_EQ(ToString(0.0, 0),				L"0");
	EXPECT_EQ(ToString(0.0001, 0),			L"0");
	EXPECT_EQ(ToString(0.1, 0),				L"0");
	EXPECT_EQ(ToString(1.0, 0),				L"1");
	EXPECT_EQ(ToString(1.0001, 0),			L"1");
	EXPECT_EQ(ToString(1.1, 0),				L"1");
	EXPECT_EQ(ToString(1.11, 0),			L"1");
	EXPECT_EQ(ToString(1.111, 0),			L"1");
	EXPECT_EQ(ToString(1.1111, 0),			L"1");
	EXPECT_EQ(ToString(3.14159265, 0),		L"3");
	EXPECT_EQ(ToString(10.0, 0),			L"10");
	EXPECT_EQ(ToString(100.0, 0),			L"100");
	EXPECT_EQ(ToString(123.456789, 0),		L"123");
	EXPECT_EQ(ToString(123456.789, 0),		L"123457");
	EXPECT_EQ(ToString(10000000000.0, 0),	L"10000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::max(), 0),	L"179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::min(), 0),	L"0");
	EXPECT_EQ(ToString(4.9406564584124654e-324, 0),				L"0");
	
	EXPECT_EQ(ToString(-0.0, 0),			L"0");
	EXPECT_EQ(ToString(-0.0001, 0),			L"0");
	EXPECT_EQ(ToString(-0.1, 0),			L"0");
	EXPECT_EQ(ToString(-1.0, 0),			L"-1");
	EXPECT_EQ(ToString(-1.1, 0),			L"-1");
	EXPECT_EQ(ToString(-1.11, 0),			L"-1");
	EXPECT_EQ(ToString(-1.111, 0),			L"-1");
	EXPECT_EQ(ToString(-1.1111, 0),			L"-1");
	EXPECT_EQ(ToString(-3.14159265, 0),		L"-3");
	EXPECT_EQ(ToString(-10.0, 0),			L"-10");
	EXPECT_EQ(ToString(-100.0, 0),			L"-100");
	EXPECT_EQ(ToString(-123.456789, 0),		L"-123");
	EXPECT_EQ(ToString(-123456.789, 0),		L"-123457");
	EXPECT_EQ(ToString(-10000000000.0, 0),	L"-10000000000");
	EXPECT_EQ(ToString(std::numeric_limits<double>::lowest(), 0),	L"-179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToString(-std::numeric_limits<double>::min(), 0),		L"0");
	EXPECT_EQ(ToString(-4.9406564584124654e-324, 0),				L"0");

	EXPECT_EQ(ToString(std::sqrt(-1), 0),								L"nan");
	EXPECT_EQ(ToString(std::numeric_limits<double>::infinity(), 0),		L"inf");
	EXPECT_EQ(ToString(-std::numeric_limits<double>::infinity(), 0),	L"-inf");
}

TEST(FormatFloat, ToFixed)
{
	EXPECT_EQ(ToFixed(0.0),				L"0.000");
	EXPECT_EQ(ToFixed(0.0001),			L"0.000");
	EXPECT_EQ(ToFixed(0.1),				L"0.100");
	EXPECT_EQ(ToFixed(1.0),				L"1.000");
	EXPECT_EQ(ToFixed(1.0001),			L"1.000");
	EXPECT_EQ(ToFixed(1.1),				L"1.100");
	EXPECT_EQ(ToFixed(1.11),			L"1.110");
	EXPECT_EQ(ToFixed(1.111),			L"1.111");
	EXPECT_EQ(ToFixed(1.1111),			L"1.111");
	EXPECT_EQ(ToFixed(3.14159265),		L"3.142");
	EXPECT_EQ(ToFixed(10.0),			L"10.000");
	EXPECT_EQ(ToFixed(100.0),			L"100.000");
	EXPECT_EQ(ToFixed(123.456789),		L"123.457");
	EXPECT_EQ(ToFixed(123456.789),		L"123456.789");
	EXPECT_EQ(ToFixed(10000000000.0),	L"10000000000.000");
	EXPECT_EQ(ToFixed(std::numeric_limits<double>::max()), L"179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToFixed(std::numeric_limits<double>::min()), L"0.000");
	EXPECT_EQ(ToFixed(4.9406564584124654e-324), L"0.000");

	EXPECT_EQ(ToFixed(-0.0),			L"0.000");
	EXPECT_EQ(ToFixed(-0.0001),			L"-0.000");
	EXPECT_EQ(ToFixed(-0.1),			L"-0.100");
	EXPECT_EQ(ToFixed(-1.0),			L"-1.000");
	EXPECT_EQ(ToFixed(-1.0001),			L"-1.000");
	EXPECT_EQ(ToFixed(-1.1),			L"-1.100");
	EXPECT_EQ(ToFixed(-1.11),			L"-1.110");
	EXPECT_EQ(ToFixed(-1.111),			L"-1.111");
	EXPECT_EQ(ToFixed(-1.1111),			L"-1.111");
	EXPECT_EQ(ToFixed(-3.14159265),		L"-3.142");
	EXPECT_EQ(ToFixed(-10.0),			L"-10.000");
	EXPECT_EQ(ToFixed(-100.0),			L"-100.000");
	EXPECT_EQ(ToFixed(-123.456789),		L"-123.457");
	EXPECT_EQ(ToFixed(-123456.789),		L"-123456.789");
	EXPECT_EQ(ToFixed(-10000000000.0),	L"-10000000000.000");
	EXPECT_EQ(ToFixed(-std::numeric_limits<double>::max()), L"-179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	EXPECT_EQ(ToFixed(-std::numeric_limits<double>::min()), L"-0.000");
	EXPECT_EQ(ToFixed(-4.9406564584124654e-324), L"-0.000");

	EXPECT_EQ(ToFixed(std::sqrt(-1)), L"nan");
	EXPECT_EQ(ToFixed(std::numeric_limits<double>::infinity()), L"inf");
	EXPECT_EQ(ToFixed(-std::numeric_limits<double>::infinity()), L"-inf");
}

# endif
