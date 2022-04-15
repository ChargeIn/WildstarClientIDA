#include "../winhttp.h"

//----- (00000001406456E0) ----------------------------------------------------
__int64 __fastcall sub_1406456E0(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v3; // rax
	_QWORD* v4; // rbx

	v1 = (_QWORD*)(a1 + 48);
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)a1 = off_140B6FC48;
	sub_1401A72E0(a1 + 48);
	*(_DWORD*)(a1 + 696) = 0;
	*(_BYTE*)(a1 + 700) = 0;
	v3 = (*(__int64(__fastcall**)(_QWORD*))(v1[16] + 16i64))(v1 + 16);
	v4 = (_QWORD*)v3;
	if (v3)
	{
		*(_QWORD*)(v3 + 8) = v1;
		*(_QWORD*)(v3 + 16) = 0i64;
		*(_DWORD*)(v3 + 24) = 0;
		*(_QWORD*)(v3 + 32) = 0i64;
		*(_QWORD*)(v3 + 40) = 0i64;
		*(_QWORD*)(v3 + 48) = 0i64;
		*(_QWORD*)(v3 + 56) = 0i64;
		*(_QWORD*)(v3 + 64) = 0i64;
		*(_QWORD*)(v3 + 72) = 0i64;
		*(_QWORD*)(v3 + 80) = 0i64;
		*(_DWORD*)(v3 + 88) = 0;
		*(_QWORD*)v3 = off_140B5EBA0;
		*(_QWORD*)(v3 + 96) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	v4[10] = v1 + 16;
	sub_1401A4C50((__int64)(v4 + 3), (int*)L"Root");
	*(_QWORD*)(a1 + 688) = v4;
	sub_1401A5A70(v1, v4);
	return a1;
}
// 140B29F80: using guessed type wchar_t aRoot_8[5];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B6FC48: using guessed type __int64 (__fastcall *off_140B6FC48[3])();

