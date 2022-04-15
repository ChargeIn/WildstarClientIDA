#include "../winhttp.h"

//----- (000000014011D310) ----------------------------------------------------
__int64 __fastcall sub_14011D310(_QWORD* a1)
{
	int* v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	_QWORD* v7; // r15
	__int64 v8; // r12
	int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rcx
	int* v12; // rbx
	__int64 v14; // r14
	unsigned __int64 v15; // rbp
	__int64 v16; // rcx
	_BYTE* v17; // rax
	char* v18; // rax
	__int64 v19; // rbx
	char* v20; // rax
	_DWORD* v21; // rcx
	__int64 v22; // rsi
	__m128i* v23; // rbx
	__int64 v25; // [rsp+20h] [rbp-98h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-88h] BYREF
	__int128 v27; // [rsp+38h] [rbp-80h]
	__int64(__fastcall * *v28)(); // [rsp+50h] [rbp-68h] BYREF
	__int128 v29; // [rsp+58h] [rbp-60h]
	__int64 v30; // [rsp+70h] [rbp-48h] BYREF
	__m128i* v31; // [rsp+78h] [rbp-40h]
	__int64 v32; // [rsp+C8h] [rbp+10h] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD**)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400D66A0(a1, 1u);
	if (!v8)
	{
		*(_QWORD*)&v27 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v27 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v28 = TlsValue;
		v32 = 0x141D18A20i64;
		v29 = v27;
		v9 = sub_1401971E0(&dword_140C8A118, 13, &v32, &v28);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v27 + 1));
		if (v9)
			DebugBreak();
	}
	v10 = sub_140056BB0(a1, 2u, 0i64);
	v11 = -1i64;
	v12 = (int*)v10;
	while (*(_BYTE*)(v10 + v11++ + 1) != 0)
		;
	v14 = v11 + v10;
	v15 = v11;
	v16 = v11 + 1;
	if (v16 != -1)
		v1 = sub_14018B280(v16, 0);
	sub_1407DB590(v1, v12, v15);
	v17 = (char*)v1 + v14 - (_QWORD)v12;
	if (v17)
		*v17 = 0;
	v18 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v30, v18);
	v19 = (int)sub_140056D60(a1, 4u);
	v20 = (char*)sub_14018F0E0(&v28, 0i64)[1];
	v21 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v21 < a1[2] && v21 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
		v20 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&TlsValue, v20);
	if ((_QWORD)v29)
		sub_14018B900(v29, 0);
	v22 = v27;
	v25 = v19;
	v23 = v31;
	sub_1400E9500(v7, v8, v1, v31, v25, (const __m128i*)v27);
	if (v22)
		sub_14018B900(v22, 0);
	if (v23)
		sub_14018B900((__int64)v23, 0);
	if (v1)
		sub_14018B900((__int64)v1, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A118: using guessed type _DWORD dword_140C8A118;

