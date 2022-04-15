#include "../winhttp.h"

//----- (00000001400F2730) ----------------------------------------------------
__int64 __fastcall sub_1400F2730(__int64 a1, int a2, int a3, int a4, LARGE_INTEGER PerformanceCount, __int64 a6)
{
	__int64 QuadPart; // rsi
	__int64 v8; // rdi
	unsigned __int64 v9; // r11
	unsigned int v10; // r10d
	__int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // r12
	LONGLONG v14; // r15
	int* v15; // rax
	_QWORD* v16; // r14
	int* v17; // rax
	int* v18; // rbp
	__int64 v19; // r8
	__int64 v20; // rbx
	int* v21; // rax
	int v22; // eax
	__int64* v23; // rcx
	int v24; // r14d
	__int64* v25; // rdx
	__int64 v26; // r8
	__int64 v27; // rbx
	__int64 v28; // rcx
	unsigned __int64 v29; // rbx
	char* v30; // rax
	int* v31; // r14
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // rax
	unsigned __int8 v35; // si
	__int64 v36; // rbx
	int* v37; // rdx
	int* v39; // [rsp+28h] [rbp-80h]
	__int64 v40; // [rsp+30h] [rbp-78h] BYREF
	int* v41; // [rsp+38h] [rbp-70h]
	int* v42; // [rsp+40h] [rbp-68h]
	__int64 v43; // [rsp+50h] [rbp-58h] BYREF
	int* v44; // [rsp+58h] [rbp-50h]

	QuadPart = PerformanceCount.QuadPart;
	sub_1400F0C90(&v40, PerformanceCount.QuadPart);
	v8 = 0i64;
	v9 = *(_QWORD*)(qword_140C63650 + 768);
	v10 = 0;
	if (v9)
	{
		v11 = *(_QWORD*)(qword_140C63650 + 760);
		v12 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v11 + 8 * v12) + 400i64) != *(_QWORD*)(a1 + 16))
		{
			v12 = ++v10;
			if (v10 >= v9)
				goto LABEL_5;
		}
		v13 = *(_QWORD*)(v11 + 8i64 * v10);
	}
	else
	{
	LABEL_5:
		v13 = 0i64;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v14 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v15 = sub_14018B280(56i64, 0);
	v16 = v15;
	if (v15)
	{
		*((_QWORD*)v15 + 3) = 0i64;
		*((_QWORD*)v15 + 4) = 0i64;
		*((_QWORD*)v15 + 5) = 0i64;
		v17 = sub_14018B280(8i64, 0);
		v16[3] = v17;
		v16[4] = v17;
		v16[5] = v17 + 2;
		if (v17)
			*(_BYTE*)v17 = 0;
	}
	else
	{
		v16 = 0i64;
	}
	v18 = (int*)a6;
	*v16 = v13;
	v16[1] = v14;
	v16[6] = QuadPart;
	v19 = -1i64;
	do
		++v19;
	while (*((_BYTE*)v18 + v19));
	sub_14001B1A0((__int64)(v16 + 2), v18, (int*)((char*)v18 + v19));
	v20 = *(_QWORD*)(a1 + 2096);
	v21 = sub_14018B280(24i64, 0);
	if (v21 != (int*)-16i64)
		*((_QWORD*)v21 + 2) = v16;
	*(_QWORD*)v21 = v20;
	*((_QWORD*)v21 + 1) = *(_QWORD*)(v20 + 8);
	**(_QWORD**)(v20 + 8) = v21;
	*(_QWORD*)(v20 + 8) = v21;
	v22 = sub_140058DC0(*(_QWORD**)(a1 + 16), a2, a3, a4);
	v23 = *(__int64**)(*(_QWORD*)(a1 + 2096) + 8i64);
	v24 = v22;
	v25 = (__int64*)v23[1];
	v26 = *v23;
	v27 = v23[2];
	*v25 = *v23;
	*(_QWORD*)(v26 + 8) = v25;
	sub_14018B900((__int64)v23, 0);
	if (v27)
	{
		v28 = *(_QWORD*)(v27 + 24);
		if (v28)
			sub_14018B900(v28, 0);
		sub_14018B900(v27, 0);
	}
	QueryPerformanceCounter(&PerformanceCount);
	v29 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v14;
	if (QuadPart)
	{
		sub_140136D40(QuadPart, PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v14);
		++* (_DWORD*)(QuadPart + 544);
		*(_QWORD*)(QuadPart + 552) += v29;
		if (v29 > *(_QWORD*)(QuadPart + 560))
			*(_QWORD*)(QuadPart + 560) = v29;
	}
	if ((unsigned int)(v29 / qword_140C636B0) > 0x19 && QuadPart)
	{
		++* (_DWORD*)(QuadPart + 548);
		v39 = v18;
		sub_1400035B0();
	}
	if (!v24)
	{
		v35 = 1;
		goto LABEL_41;
	}
	v30 = (char*)sub_140056BB0(*(_QWORD**)(a1 + 16), 0xFFFFFFFF, 0i64);
	sub_14018F2D0(&v43, v30);
	v31 = v44;
	if (!QuadPart)
	{
		v32 = *(_QWORD*)(a1 + 16);
		v33 = *(_QWORD*)(v32 + 16) - 16i64;
		if (*(_DWORD*)(v33 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620(*(_QWORD*)(a1 + 16), *(_QWORD*)(v32 + 16) - 16i64))
			{
				v34 = 0i64;
				goto LABEL_35;
			}
			if (*(_QWORD*)(*(_QWORD*)(v32 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v32 + 32) + 112i64))
				sub_14005E2C0(v32);
			v33 = *(_QWORD*)(v32 + 16) - 16i64;
		}
		v34 = *(_QWORD*)v33 + 32i64;
	LABEL_35:
		a6 = 0x141CCE78Ci64;
		if ((unsigned int)sub_140196BD0(&dword_140C8A0E4, 13, &a6, v18, v34, v39))
			DebugBreak();
		goto LABEL_37;
	}
	sub_140137120(QuadPart, 6, v44);
	sub_1400EA7B0(v13, QuadPart, (__int64)v31, *(_DWORD*)(QuadPart + 536) >= 6);
LABEL_37:
	if (v31)
		sub_14018B900((__int64)v31, 0);
	v35 = 0;
LABEL_41:
	v36 = (__int64)v41;
	if (v41 != v42)
	{
		v37 = (int*)&word_140B7B704;
		if (v41)
			v37 = v41;
		if (*(_WORD*)v37)
		{
			do
				++v8;
			while (*((_WORD*)v37 + v8));
		}
		sub_14001C480(qword_140C63650 + 776, v37, (int*)((char*)v37 + 2 * v8));
	}
	if (v36)
		sub_14018B900(v36, 0);
	return v35;
}
// 1400F2A3D: variable 'v39' is possibly undefined
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C8A0E4: using guessed type _DWORD dword_140C8A0E4;

