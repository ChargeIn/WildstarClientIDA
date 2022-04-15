#include "../winhttp.h"

//----- (00000001403133C0) ----------------------------------------------------
__int64 __fastcall sub_1403133C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	char v6; // al
	__int64 v7; // r10
	unsigned int v8; // r9d
	unsigned int v9; // ecx
	signed int v10; // eax
	unsigned int v11; // edx
	unsigned int* v12; // r8
	__int64 v13; // r9
	unsigned int v14; // eax
	unsigned int v15; // eax
	unsigned __int64 v16; // rdi
	__int64 v17; // rcx
	int* v18; // rax
	int* v19; // rdx
	int* v20; // rdi

	result = sub_14032D6B0(a1, a2, a3);
	if ((int)result >= 0)
	{
		sub_140313B30((_QWORD*)a1);
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 56i64))(a2);
		v7 = *(_QWORD*)(a1 + 416);
		*(_BYTE*)(a1 + 1062) = v6 & 1;
		v8 = (unsigned int)(**(_DWORD**)(v7 + 168) + **(_DWORD**)(v7 + 192)) >> 1;
		if (!v8)
			v8 = 1;
		v9 = *(_DWORD*)(v7 + 608);
		v10 = (**(unsigned __int16**)(v7 + 120) + **(unsigned __int16**)(v7 + 144))
			/ 2
			* ((unsigned int)(**(_DWORD**)(v7 + 264) + **(_DWORD**)(v7 + 288)) >> 1)
			/ v8;
		v11 = 0;
		if (v9)
		{
			v12 = *(unsigned int**)(v7 + 624);
			v13 = v9;
			do
			{
				if (*v12 > v11)
					v11 = *v12;
				++v12;
				--v13;
			} while (v13);
		}
		v14 = (int)(float)((float)v10 * 1.05);
		if (v14 < v11)
			v11 = v14;
		v15 = 1024;
		if (v11 < 0x400)
			v15 = v11;
		v16 = v15;
		sub_140317DE0((__int64*)(a1 + 1120), v15);
		v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 28i64) == 0;
		*(_DWORD*)(a1 + 1072) = v17;
		if ((_DWORD)v17)
		{
			if (*(_QWORD*)(a1 + 1144) > v16)
				*(_QWORD*)(a1 + 1144) = v16;
			v18 = sub_14018DBC0(*(_QWORD*)(a1 + 1136), v16, 4i64);
			v19 = *(int**)(a1 + 1136);
			v20 = v18;
			if (v19 != v18)
			{
				sub_1407DB590(v18, v19, 4i64 * *(_QWORD*)(a1 + 1144));
				v17 = *(_QWORD*)(a1 + 1136);
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				*(_QWORD*)(a1 + 1136) = v20;
			}
		}
		sub_14032F8B0(
			v17,
			(_DWORD*)(a1 + 1088),
			*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2432i64),
			*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2434i64),
			*(float*)(*(_QWORD*)(a1 + 416) + 2428i64));
		if (**(_BYTE**)(a1 + 416) == 2)
		{
			*(_OWORD*)(a1 + 1360) = 0i64;
			*(_OWORD*)(a1 + 1392) = 0i64;
			*(_QWORD*)(a1 + 1412) = *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 208i64);
		}
		return 0i64;
	}
	return result;
}
// 14031355B: variable 'v17' is possibly undefined

