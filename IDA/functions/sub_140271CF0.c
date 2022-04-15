#include "../winhttp.h"

//----- (0000000140271CF0) ----------------------------------------------------
__int64 __fastcall sub_140271CF0(__int64 a1, unsigned int a2)
{
	int v4; // r8d
	__int64 result; // rax
	int v6; // r8d
	int v7; // r8d
	unsigned int v8; // ebx

	v4 = a2 & 0xF;
	if (*(_DWORD*)(a1 + 8420) != v4)
	{
		*(_DWORD*)(a1 + 8420) = v4;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			168i64);
	}
	v6 = (unsigned __int8)a2 >> 4;
	if (*(_DWORD*)(a1 + 8508) != v6)
	{
		*(_DWORD*)(a1 + 8508) = v6;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			190i64);
	}
	v7 = (a2 >> 8) & 0xF;
	if (*(_DWORD*)(a1 + 8512) != v7)
	{
		*(_DWORD*)(a1 + 8512) = v7;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			191i64);
	}
	v8 = (unsigned __int16)a2 >> 12;
	if (*(_DWORD*)(a1 + 8516) != v8)
	{
		*(_DWORD*)(a1 + 8516) = v8;
		return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			192i64,
			v8);
	}
	return result;
}

