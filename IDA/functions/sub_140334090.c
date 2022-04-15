#include "../winhttp.h"

//----- (0000000140334090) ----------------------------------------------------
__int64 __fastcall sub_140334090(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax
	unsigned int v3; // ebp
	unsigned int v5; // r14d
	unsigned int v7; // ebx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12[4]; // [rsp+20h] [rbp-48h] BYREF

	result = 0i64;
	v3 = 0;
	*a2 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	v5 = *(unsigned __int16*)(a1 + 176);
	v7 = 0;
	if (*(_WORD*)(a1 + 176))
	{
		do
		{
			if ((unsigned __int64)(unsigned __int16)v7 < *(_QWORD*)(a1 + 176))
			{
				v8 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * (unsigned __int16)v7);
				if (v8)
				{
					v9 = *(_QWORD*)(v8 + 24);
					if (v9)
					{
						++v3;
						(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v9 + 24i64))(v9, v12);
						v10 = v12[0];
						a2[1] += v12[1];
						v11 = v12[2];
						*a2 += v10;
						a2[2] += v11;
						a2[3] += v12[3];
					}
				}
			}
			++v7;
		} while (v7 < v5);
		return v3;
	}
	return result;
}

