#include "../winhttp.h"

//----- (00000001404C11A0) ----------------------------------------------------
__int64 __fastcall sub_1404C11A0(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 result; // rax
	__int64 v3; // rdx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	_QWORD* v6; // rdx
	__int64 v7; // rdx

	v1 = *(_QWORD**)(a1 + 16);
	*(_DWORD*)(a1 + 640) = 0;
	if (v1)
	{
		result = *(_QWORD*)(a1 + 24);
		*v1 = result;
	}
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
	{
		result = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(v3 + 16) = result;
	}
	v4 = *(_QWORD**)(a1 + 64);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (v4)
	{
		result = *(_QWORD*)(a1 + 72);
		*v4 = result;
	}
	v5 = *(_QWORD*)(a1 + 72);
	if (v5)
	{
		result = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(v5 + 64) = result;
	}
	v6 = *(_QWORD**)(a1 + 48);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	if (v6)
	{
		result = *(_QWORD*)(a1 + 56);
		*v6 = result;
	}
	v7 = *(_QWORD*)(a1 + 56);
	if (v7)
	{
		result = *(_QWORD*)(a1 + 48);
		*(_QWORD*)(v7 + 48) = result;
	}
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	return result;
}

