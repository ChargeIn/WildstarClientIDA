#include "../winhttp.h"

//----- (0000000140395240) ----------------------------------------------------
__int64 __fastcall sub_140395240(__int64 a1, int* a2)
{
	int* v3; // rax
	int* v4; // rbx
	int* v5; // rax
	__int64 v6; // r13
	__int64 v7; // r12
	unsigned int v8; // r15d
	unsigned int v9; // r14d
	__int64 v10; // rbp
	_OWORD* v11; // rsi
	__int64 v12; // rax
	unsigned __int64 v13; // rdx
	int* v14; // rsi
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // rax
	char v18[16]; // [rsp+40h] [rbp-98h] BYREF
	char v19[136]; // [rsp+50h] [rbp-88h] BYREF
	int* v20; // [rsp+E0h] [rbp+8h] BYREF
	int* v21; // [rsp+E8h] [rbp+10h]
	unsigned __int64 v22; // [rsp+F0h] [rbp+18h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+F8h] [rbp+20h] BYREF

	v21 = a2;
	if (*(_QWORD*)(a1 + 72) >= *(_QWORD*)(a1 + 40))
		return 1i64;
	while (1)
	{
		v3 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned __int64*))(**(_QWORD**)(a1 + 16) + 360i64))(
			*(_QWORD*)(a1 + 16),
			*(_QWORD*)(a1 + 72),
			&v22);
		v4 = 0i64;
		v20 = 0i64;
		if (v22)
		{
			sub_1402D9B70(v22, v3, &v20);
			v4 = v20;
		}
		v5 = sub_14018B280(1312i64, 0);
		v6 = v5 ? sub_1403757E0((__int64)v5, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64)) : 0i64;
		v7 = *(_QWORD*)(a1 + 16);
		v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 376i64))(v7, *(_QWORD*)(a1 + 72));
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 368i64))(v7, *(_QWORD*)(a1 + 72));
		v10 = (*(__int64(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)v7 + 352i64))(v7, v18, *(_QWORD*)(a1 + 72));
		v11 = (_OWORD*)(*(__int64(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)v7 + 344i64))(
			v7,
			v19,
			*(_QWORD*)(a1 + 72));
		v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 336i64))(v7, *(_QWORD*)(a1 + 72));
		if ((int)sub_140376790(v6, *(_QWORD*)(a1 + 8), v12, v11, v10, v9, v8, (void(__fastcall***)(_QWORD))v4) >= 0)
		{
			if (v4)
				sub_1403773F0(v6, (__int64)v4);
			*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64 * *(_QWORD*)(a1 + 72)) = v6;
		}
		else if (v6)
		{
			sub_140375B60(v6);
			sub_14018B900(v6, 0);
		}
		++* (_QWORD*)(a1 + 72);
		v14 = v21;
		if (!*v21)
			break;
		if (*v21 >= 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v15 = PerformanceCount.QuadPart - *((_QWORD*)v14 + 1) - ::PerformanceCount.QuadPart;
			v16 = qword_140C636B0 * (unsigned int)*v14;
			if (v15 >= v16)
			{
				*v14 = 0;
				break;
			}
			v13 = (v16 - v15) % qword_140C636B0;
			if ((unsigned int)((v16 - v15) / qword_140C636B0) == -1)
				break;
		}
		if (v4)
			(*(void(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v4 + 8i64))(v4, v13);
		if (*(_QWORD*)(a1 + 72) >= *(_QWORD*)(a1 + 40))
			return 1i64;
	}
	if (v4)
		(*(void(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v4 + 8i64))(v4, v13);
	return 0i64;
}
// 140395413: variable 'v13' is possibly undefined
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140395240: using guessed type char var_98[16];
// 140395240: using guessed type char var_88[136];

