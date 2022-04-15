#include "../winhttp.h"

//----- (0000000140172A30) ----------------------------------------------------
__int64 __fastcall sub_140172A30(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	__int64 v4; // rax
	unsigned __int16* v5; // rax
	__int64 v6; // rcx
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	if (v3 >= 0
		&& v3 < (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3)
		&& (v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8i64 * v3)) != 0)
	{
		if (*(_QWORD*)(v4 + 24))
		{
			v6 = **(_QWORD**)(v4 + 16);
			if (v6)
				v5 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 64i64))(v6);
			else
				v5 = (unsigned __int16*)&unk_1409DD44C;
		}
		else
		{
			v5 = (unsigned __int16*)&unk_1409DD3FC;
		}
		v7 = (unsigned __int64*)sub_14018F0E0(&v10, v5)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_140058710((__int64)a1, v7, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
		{
			sub_14018B900(v11, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}

