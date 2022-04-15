#include "../winhttp.h"

//----- (00000001402C9AE0) ----------------------------------------------------
__int64 __fastcall sub_1402C9AE0(__int64 a1, __int64 a2, int a3)
{
	int v3; // eax
	__int64 result; // rax
	__int64 v7; // rcx
	int* v8; // rax
	__int64 v9; // rcx
	unsigned int i; // esi
	_QWORD* v11; // rbx

	v3 = *(_DWORD*)(a1 + 24);
	if (v3 > a3)
		return 1i64;
	if (!v3)
		*(_DWORD*)(a1 + 24) = 1;
	if (*(_DWORD*)(a1 + 24) != 1)
	{
	LABEL_12:
		if (*(_DWORD*)(a1 + 24) == 2)
		{
			for (i = 0; i < (unsigned int)((*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) / 176i64); ++i)
			{
				v11 = (_QWORD*)(*(_QWORD*)(a1 + 88) + 176i64 * i);
				if (*v11)
				{
					if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v11 + 32i64))(*v11, a2))
						return 0i64;
					sub_1402D3300(v11);
					if (*v11)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
						*v11 = 0i64;
					}
				}
			}
			*(_DWORD*)(a1 + 24) = 3;
		}
		return 1i64;
	}
	v7 = *(_QWORD*)(a1 + 32);
	if (!v7)
	{
		sub_1401C5690(368i64, (int**)(a1 + 40), 0);
		v8 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
		*(_QWORD*)(a1 + 64) = v8;
		sub_1407E4830(v8, 0i64, 0x170ui64);
		result = 1i64;
		*(_DWORD*)(a1 + 24) = 3;
		return result;
	}
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
	if ((_DWORD)result)
	{
		sub_1402C9DB0(a1);
		v9 = *(_QWORD*)(a1 + 32);
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		*(_DWORD*)(a1 + 24) = 2;
		goto LABEL_12;
	}
	return result;
}

