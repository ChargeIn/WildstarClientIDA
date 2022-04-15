#include "../winhttp.h"

//----- (0000000140061E60) ----------------------------------------------------
__int64 __fastcall sub_140061E60(__int64 a1, int a2)
{
	char v2; // al
	__int64* v4; // rax
	char* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v7; // rdi
	int v8; // edx
	unsigned __int16 v10; // ax
	__int64* v11; // rax
	__int64 v12; // r8
	__int16 v13; // ax
	int v14; // eax
	unsigned int v15; // edi
	__int64 v16; // r8

	v2 = *(_BYTE*)(a1 + 10);
	if (v2 == 1 || !v2 && *(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 80))
	{
		v10 = *(_WORD*)(a1 + 96);
		if (v10 < 0xC8u)
		{
			v12 = *(_QWORD*)(a1 + 16);
			v13 = v10 + 1;
			*(_WORD*)(a1 + 96) = v13;
			*(_WORD*)(a1 + 98) = v13;
			v14 = sub_1400610A0(a1, (void(__fastcall*)(__int64, __int64))sub_140061DD0, v12 - 16i64 * a2);
			v15 = v14;
			if (v14)
			{
				v16 = *(_QWORD*)(a1 + 16);
				*(_BYTE*)(a1 + 10) = v14;
				sub_140060EF0(a1, v14, v16);
				*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = *(_QWORD*)(a1 + 16);
			}
			else
			{
				v15 = *(unsigned __int8*)(a1 + 10);
			}
			--* (_WORD*)(a1 + 96);
			return v15;
		}
		v11 = *(__int64**)(a1 + 40);
		v5 = aCStackOverflow_0;
		v6 = -1i64;
		v7 = *v11;
		*(_QWORD*)(a1 + 16) = *v11;
		do
			++v6;
		while (aCStackOverflow_0[v6]);
	}
	else
	{
		v4 = *(__int64**)(a1 + 40);
		v5 = aCannotResumeNo;
		v6 = -1i64;
		v7 = *v4;
		*(_QWORD*)(a1 + 16) = *v4;
		do
			++v6;
		while (aCannotResumeNo[v6]);
	}
	*(_QWORD*)v7 = sub_140062650(a1, (unsigned __int64*)v5, v6);
	*(_DWORD*)(v7 + 8) = 4;
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
	{
		v8 = *(_DWORD*)(a1 + 88);
		if (v8 >= 1)
		{
			sub_140061210(a1, 2 * v8);
			*(_QWORD*)(a1 + 16) += 16i64;
			return 2i64;
		}
		sub_140061210(a1, v8 + 1);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 2i64;
}

