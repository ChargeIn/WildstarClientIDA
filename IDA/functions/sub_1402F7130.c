#include "../winhttp.h"

//----- (00000001402F7130) ----------------------------------------------------
__int64 __fastcall sub_1402F7130(__int64* a1, unsigned int a2, unsigned __int16 a3)
{
	__int64 v3; // r9
	__int64 v7; // rsi
	unsigned int v8; // eax
	unsigned int v9; // ebp
	unsigned int v10; // r8d
	unsigned int v12; // r11d
	__int64 v13; // r10
	unsigned int v14; // ebx
	__int64 v15; // rdi
	unsigned int v16; // eax
	__int64 v17; // r9
	unsigned int v18; // edx
	unsigned int v19; // r9d
	unsigned int v20; // ecx
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23; // r8d
	int* v24; // r9
	__int64 v25; // r10
	__int64 v26; // rcx
	unsigned int v27; // r8d
	int* i; // rdx
	__int64 v29; // r9
	unsigned int v30; // r10d
	int v31[4]; // [rsp+20h] [rbp-C8h] BYREF
	unsigned int v32[32]; // [rsp+30h] [rbp-B8h] BYREF

	v3 = *a1;
	v31[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 1400))(a1, v31);
	v7 = a1[8];
	v8 = sub_140327080(v7, a2);
	v9 = *(_DWORD*)(v7 + 128);
	v10 = v8;
	if (v8 >= v9)
		return 0xFFFFFFFFi64;
	v12 = 0;
	v13 = 48i64 * v8;
	v14 = v8;
	v15 = v13;
	v16 = 0;
	do
	{
		if (v16 >= 0x20)
			break;
		v17 = *(_QWORD*)(v7 + 136);
		if (*(unsigned __int16*)(v17 + v15) != a2)
			break;
		v18 = *(_DWORD*)(v17 + v15 + 20);
		v19 = *(_DWORD*)(v17 + v15 + 24);
		if (v18 != v19)
		{
			v20 = *(_DWORD*)(a1[2] + 496);
			if (v18 >= v19)
			{
				if (v20 >= v19 && v20 < v18)
					goto LABEL_14;
			}
			else if (v20 < v18 || v20 >= v19)
			{
				goto LABEL_14;
			}
		}
		v21 = v16++;
		v32[v21] = v14;
	LABEL_14:
		++v14;
		v15 += 48i64;
	} while (v14 < v9);
	if (!v16)
	{
		do
		{
			if (v16 >= 0x20)
				break;
			if (*(unsigned __int16*)(*(_QWORD*)(v7 + 136) + v13) != a2)
				break;
			v22 = v16;
			v13 += 48i64;
			++v16;
			v32[v22] = v10++;
		} while (v10 < v9);
	}
	if (v16 <= 1)
		return v32[0];
	v23 = 0;
	v24 = (int*)v32;
	v25 = v16;
	do
	{
		v26 = (unsigned int)*v24++;
		v23 += *(unsigned __int16*)(*(_QWORD*)(v7 + 136) + 48 * v26 + 4);
		--v25;
	} while (v25);
	if (!v23)
		return v32[(unsigned __int64)(v16 * a3) >> 16];
	v27 = ((unsigned int)a3 * v23) >> 16;
	for (i = (int*)v32; ; ++i)
	{
		v29 = (unsigned int)*i;
		v30 = *(unsigned __int16*)(*(_QWORD*)(v7 + 136) + 48 * v29 + 4);
		if (v27 < v30)
			break;
		++v12;
		v27 -= v30;
		if (v12 >= v16)
			return v32[0];
	}
	return (unsigned int)v29;
}
// 1402F725C: conditional instruction was optimized away because eax.4>=2u
// 1402F729E: conditional instruction was optimized away because eax.4>=2u
// 1402F7130: using guessed type int var_C8[4];
// 1402F7130: using guessed type unsigned int var_B8[32];

