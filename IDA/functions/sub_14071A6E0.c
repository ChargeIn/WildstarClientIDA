#include "../winhttp.h"

//----- (000000014071A6E0) ----------------------------------------------------
__int64 __fastcall sub_14071A6E0(__int64 a1, int a2, int a3)
{
	_QWORD* v4; // rcx
	__int64* v6; // rsi
	__int64 v7; // rcx
	int v8; // ebp
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64* v11; // r14
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 result; // rax
	unsigned int v15; // r8d
	int v16; // ecx
	int v17; // ecx
	__int64 v18; // rcx
	__int64 v19; // rdx
	unsigned int v20; // r15d
	int v21; // edx
	int v22; // xmm6_4
	__int64 v23; // r14
	__int64 v24; // rax
	float v25; // xmm0_4
	float v26; // xmm1_4
	int v27; // ecx
	int v28; // ecx
	__int64* v29; // rdi
	char v30[24]; // [rsp+40h] [rbp-48h] BYREF
	unsigned int v31; // [rsp+58h] [rbp-30h]
	int v32; // [rsp+5Ch] [rbp-2Ch]

	v4 = *(_QWORD**)(a1 + 520);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 528);
	v6 = (__int64*)(a1 + 528);
	v7 = *(_QWORD*)(a1 + 528);
	if (v7)
		*(_QWORD*)(v7 + 520) = *(_QWORD*)(a1 + 520);
	v8 = 0;
	*(_DWORD*)(a1 + 424) = a2;
	*(_QWORD*)(a1 + 520) = 0i64;
	*v6 = 0i64;
	if (!*(_DWORD*)(a1 + 4i64 * a2 + 388))
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 376));
	v10 = v9;
	if (!v9)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	v11 = *(_DWORD*)(v9 + 128) == 18 ? *(__int64**)(v9 + 13976) : *(__int64**)(v9 + 5864);
	if (!v11)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	v12 = *v11;
	v13 = *(unsigned int*)(a1 + 400);
	v32 = 0;
	result = (*(__int64(__fastcall**)(__int64*, __int64, char*))(v12 + 592))(v11, v13, v30);
	if (!a3)
	{
		v15 = *(_DWORD*)(a1 + 404);
		if (v15 < v31)
		{
			v16 = *(_DWORD*)(a1 + 400);
			if (v16 != 4 || *(_DWORD*)(v10 + 3416))
			{
				if (*(_DWORD*)(a1 + 504) && !*(_DWORD*)(a1 + 508) && *(_DWORD*)(a1 + 424) != 2)
				{
					v17 = v16 - 4;
					if (v17)
					{
						if (v17 != 1)
							return result;
						v18 = v10 + 5608;
					}
					else
					{
						v18 = v10 + 5600;
					}
					if (v18 && !*(_QWORD*)(a1 + 520))
					{
						if (*(_QWORD*)v18)
						{
							do
							{
								v19 = *(_QWORD*)v18;
								if ((int)(v15 - *(_DWORD*)(*(_QWORD*)v18 + 404i64)) >= 0)
									break;
								v18 = v19 + 528;
							} while (*(_QWORD*)(v19 + 528));
						}
						*(_QWORD*)(a1 + 520) = v18;
						*v6 = *(_QWORD*)v18;
						*(_QWORD*)v18 = a1;
						goto LABEL_47;
					}
					return result;
				}
				return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
			}
		}
	}
	if (*(_DWORD*)(a1 + 244))
		v20 = *(_DWORD*)(a1 + 408);
	else
		v20 = sub_1401AE6A0(0, 0xFFFF);
	v21 = *(_DWORD*)(a1 + 424);
	if (!v21 && *(_DWORD*)(a1 + 388) != *(_DWORD*)(a1 + 392))
		v8 = 1;
	v22 = *(int*)(a1 + 512);
	if (!v21)
	{
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 68))
		{
			v23 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*v11 + 424))(
				v11,
				*(unsigned int*)(a1 + 4i64 * *(int*)(a1 + 424) + 388),
				v20);
			v24 = sub_1404695E0(v10);
			if (v24)
			{
				v25 = (float)*(int*)(v24 + 80);
				v26 = (float)*(int*)(v23 + 20);
				if (v25 < v26)
					*(float*)&v22 = (float)(v26 / v25) * *(float*)(a1 + 512);
			}
		}
	}
	result = sub_14046C8E0(
		v10,
		*(_DWORD*)(a1 + 400),
		*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 424) + 388),
		v20,
		v22,
		*(_DWORD*)(a1 + 404),
		v8,
		*(_DWORD*)(a1 + 412));
	if (!(_DWORD)result)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	v27 = *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 420) = 1;
	v28 = v27 - 4;
	if (v28)
	{
		if (v28 != 1)
			return result;
		v29 = (__int64*)(v10 + 5608);
	}
	else
	{
		v29 = (__int64*)(v10 + 5600);
	}
	if (v29 && !*(_QWORD*)(a1 + 520))
	{
		*(_QWORD*)(a1 + 520) = v29;
		*v6 = *v29;
		*v29 = a1;
	LABEL_47:
		result = *v6;
		if (*v6)
			*(_QWORD*)(result + 520) = v6;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 14071A6E0: using guessed type char var_48[24];

