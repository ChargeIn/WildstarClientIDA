#include "../winhttp.h"

//----- (00000001404CF7A0) ----------------------------------------------------
void __fastcall sub_1404CF7A0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	_QWORD* v7; // rcx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx

	v1 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		v3 = 0i64;
		if (*(_QWORD*)(v1 + 16))
		{
			v4 = 0i64;
			do
			{
				++v3;
				v4 += 16i64;
				**(_QWORD**)(v4 + *(_QWORD*)(v1 + 8) - 16) = 0i64;
			} while (v3 < *(_QWORD*)(v1 + 16));
		}
		v5 = *(_QWORD*)(v1 + 8);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		sub_14018B900(v1, 0);
	}
	sub_140195D70(a1 + 80);
	*(_DWORD*)(a1 + 80) = 0;
	v6 = *(_QWORD**)(a1 + 96);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 104);
	v7 = *(_QWORD**)(a1 + 104);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	sub_140195D70(a1 + 8);
	*(_DWORD*)(a1 + 8) = 0;
	v8 = *(_QWORD**)(a1 + 24);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 32);
	v9 = *(_QWORD**)(a1 + 32);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
}

