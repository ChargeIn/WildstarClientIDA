#include "../winhttp.h"

//----- (0000000140546360) ----------------------------------------------------
int* __fastcall sub_140546360(__int64 a1)
{
	int* result; // rax
	int* v3; // r15
	int* v4; // rdi
	int v5; // ebx
	unsigned __int64 i; // r14
	unsigned int v7; // esi
	int* v8; // rsi
	int v9; // r9d
	int v10; // edx
	__int128 v11; // [rsp+40h] [rbp-28h] BYREF

	result = (int*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v3 = result;
	if (result)
	{
		result = (int*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 344));
		v4 = result;
		if (result)
		{
			v5 = 1;
			for (i = 84i64; i < 0x6C; i += 4i64)
			{
				result = (int*)qword_140C63840;
				v7 = *(_DWORD*)(i + *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64));
				if (qword_140C63840)
				{
					result = (int*)qword_140C63840(off_140A6D188, v7, qword_140C63858);
				}
				else
				{
					if (dword_140C64F14)
						return result;
					result = (int*)sub_140237420();
					if ((int)result < 0)
						return result;
					result = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(
						qword_140C64A28,
						v7);
				}
				v8 = result;
				if (!result)
					break;
				if (v4)
				{
					while (1)
					{
						v9 = v4[2];
						v10 = v3[2];
						v11 = *((_OWORD*)v4 + 286);
						sub_140545D40(a1, v10, (unsigned int*)v3 + 1144, v9, &v11, v8, 0);
						v3 = v4;
						result = (int*)sub_1405464D0(a1, v5);
						v4 = result;
						if (!result)
							break;
						++v5;
					}
				}
			}
		}
	}
	return result;
}
// 140A6D188: using guessed type wchar_t *off_140A6D188[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A28: using guessed type __int64 qword_140C64A28;
// 140C64F14: using guessed type int dword_140C64F14;
// 140C65898: using guessed type __int64 qword_140C65898;

