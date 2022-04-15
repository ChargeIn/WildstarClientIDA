#include "../winhttp.h"

//----- (00000001405F7170) ----------------------------------------------------
__int64 __fastcall sub_1405F7170(__int64* a1, int* a2)
{
	__int64 v2; // r15
	int* v5; // rbp
	int* v6; // rcx
	__int64 v7; // rax
	__int128 v8; // xmm0
	unsigned __int64 v9; // rsi
	int* v10; // rbx
	int* v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rax
	__int128 v14; // xmm0
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 196i64);
	v6 = &v5[49 * v2];
	if (v6)
	{
		if ((((unsigned __int8)((_BYTE)v5 - 60 * v2) | (unsigned __int8)a2) & 0xF) != 0)
		{
			sub_1407DB590(v6, a2, 0xC4ui64);
		}
		else
		{
			v7 = 1i64;
			do
			{
				v8 = *(_OWORD*)a2;
				v6 += 32;
				a2 += 32;
				*((_OWORD*)v6 - 8) = v8;
				*((_OWORD*)v6 - 7) = *((_OWORD*)a2 - 7);
				*((_OWORD*)v6 - 6) = *((_OWORD*)a2 - 6);
				*((_OWORD*)v6 - 5) = *((_OWORD*)a2 - 5);
				*((_OWORD*)v6 - 4) = *((_OWORD*)a2 - 4);
				*((_OWORD*)v6 - 3) = *((_OWORD*)a2 - 3);
				*((_OWORD*)v6 - 2) = *((_OWORD*)a2 - 2);
				*((_OWORD*)v6 - 1) = *((_OWORD*)a2 - 1);
				--v7;
			} while (v7);
			*(_OWORD*)v6 = *(_OWORD*)a2;
			*((_OWORD*)v6 + 1) = *((_OWORD*)a2 + 1);
			*((_OWORD*)v6 + 2) = *((_OWORD*)a2 + 2);
			*((_OWORD*)v6 + 3) = *((_OWORD*)a2 + 3);
			v6[16] = a2[16];
		}
	}
	if ((int*)*a1 != v5)
	{
		v9 = 0i64;
		if (a1[1])
		{
			v10 = v5;
			do
			{
				if (v10)
				{
					v11 = v10;
					v12 = *a1 + (char*)v10 - (char*)v5;
					if ((((unsigned __int8)v10 | (unsigned __int8)(*(_BYTE*)a1 + (_BYTE)v10 - (_BYTE)v5)) & 0xF) != 0)
					{
						sub_1407DB590(v10, (int*)v12, 0xC4ui64);
					}
					else
					{
						v13 = 1i64;
						do
						{
							v14 = *(_OWORD*)v12;
							v11 += 32;
							v12 += 128i64;
							*((_OWORD*)v11 - 8) = v14;
							*((_OWORD*)v11 - 7) = *(_OWORD*)(v12 - 112);
							*((_OWORD*)v11 - 6) = *(_OWORD*)(v12 - 96);
							*((_OWORD*)v11 - 5) = *(_OWORD*)(v12 - 80);
							*((_OWORD*)v11 - 4) = *(_OWORD*)(v12 - 64);
							*((_OWORD*)v11 - 3) = *(_OWORD*)(v12 - 48);
							*((_OWORD*)v11 - 2) = *(_OWORD*)(v12 - 32);
							*((_OWORD*)v11 - 1) = *(_OWORD*)(v12 - 16);
							--v13;
						} while (v13);
						*(_OWORD*)v11 = *(_OWORD*)v12;
						*((_OWORD*)v11 + 1) = *(_OWORD*)(v12 + 16);
						*((_OWORD*)v11 + 2) = *(_OWORD*)(v12 + 32);
						*((_OWORD*)v11 + 3) = *(_OWORD*)(v12 + 48);
						v11[16] = *(_DWORD*)(v12 + 64);
					}
				}
				++v9;
				v10 += 49;
			} while (v9 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

