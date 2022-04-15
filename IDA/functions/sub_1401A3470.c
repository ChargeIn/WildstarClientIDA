#include "../winhttp.h"

//----- (00000001401A3470) ----------------------------------------------------
unsigned __int64 sub_1401A3470()
{
	__m128 v0; // xmm11
	__int16 v1; // cx
	__int16* v2; // r10
	__int16 v3; // ax
	__int16 v4; // cx
	__int16* v5; // r10
	__int16 v6; // ax
	_WORD* v7; // r10
	__int16* v8; // r11
	_WORD* v9; // r10
	__int16* v10; // r11
	_WORD* v11; // r10
	__int16* v12; // r11
	__int16 v13; // cx
	_WORD* v14; // rbx
	_WORD* v15; // r11
	_WORD* v16; // r10
	_WORD* v17; // rbx
	_WORD* v18; // r11
	_WORD* v19; // r10
	_WORD* v20; // rbx
	_WORD* v21; // r11
	_WORD* v22; // r10
	_WORD* v23; // rbx
	_WORD* v24; // rax
	_WORD* v25; // r11
	__int16* v26; // r10
	__int16 v27; // cx
	__m128 v28; // xmm5
	unsigned __int64 result; // rax
	__int64 v30; // [rsp+28h] [rbp-E0h]
	__int128 v31; // [rsp+98h] [rbp-70h]
	__int64 v32; // [rsp+168h] [rbp+60h] BYREF
	__int16 v33; // [rsp+170h] [rbp+68h] BYREF
	int v34; // [rsp+178h] [rbp+70h] BYREF
	int v35; // [rsp+180h] [rbp+78h] BYREF

	if ((dword_140C8E120 & 1) != 0)
	{
		v0 = (__m128)(unsigned int)dword_140C8E124;
	}
	else
	{
		v0 = (__m128)0x7F800000u;
		dword_140C8E124 = 2139095040;
		dword_140C8E120 |= 1u;
	}
	xmmword_140C78520 = xmmword_140B7A330;
	xmmword_140C78530 = xmmword_140B7A4B0;
	qword_140C77760 = 0i64;
	qword_140C77768 = 0x100000001i64;
	qword_140C67480 = 0i64;
	v32 = 0x3F80000000000000i64;
	qword_140C67488 = 0x3F8000003F800000i64;
	qword_140C67490 = 1065353216i64;
	qword_140C77770 = 1i64;
	dword_140C77778 = 0;
	qword_140C67498 = 0x3F80000000000000i64;
	dword_140C7777C = 1;
	LOWORD(v32) = *sub_1401C96D0(&v32, 0.0);
	WORD1(v32) = v32;
	dword_140C7779C = v32;
	LOWORD(v32) = *sub_1401C96D0(&v32, 1.0);
	WORD1(v32) = v32;
	dword_140C777AC = v32;
	sub_1401C96D0(&v32, 0.0);
	v1 = *sub_1401C96D0(&v33, 1.0);
	v3 = *v2;
	LOWORD(v34) = v1;
	HIWORD(v34) = v3;
	dword_140C777BC = v34;
	sub_1401C96D0(&v32, 1.0);
	v4 = *sub_1401C96D0(&v33, 0.0);
	v6 = *v5;
	xmmword_140C77860 = xmmword_140B7A330;
	HIWORD(v34) = v6;
	LOWORD(v34) = v4;
	dword_140C777CC = v34;
	word_140C796F0 = -32640;
	word_140C796F4 = -1;
	LOWORD(v32) = -128;
	word_140C796F8 = -32513;
	word_140C796FC = -128;
	dword_140C79700 = 0;
	dword_140C79704 = 0;
	dword_140C79708 = 0;
	qword_140C79710 = 0x3F8000003F800000i64;
	xmmword_140C77870 = xmmword_140B7A4B0;
	qword_140C77780 = 0i64;
	dword_140C77788 = 0;
	dword_140C77790 = 1;
	dword_140C77794 = 1;
	dword_140C77798 = 1;
	xmmword_140C77880 = xmmword_140B7A700;
	dword_140C79718 = 1065353216;
	dword_140C79720 = 1065353216;
	qword_140C777A0 = 1i64;
	dword_140C777A8 = 0;
	dword_140C777B0 = 0;
	dword_140C79724 = 0;
	dword_140C79728 = 0;
	dword_140C79730 = 0;
	dword_140C79734 = 1065353216;
	dword_140C79738 = 0;
	dword_140C79740 = 0;
	qword_140C777B4 = 1i64;
	qword_140C777C0 = 0i64;
	dword_140C777C8 = 1;
	dword_140C79744 = 0;
	dword_140C79748 = 1065353216;
	LOWORD(v32) = *sub_1401C96D0(&v32, 0.0);
	WORD1(v32) = v32;
	word_140C79750 = v32;
	dword_140C7974C = v32;
	LOWORD(v32) = *sub_1401C96D0(&v32, 1.0);
	WORD1(v32) = v32;
	word_140C79758 = v32;
	dword_140C79754 = v32;
	sub_1401C96D0(&v32, 0.0);
	sub_1401C96D0(&v33, 0.0);
	LOWORD(v35) = *sub_1401C96D0(&v34, 1.0);
	HIWORD(v35) = *v7;
	word_140C79760 = *v8;
	dword_140C7975C = v35;
	sub_1401C96D0(&v32, 0.0);
	sub_1401C96D0(&v33, 1.0);
	LOWORD(v35) = *sub_1401C96D0(&v34, 0.0);
	HIWORD(v35) = *v9;
	word_140C79768 = *v10;
	dword_140C79764 = v35;
	sub_1401C96D0(&v32, 1.0);
	sub_1401C96D0(&v33, 0.0);
	LOWORD(v35) = *sub_1401C96D0(&v34, 0.0);
	HIWORD(v35) = *v11;
	v13 = *v12;
	dword_140C797D8 = 0;
	dword_140C797DC = 0;
	dword_140C797E0 = 0;
	xmmword_140C78410 = xmmword_140B7A330;
	xmmword_140C78420 = xmmword_140B7A4B0;
	xmmword_140C78430 = xmmword_140B7A700;
	dword_140C7976C = v35;
	dword_140C797E4 = 0;
	dword_140C797E8 = 1065353216;
	dword_140C797EC = 1065353216;
	xmmword_140C78440 = xmmword_140B7AD00;
	dword_140C797F0 = 1065353216;
	dword_140C797F4 = 1065353216;
	dword_140C797F8 = 1065353216;
	word_140C7970C = -32640;
	dword_140C797FC = 0;
	dword_140C79800 = 0;
	dword_140C79804 = 0;
	word_140C7971C = -1;
	dword_140C79808 = 0;
	dword_140C7980C = 1065353216;
	dword_140C79810 = 0;
	dword_140C79814 = 0;
	dword_140C79818 = 0;
	dword_140C7981C = 0;
	word_140C7972C = -32513;
	dword_140C79820 = 1065353216;
	dword_140C79824 = 0;
	LOWORD(v32) = -32640;
	word_140C7973C = -128;
	word_140C79770 = v13;
	byte_140C7970E = 0x80;
	byte_140C7971E = -1;
	word_140C79774 = -32640;
	byte_140C7972E = 0x80;
	byte_140C7973E = 0x80;
	byte_140C79776 = -1;
	qword_140C79778 = 0i64;
	qword_140C79780 = 0i64;
	dword_140C79788 = 1;
	dword_140C7978C = 1;
	dword_140C79790 = 1;
	dword_140C79794 = 1;
	qword_140C79798 = 1i64;
	qword_140C797A0 = 0i64;
	dword_140C797A8 = 0;
	qword_140C797AC = 1i64;
	dword_140C797B4 = 0;
	qword_140C797B8 = 0i64;
	qword_140C797C0 = 1i64;
	qword_140C797C8 = 0i64;
	dword_140C797D0 = 0;
	dword_140C797D4 = 1;
	dword_140C79828 = 0;
	dword_140C7982C = 0;
	dword_140C79830 = 0;
	dword_140C79834 = 1065353216;
	LOWORD(v32) = *sub_1401C96D0(&v32, 0.0);
	WORD1(v32) = v32;
	WORD2(v32) = v32;
	HIWORD(v32) = v32;
	qword_140C79838 = v32;
	LOWORD(v32) = *sub_1401C96D0(&v32, 1.0);
	WORD1(v32) = v32;
	WORD2(v32) = v32;
	HIWORD(v32) = v32;
	qword_140C79840 = v32;
	v14 = sub_1401C96D0(&v32, 0.0);
	sub_1401C96D0(&v33, 0.0);
	sub_1401C96D0(&v34, 0.0);
	LOWORD(v30) = *sub_1401C96D0(&v35, 1.0);
	WORD2(v30) = *v15;
	WORD1(v30) = *v16;
	HIWORD(v30) = *v14;
	qword_140C79848 = v30;
	v17 = sub_1401C96D0(&v32, 0.0);
	sub_1401C96D0(&v33, 0.0);
	sub_1401C96D0(&v34, 1.0);
	LOWORD(v30) = *sub_1401C96D0(&v35, 0.0);
	WORD2(v30) = *v18;
	WORD1(v30) = *v19;
	HIWORD(v30) = *v17;
	qword_140C79850 = v30;
	v20 = sub_1401C96D0(&v32, 0.0);
	sub_1401C96D0(&v33, 1.0);
	sub_1401C96D0(&v34, 0.0);
	LOWORD(v30) = *sub_1401C96D0(&v35, 0.0);
	WORD2(v30) = *v21;
	WORD1(v30) = *v22;
	HIWORD(v30) = *v20;
	qword_140C79858 = v30;
	v23 = sub_1401C96D0(&v32, 1.0);
	sub_1401C96D0(&v33, 0.0);
	sub_1401C96D0(&v34, 0.0);
	v24 = sub_1401C96D0(&v35, 0.0);
	WORD2(v30) = *v25;
	LOWORD(v30) = *v24;
	v27 = *v26;
	HIWORD(v30) = *v23;
	xmmword_140C78390 = xmmword_140B7A330;
	xmmword_140C783A0 = xmmword_140B7A4B0;
	xmmword_140C783B0 = xmmword_140B7A700;
	WORD1(v30) = v27;
	xmmword_140C783C0 = xmmword_140B7AD00;
	xmmword_140C78450 = xmmword_140B7AD00;
	qword_140C79860 = v30;
	dword_140C79868 = -2139062144;
	dword_140C7986C = -1;
	dword_140C79870 = -2139062017;
	dword_140C79874 = -2139029632;
	dword_140C79878 = -2130739072;
	xmmword_140C78280 = 0ui64;
	xmmword_140C78270 = 0u;
	dword_140C7987C = -8355712;
	v31 = 0ui64;
	dword_140C78290 = 0;
	LODWORD(v32) = v0.m128_i32[0];
	xmmword_140C782A0 = 0u;
	xmmword_140C782B0 = 0ui64;
	xmmword_140C782D0 = 0ui64;
	v28 = _mm_xor_ps(v0, (__m128)xmmword_140B7B530);
	xmmword_140C782E0 = 0ui64;
	HIDWORD(v32) = v28.m128_i32[0];
	xmmword_140C78300 = 0x4062DFC5ui64;
	xmmword_140C78310 = 0u;
	*(_QWORD*)&v31 = 1080221637i64;
	xmmword_140C78330 = 0x4062DFC5ui64;
	qword_140C79888 = v32;
	xmmword_140C78340 = 0u;
	xmmword_140C78360 = v31;
	qword_140C79890 = 0i64;
	result = 0x800000007FFFFFFFui64;
	dword_140C782C0 = 0;
	dword_140C782F0 = 0;
	xmmword_140C78370 = 0ui64;
	dword_140C78320 = 0;
	dword_140C78350 = 0;
	dword_140C78380 = 0;
	xmmword_140C784E0 = 0i64;
	xmmword_140C784F0 = 0i64;
	xmmword_140C798A0 = 0i64;
	qword_140C79880 = 0i64;
	qword_140C79898 = 0x800000007FFFFFFFui64;
	qword_140C784C0 = 0i64;
	xmmword_140C798B0 = 0i64;
	xmmword_140C78510 = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v28, (__m128)0i64), _mm_unpacklo_ps(v28, (__m128)0i64));
	qword_140C784C8 = 0i64;
	*(_QWORD*)&xmmword_140C784D0 = 0x7FFFFFFF7FFFFFFFi64;
	xmmword_140C78500 = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v0, (__m128)0i64), _mm_unpacklo_ps(v0, (__m128)0i64));
	*((_QWORD*)&xmmword_140C784D0 + 1) = 0x8000000080000000ui64;
	xmmword_140C79960 = 0i64;
	xmmword_140C799A0 = 0i64;
	qword_140C798E0 = 0i64;
	qword_140C798E8 = 0i64;
	qword_140C798F0 = 0i64;
	dword_140C798F8 = 0x7FFFFFFF;
	dword_140C798FC = 0x7FFFFFFF;
	dword_140C79900 = 0x7FFFFFFF;
	xmmword_140C79910 = 0i64;
	dword_140C79904 = 0x80000000;
	dword_140C79908 = 0x80000000;
	dword_140C7990C = 0x80000000;
	dword_140C79920 = 0;
	dword_140C79940 = 1065353216;
	dword_140C783E0 = 0;
	xmmword_140C79980 = xmmword_140B7B240;
	xmmword_140C799C0 = xmmword_140B7B240;
	dword_140C78400 = 1065353216;
	xmmword_140C777F0 = xmmword_140B7B0C0;
	xmmword_140C777E0 = xmmword_140B7AFD0;
	xmmword_140C77810 = xmmword_140B7AD50;
	xmmword_140C77800 = xmmword_140B7B180;
	xmmword_140C79930 = 0i64;
	xmmword_140C783D0 = 0i64;
	xmmword_140C783F0 = 0i64;
	xmmword_140C79950 = 0i64;
	xmmword_140C79970 = 0i64;
	xmmword_140C79990 = 0i64;
	xmmword_140C799B0 = 0i64;
	xmmword_140C777D0 = xmmword_140B7AD00;
	xmmword_140C77830 = xmmword_140B7B1C0;
	xmmword_140C798C0 = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v0, v0), _mm_unpacklo_ps(v0, (__m128)0i64));
	xmmword_140C798D0 = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v28, v28), _mm_unpacklo_ps(v28, (__m128)0i64));
	xmmword_140C77820 = xmmword_140B7AEE0;
	return result;
}
// 1401A35DF: variable 'v2' is possibly undefined
// 1401A3610: variable 'v5' is possibly undefined
// 1401A37E8: variable 'v7' is possibly undefined
// 1401A37F3: variable 'v8' is possibly undefined
// 1401A3833: variable 'v9' is possibly undefined
// 1401A383E: variable 'v10' is possibly undefined
// 1401A3885: variable 'v11' is possibly undefined
// 1401A3889: variable 'v12' is possibly undefined
// 1401A3B24: variable 'v15' is possibly undefined
// 1401A3B2C: variable 'v16' is possibly undefined
// 1401A3B86: variable 'v18' is possibly undefined
// 1401A3B8E: variable 'v19' is possibly undefined
// 1401A3BEB: variable 'v21' is possibly undefined
// 1401A3BF3: variable 'v22' is possibly undefined
// 1401A3C46: variable 'v25' is possibly undefined
// 1401A3C53: variable 'v26' is possibly undefined
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7AD50: using guessed type __int128 xmmword_140B7AD50;
// 140B7AEE0: using guessed type __int128 xmmword_140B7AEE0;
// 140B7AFD0: using guessed type __int128 xmmword_140B7AFD0;
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B180: using guessed type __int128 xmmword_140B7B180;
// 140B7B1C0: using guessed type __int128 xmmword_140B7B1C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C67480: using guessed type __int64 qword_140C67480;
// 140C67488: using guessed type __int64 qword_140C67488;
// 140C67490: using guessed type __int64 qword_140C67490;
// 140C67498: using guessed type __int64 qword_140C67498;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C77770: using guessed type __int64 qword_140C77770;
// 140C77778: using guessed type int dword_140C77778;
// 140C7777C: using guessed type int dword_140C7777C;
// 140C77780: using guessed type __int64 qword_140C77780;
// 140C77788: using guessed type int dword_140C77788;
// 140C77790: using guessed type int dword_140C77790;
// 140C77794: using guessed type int dword_140C77794;
// 140C77798: using guessed type int dword_140C77798;
// 140C7779C: using guessed type int dword_140C7779C;
// 140C777A0: using guessed type __int64 qword_140C777A0;
// 140C777A8: using guessed type int dword_140C777A8;
// 140C777AC: using guessed type int dword_140C777AC;
// 140C777B0: using guessed type int dword_140C777B0;
// 140C777B4: using guessed type __int64 qword_140C777B4;
// 140C777BC: using guessed type int dword_140C777BC;
// 140C777C0: using guessed type __int64 qword_140C777C0;
// 140C777C8: using guessed type int dword_140C777C8;
// 140C777CC: using guessed type int dword_140C777CC;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C777E0: using guessed type __int128 xmmword_140C777E0;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;
// 140C77800: using guessed type __int128 xmmword_140C77800;
// 140C77810: using guessed type __int128 xmmword_140C77810;
// 140C77820: using guessed type __int128 xmmword_140C77820;
// 140C77830: using guessed type __int128 xmmword_140C77830;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140C78270: using guessed type __int128 xmmword_140C78270;
// 140C78280: using guessed type __int128 xmmword_140C78280;
// 140C78290: using guessed type int dword_140C78290;
// 140C782A0: using guessed type __int128 xmmword_140C782A0;
// 140C782B0: using guessed type __int128 xmmword_140C782B0;
// 140C782C0: using guessed type int dword_140C782C0;
// 140C782D0: using guessed type __int128 xmmword_140C782D0;
// 140C782E0: using guessed type __int128 xmmword_140C782E0;
// 140C782F0: using guessed type int dword_140C782F0;
// 140C78300: using guessed type __int128 xmmword_140C78300;
// 140C78310: using guessed type __int128 xmmword_140C78310;
// 140C78320: using guessed type int dword_140C78320;
// 140C78330: using guessed type __int128 xmmword_140C78330;
// 140C78340: using guessed type __int128 xmmword_140C78340;
// 140C78350: using guessed type int dword_140C78350;
// 140C78360: using guessed type __int128 xmmword_140C78360;
// 140C78370: using guessed type __int128 xmmword_140C78370;
// 140C78380: using guessed type int dword_140C78380;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C783D0: using guessed type __int128 xmmword_140C783D0;
// 140C783E0: using guessed type int dword_140C783E0;
// 140C783F0: using guessed type __int128 xmmword_140C783F0;
// 140C78400: using guessed type int dword_140C78400;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 140C78500: using guessed type __int128 xmmword_140C78500;
// 140C78510: using guessed type __int128 xmmword_140C78510;
// 140C78520: using guessed type __int128 xmmword_140C78520;
// 140C78530: using guessed type __int128 xmmword_140C78530;
// 140C796F0: using guessed type __int16 word_140C796F0;
// 140C796F4: using guessed type __int16 word_140C796F4;
// 140C796F8: using guessed type __int16 word_140C796F8;
// 140C796FC: using guessed type __int16 word_140C796FC;
// 140C79700: using guessed type int dword_140C79700;
// 140C79704: using guessed type int dword_140C79704;
// 140C79708: using guessed type int dword_140C79708;
// 140C7970C: using guessed type __int16 word_140C7970C;
// 140C7970E: using guessed type char byte_140C7970E;
// 140C79710: using guessed type __int64 qword_140C79710;
// 140C79718: using guessed type int dword_140C79718;
// 140C7971C: using guessed type __int16 word_140C7971C;
// 140C7971E: using guessed type char byte_140C7971E;
// 140C79720: using guessed type int dword_140C79720;
// 140C79724: using guessed type int dword_140C79724;
// 140C79728: using guessed type int dword_140C79728;
// 140C7972C: using guessed type __int16 word_140C7972C;
// 140C7972E: using guessed type char byte_140C7972E;
// 140C79730: using guessed type int dword_140C79730;
// 140C79734: using guessed type int dword_140C79734;
// 140C79738: using guessed type int dword_140C79738;
// 140C7973C: using guessed type __int16 word_140C7973C;
// 140C7973E: using guessed type char byte_140C7973E;
// 140C79740: using guessed type int dword_140C79740;
// 140C79744: using guessed type int dword_140C79744;
// 140C79748: using guessed type int dword_140C79748;
// 140C7974C: using guessed type int dword_140C7974C;
// 140C79750: using guessed type __int16 word_140C79750;
// 140C79754: using guessed type int dword_140C79754;
// 140C79758: using guessed type __int16 word_140C79758;
// 140C7975C: using guessed type int dword_140C7975C;
// 140C79760: using guessed type __int16 word_140C79760;
// 140C79764: using guessed type int dword_140C79764;
// 140C79768: using guessed type __int16 word_140C79768;
// 140C7976C: using guessed type int dword_140C7976C;
// 140C79770: using guessed type __int16 word_140C79770;
// 140C79774: using guessed type __int16 word_140C79774;
// 140C79776: using guessed type char byte_140C79776;
// 140C79778: using guessed type __int64 qword_140C79778;
// 140C79780: using guessed type __int64 qword_140C79780;
// 140C79788: using guessed type int dword_140C79788;
// 140C7978C: using guessed type int dword_140C7978C;
// 140C79790: using guessed type int dword_140C79790;
// 140C79794: using guessed type int dword_140C79794;
// 140C79798: using guessed type __int64 qword_140C79798;
// 140C797A0: using guessed type __int64 qword_140C797A0;
// 140C797A8: using guessed type int dword_140C797A8;
// 140C797AC: using guessed type __int64 qword_140C797AC;
// 140C797B4: using guessed type int dword_140C797B4;
// 140C797B8: using guessed type __int64 qword_140C797B8;
// 140C797C0: using guessed type __int64 qword_140C797C0;
// 140C797C8: using guessed type __int64 qword_140C797C8;
// 140C797D0: using guessed type int dword_140C797D0;
// 140C797D4: using guessed type int dword_140C797D4;
// 140C797D8: using guessed type int dword_140C797D8;
// 140C797DC: using guessed type int dword_140C797DC;
// 140C797E0: using guessed type int dword_140C797E0;
// 140C797E4: using guessed type int dword_140C797E4;
// 140C797E8: using guessed type int dword_140C797E8;
// 140C797EC: using guessed type int dword_140C797EC;
// 140C797F0: using guessed type int dword_140C797F0;
// 140C797F4: using guessed type int dword_140C797F4;
// 140C797F8: using guessed type int dword_140C797F8;
// 140C797FC: using guessed type int dword_140C797FC;
// 140C79800: using guessed type int dword_140C79800;
// 140C79804: using guessed type int dword_140C79804;
// 140C79808: using guessed type int dword_140C79808;
// 140C7980C: using guessed type int dword_140C7980C;
// 140C79810: using guessed type int dword_140C79810;
// 140C79814: using guessed type int dword_140C79814;
// 140C79818: using guessed type int dword_140C79818;
// 140C7981C: using guessed type int dword_140C7981C;
// 140C79820: using guessed type int dword_140C79820;
// 140C79824: using guessed type int dword_140C79824;
// 140C79828: using guessed type int dword_140C79828;
// 140C7982C: using guessed type int dword_140C7982C;
// 140C79830: using guessed type int dword_140C79830;
// 140C79834: using guessed type int dword_140C79834;
// 140C79838: using guessed type __int64 qword_140C79838;
// 140C79840: using guessed type __int64 qword_140C79840;
// 140C79848: using guessed type __int64 qword_140C79848;
// 140C79850: using guessed type __int64 qword_140C79850;
// 140C79858: using guessed type __int64 qword_140C79858;
// 140C79860: using guessed type __int64 qword_140C79860;
// 140C79868: using guessed type int dword_140C79868;
// 140C7986C: using guessed type int dword_140C7986C;
// 140C79870: using guessed type int dword_140C79870;
// 140C79874: using guessed type int dword_140C79874;
// 140C79878: using guessed type int dword_140C79878;
// 140C7987C: using guessed type int dword_140C7987C;
// 140C79880: using guessed type __int64 qword_140C79880;
// 140C79888: using guessed type __int64 qword_140C79888;
// 140C79890: using guessed type __int64 qword_140C79890;
// 140C79898: using guessed type __int64 qword_140C79898;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 140C798E0: using guessed type __int64 qword_140C798E0;
// 140C798E8: using guessed type __int64 qword_140C798E8;
// 140C798F0: using guessed type __int64 qword_140C798F0;
// 140C798F8: using guessed type int dword_140C798F8;
// 140C798FC: using guessed type int dword_140C798FC;
// 140C79900: using guessed type int dword_140C79900;
// 140C79904: using guessed type int dword_140C79904;
// 140C79908: using guessed type int dword_140C79908;
// 140C7990C: using guessed type int dword_140C7990C;
// 140C79910: using guessed type __int128 xmmword_140C79910;
// 140C79920: using guessed type int dword_140C79920;
// 140C79930: using guessed type __int128 xmmword_140C79930;
// 140C79940: using guessed type int dword_140C79940;
// 140C79950: using guessed type __int128 xmmword_140C79950;
// 140C79960: using guessed type __int128 xmmword_140C79960;
// 140C79970: using guessed type __int128 xmmword_140C79970;
// 140C79980: using guessed type __int128 xmmword_140C79980;
// 140C79990: using guessed type __int128 xmmword_140C79990;
// 140C799A0: using guessed type __int128 xmmword_140C799A0;
// 140C799B0: using guessed type __int128 xmmword_140C799B0;
// 140C799C0: using guessed type __int128 xmmword_140C799C0;
// 140C8E120: using guessed type int dword_140C8E120;
// 140C8E124: using guessed type int dword_140C8E124;

