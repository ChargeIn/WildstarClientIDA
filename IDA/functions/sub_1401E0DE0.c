#include "../winhttp.h"

//----- (00000001401E0DE0) ----------------------------------------------------
__int64 __fastcall sub_1401E0DE0(__int64 a1)
{
	unsigned int v2; // r14d
	__int64 result; // rax
	void(__fastcall * **v4)(_QWORD); // rcx
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	_DWORD* v7; // rbp
	__int64* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // ecx
	__int64 v12; // rax
	int v13; // ecx
	__int64 v14; // rax
	int v15; // ecx
	__int64 v16; // rax
	int v17; // ecx
	__int64 v18; // rdx
	__int64 v19; // r8
	__int64 v20; // r9
	bool v21; // zf
	int v22; // eax
	int v23; // [rsp+20h] [rbp-48h] BYREF
	LONGLONG v24; // [rsp+28h] [rbp-40h]
	int v25[4]; // [rsp+30h] [rbp-38h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 296))
	{
		v2 = 0;
		if (!*(_QWORD*)(a1 + 304))
			v2 = 537526275;
	}
	else
	{
		v2 = 537526273;
	}
	v23 = *(_DWORD*)(a1 + 3172);
	if (v23 > 0)
	{
		QueryPerformanceCounter(&PerformanceCount);
		v24 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	}
	if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 240i64))(a1, &v23))
		return v2;
	if ((*(_BYTE*)(a1 + 3168) & 2) == 0)
	{
		result = sub_1401E1880(a1);
		if ((int)result < 0)
			return result;
		*(_DWORD*)(a1 + 3168) |= 2u;
	}
	v4 = *(void(__fastcall****)(_QWORD))(a1 + 288);
	if (*(void(__fastcall****)(_QWORD))(a1 + 296) == v4)
	{
		if (!*(_DWORD*)(a1 + 3124))
			return 2685009925i64;
		if (*(_DWORD*)(a1 + 2868))
		{
			result = sub_1401E1A80(a1);
			if ((int)result < 0)
				return result;
			v6 = 0i64;
			v7 = (_DWORD*)(a1 + 2904);
			v8 = (__int64*)(a1 + 2872);
			do
			{
				if (*v8)
				{
					v23 = *(_DWORD*)(a1 + 3172);
					if (v23 > 0)
					{
						QueryPerformanceCounter(&PerformanceCount);
						v24 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
					}
					v9 = *v8;
					if (*v7 >= *(_DWORD*)(*v8 + 1220))
					{
						v25[0] = 0;
						if (!*(_DWORD*)(v9 + 1208))
							sub_1401E55D0(v9, (__int64)v25);
					}
					else if (!*(_DWORD*)(v9 + 1208) && !(unsigned int)sub_1401E55D0(v9, (__int64)&v23))
					{
						return v2;
					}
				}
				++v6;
				++v8;
				++v7;
			} while (v6 < 4);
			v10 = *(_QWORD*)(a1 + 2872);
			if (v10)
			{
				v11 = *(_DWORD*)(v10 + 1212);
				if (*(_DWORD*)(a1 + 2920) != v11)
				{
					*(_DWORD*)(a1 + 3168) &= ~0x10u;
					*(_DWORD*)(a1 + 2920) = v11;
				}
			}
			v12 = *(_QWORD*)(a1 + 2880);
			if (v12)
			{
				v13 = *(_DWORD*)(v12 + 1212);
				if (*(_DWORD*)(a1 + 2924) != v13)
				{
					*(_DWORD*)(a1 + 3168) &= ~0x10u;
					*(_DWORD*)(a1 + 2924) = v13;
				}
			}
			v14 = *(_QWORD*)(a1 + 2888);
			if (v14)
			{
				v15 = *(_DWORD*)(v14 + 1212);
				if (*(_DWORD*)(a1 + 2928) != v15)
				{
					*(_DWORD*)(a1 + 3168) &= ~0x10u;
					*(_DWORD*)(a1 + 2928) = v15;
				}
			}
			v16 = *(_QWORD*)(a1 + 2896);
			if (v16)
			{
				v17 = *(_DWORD*)(v16 + 1212);
				if (*(_DWORD*)(a1 + 2932) != v17)
				{
					*(_DWORD*)(a1 + 3168) &= ~0x10u;
					*(_DWORD*)(a1 + 2932) = v17;
				}
			}
		}
		v23 = *(_DWORD*)(a1 + 3172);
		if (v23 > 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v24 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		}
		if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 248i64))(a1, &v23))
			return v2;
		v21 = (*(_BYTE*)(a1 + 3168) & 0x10) == 0;
		*(_DWORD*)(a1 + 3172) = 0;
		if (v21)
		{
			result = sub_1401E20C0(a1);
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 3168) |= 0x10u;
		}
		if ((*(_BYTE*)(a1 + 3168) & 0x20) == 0)
		{
			result = sub_1401E23C0((_QWORD*)a1);
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 3168) |= 0x20u;
		}
		if ((*(_BYTE*)(a1 + 3168) & 0x40) == 0)
		{
			result = sub_1401E2910(a1, v18, v19, v20);
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 3168) |= 0x40u;
		}
		if (*(_QWORD*)(a1 + 304) == *(_QWORD*)(a1 + 288))
		{
			return 0i64;
		}
		else
		{
			sub_1401E42B0((_QWORD*)(a1 + 304), (void(__fastcall****)(_QWORD))(a1 + 288));
			v22 = *(_DWORD*)(a1 + 312);
			*(_DWORD*)(a1 + 3176) = 0;
			*(_DWORD*)(a1 + 320) = v22;
			return 537526276i64;
		}
	}
	else
	{
		if (v4)
			(**v4)(v4);
		v5 = *(_QWORD*)(a1 + 296);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 296) = *(_QWORD*)(a1 + 288);
		*(_DWORD*)(a1 + 316) = *(_DWORD*)(a1 + 312);
		if (*(_DWORD*)(a1 + 3124))
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 296) + 240i64))(*(_QWORD*)(a1 + 296), a1 + 3112);
		return 537526274i64;
	}
}
// 1401E111E: variable 'v18' is possibly undefined
// 1401E111E: variable 'v19' is possibly undefined
// 1401E111E: variable 'v20' is possibly undefined
// 1401E0DE0: using guessed type int var_38[4];

