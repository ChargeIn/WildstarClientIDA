#include "../winhttp.h"

//----- (000000014038F540) ----------------------------------------------------
__int64 __fastcall sub_14038F540(__int64* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rcx

	result = *a1;
	if (*a1)
	{
		if (*(_QWORD*)(result + 32))
		{
			v3 = a1[1];
			if ((*(_DWORD*)(v3 + 1056))-- == 1)
			{
				sub_140367760(*(_QWORD**)(v3 + 16), v3);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 48) + 24i64))(*(_QWORD*)(v3 + 48));
			}
		}
		v5 = (_QWORD*)a1[2];
		if (v5)
			*v5 = a1[3];
		v6 = a1[3];
		if (v6)
			*(_QWORD*)(v6 + 16) = a1[2];
		v7 = *a1;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v8 = *(__int64**)(v7 + 32);
		if (v8)
			sub_140382E90(v8);
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*a1 + 8i64))(*a1);
	}
	v9 = (__int64*)a1[2];
	if (v9)
	{
		result = a1[3];
		*v9 = result;
	}
	v10 = a1[3];
	if (v10)
	{
		result = a1[2];
		*(_QWORD*)(v10 + 16) = result;
	}
	a1[3] = 0i64;
	a1[2] = 0i64;
	return result;
}

