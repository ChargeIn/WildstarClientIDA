#include "../winhttp.h"

//----- (0000000140374BF0) ----------------------------------------------------
__m128 __fastcall sub_140374BF0(__int64 a1)
{
	bool v1; // zf
	unsigned int i; // edi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int128 v8; // xmm2
	__int64 v9; // r8
	__int64 v10; // r9
	__int64 v11; // rdx
	unsigned int v12; // r11d
	unsigned __int16* v13; // r10
	__int128 v14; // xmm0
	__int128 v15; // xmm0
	int v17[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_DWORD*)(a1 + 28) == 0;
	v17[0] = -1;
	if (v1)
	{
		for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
		{
			v4 = *(_QWORD*)(a1 + 8i64 * i + 48);
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
				if (v5)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v5 + 32i64))(v5, v17))
						goto LABEL_10;
					sub_140373540(v4);
					v6 = *(_QWORD*)(v4 + 16);
					if (v6)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
						*(_QWORD*)(v4 + 16) = 0i64;
					}
				}
			}
		}
		*(_DWORD*)(a1 + 28) = 1;
	}
LABEL_10:
	v7 = *(_DWORD*)(a1 + 44);
	v8 = (unsigned int)dword_140C442E8;
	if (v7)
	{
		v9 = a1 + 48;
		v10 = v7;
		do
		{
			if (*(_QWORD*)v9)
			{
				v11 = *(_QWORD*)(*(_QWORD*)v9 + 80i64);
				if (v11)
				{
					if (*(_DWORD*)(v11 + 496))
					{
						v12 = *(_DWORD*)(v11 + 448);
						v13 = *(unsigned __int16**)(*(_QWORD*)(v11 + 504) + 40i64);
						if (*v13 < v12)
						{
							v14 = 0i64;
							*(float*)&v14 = *(float*)&v8;
							v8 = v14;
							*(float*)&v8 = fminf(*(float*)&v14, *(float*)(32i64 * *v13 + *(_QWORD*)(v11 + 456) + 8));
						}
						if (v13[1] < v12)
						{
							v15 = 0i64;
							*(float*)&v15 = fminf(*(float*)&v8, *(float*)(32i64 * v13[1] + *(_QWORD*)(v11 + 456) + 8));
							v8 = v15;
						}
					}
				}
			}
			v9 += 8i64;
			--v10;
		} while (v10);
	}
	return (__m128)v8;
}
// 140C442E8: using guessed type int dword_140C442E8;
// 140374BF0: using guessed type int var_18[6];

