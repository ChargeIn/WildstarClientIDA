#include "../winhttp.h"

//----- (0000000140057200) ----------------------------------------------------
__int64 __fastcall sub_140057200(_QWORD* a1, const __m128i* a2, const __m128i* a3, char* a4)
{
	__int64 v4; // rbx
	char* v7; // rsi
	__int64 v9; // rbp
	const __m128i* i; // r14
	__int64 v12; // r8
	int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rax
	unsigned __int64* v17; // [rsp+20h] [rbp-268h] BYREF
	int v18; // [rsp+28h] [rbp-260h]
	_QWORD* v19; // [rsp+30h] [rbp-258h]
	unsigned __int64 v20[65]; // [rsp+38h] [rbp-250h] BYREF

	v4 = -1i64;
	v7 = (char*)a2;
	v9 = -1i64;
	while (a3->m128i_i8[++v9] != 0)
		;
	v19 = a1;
	v18 = 0;
	v17 = v20;
	for (i = sub_1407DDCF8(a2, a3); i; i = sub_1407DDCF8((const __m128i*)((char*)i + v9), a3))
	{
		sub_1400576C0((__int64)&v17, v7, (char*)i - v7);
		v12 = -1i64;
		do
			++v12;
		while (a4[v12]);
		sub_1400576C0((__int64)&v17, a4, v12);
		v7 = &i->m128i_i8[v9];
	}
	do
		++v4;
	while (v7[v4]);
	sub_1400576C0((__int64)&v17, v7, v4);
	if (v17 == v20)
	{
		v13 = v18;
	}
	else
	{
		sub_140058710((__int64)v19, v20, (char*)v17 - (char*)v20);
		v13 = v18 + 1;
		v17 = v20;
		++v18;
	}
	sub_1400590E0(v19, v13);
	v14 = a1[2];
	v18 = 1;
	v15 = v14 - 16;
	if (*(_DWORD*)(v15 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, v15))
			return 0i64;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v15 = a1[2] - 16i64;
	}
	return *(_QWORD*)v15 + 32i64;
}
// 140057200: using guessed type unsigned __int64 var_250[65];

