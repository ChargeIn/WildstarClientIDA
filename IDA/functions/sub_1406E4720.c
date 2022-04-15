#include "../winhttp.h"

//----- (00000001406E4720) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406E4720(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // r8
	__m128i* v6; // r8
	__int64 v8; // [rsp+20h] [rbp-58h] BYREF
	char v9; // [rsp+28h] [rbp-50h]
	__int128 v10; // [rsp+30h] [rbp-48h]
	__int128 v11; // [rsp+40h] [rbp-38h]
	__int128 v12; // [rsp+50h] [rbp-28h]
	__int64 v13; // [rsp+60h] [rbp-18h]

	v3 = a3;
	v5 = *(int*)(a2 + 488);
	*(_DWORD*)(a2 + 64) = v3;
	v10 = 0i64;
	v12 = 0i64;
	v8 = 0i64;
	v9 = 0;
	v11 = 0i64;
	v6 = *(__m128i**)(a1 + 8 * (v3 + 4 * v5) + 1968);
	v13 = 0i64;
	sub_14010B330(&v8, *(_QWORD*)(a1 + 32), v6, L"PrimalMatrixNode");
	return sub_1400C3730(a2 + 72, (__int64)&v8);
}
// 140B3ED00: using guessed type wchar_t aPrimalmatrixno_1[17];

