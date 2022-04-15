#include "../winhttp.h"

//----- (0000000140718AF0) ----------------------------------------------------
void __fastcall sub_140718AF0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int v6; // eax
	unsigned int v7; // ecx

	v2 = *(_QWORD**)(a1 + 56);
	if (*(_DWORD*)(*(_QWORD*)(v2[39] + 112i64) + 24i64) == 10)
	{
		(*(void(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2);
		v3 = *(_QWORD*)(a1 + 8);
		*(_DWORD*)(a1 + 72) = 0;
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(v3 + 176);
				v5 = *(_QWORD*)(v3 + 16);
				if (v4 && (*(_BYTE*)(v4 + 60) & 2) != 0)
				{
					(**(void(__fastcall***)(__int64, __int64))v3)(v3, 1i64);
				}
				else
				{
					if (*(_QWORD*)(v3 + 208))
						v6 = sub_140195F70(v3 + 192);
					else
						v6 = 0;
					v7 = *(_DWORD*)(a1 + 72);
					if (v7 < v6)
						v7 = v6;
					*(_DWORD*)(a1 + 72) = v7;
				}
				v3 = v5;
			} while (v5);
		}
		if (*(_QWORD*)(a1 + 8))
		{
			sub_1407180C0(a1);
			if (!*(_DWORD*)(a1 + 72))
				sub_140717F00(a1, -*(_DWORD*)(a1 + 80));
		}
		else
		{
			sub_1407177B0((const void***)a1);
			sub_14018B900(a1, 0);
		}
	}
}

