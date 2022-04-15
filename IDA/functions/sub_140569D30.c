#include "../winhttp.h"

//----- (0000000140569D30) ----------------------------------------------------
__int64 __fastcall sub_140569D30(__int64 a1, __int64 a2)
{
	int v2; // eax
	unsigned int v5; // ecx
	int* v6; // rax
	unsigned int* v7; // rdx
	_DWORD* v8; // rcx
	__int64 v9; // r9
	__int64 v10; // rax
	unsigned int v11; // eax
	__int64 v12; // rax
	int v13; // ebx
	int v14; // ebx

	v2 = *(_DWORD*)(a2 + 20);
	if (v2 >= 300)
		return 2147500037i64;
	v5 = *(_DWORD*)(a2 + 24);
	if (v5 == -1 || !v2 && v5 >= 0x1F)
		return 2147500037i64;
	v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a2 + 16), 0i64);
	*(_QWORD*)(a1 + 64) = v6;
	if (!v6)
		return 2147500037i64;
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 128) = *(unsigned __int8*)(a2 + 72);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 68);
	*(_QWORD*)(a1 + 176) = *(_QWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 220) = *(_DWORD*)(a2 + 48);
	*(_QWORD*)(a1 + 224) = *(_QWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 232) = *(_DWORD*)(a2 + 160);
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 15i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 15i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	if (*(_DWORD*)(a2 + 76))
	{
		v7 = (unsigned int*)(a2 + 92);
		v8 = (_DWORD*)(a1 + 260);
		v9 = 2i64;
		do
		{
			switch (*(v7 - 1))
			{
			case 1u:
				*(v8 - 3) = 15;
				*v8 = 0;
				*(_QWORD*)(v8 - 5) = *v7;
				*(v8 - 1) = v7[1];
				break;
			case 2u:
				v11 = v7[1];
				*v8 = 0;
				*(v8 - 3) = v11;
				v12 = *v7;
				*(v8 - 1) = 0;
				*(_QWORD*)(v8 - 5) = v12;
				break;
			case 3u:
				*(v8 - 3) = 15;
				*v8 = v7[1];
				v10 = *v7;
				*(v8 - 1) = 0;
				*(_QWORD*)(v8 - 5) = v10;
				break;
			}
			v7 += 3;
			v8 += 6;
			--v9;
		} while (v9);
		v13 = *(_DWORD*)(a2 + 76);
		*(_DWORD*)(a1 + 236) = v13 + sub_14018CDF0();
	}
	v14 = *(_DWORD*)(a2 + 80);
	if (v14)
		*(_DWORD*)(a1 + 288) = v14 + sub_14018CDF0();
	sub_14056A430(a1);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 20);
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

