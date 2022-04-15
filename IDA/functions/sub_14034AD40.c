#include "../winhttp.h"

//----- (000000014034AD40) ----------------------------------------------------
__int64 __fastcall sub_14034AD40(int* a1, int* a2, int a3, __int64* a4, _BYTE* a5, __int64 a6)
{
	__int64* v6; // rdi
	_DWORD* StackBase; // rax
	int v11; // ecx
	unsigned int v12; // r15d
	unsigned int v13; // r12d
	__int64 v14; // r8
	int v15; // r9d
	__int64 v16; // rax
	int v17; // esi
	int v18; // esi
	int v19; // r9d
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
	__m128i* v23; // [rsp+48h] [rbp-B8h]
	__int64 v24; // [rsp+50h] [rbp-B0h] BYREF
	int v25; // [rsp+58h] [rbp-A8h]
	__int64 v26; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v27; // [rsp+68h] [rbp-98h]
	__int64 v28; // [rsp+70h] [rbp-90h]
	__int64 v29; // [rsp+78h] [rbp-88h]
	_DWORD* v30; // [rsp+80h] [rbp-80h]
	__m128i v31[33]; // [rsp+90h] [rbp-70h] BYREF

	v6 = a4;
	v23 = (__m128i*)a2;
	if (!*a5)
	{
		*(_QWORD*)a6 = 0i64;
		*(_DWORD*)(a6 + 8) = 0;
		*(_DWORD*)(a6 + 32) = a1[4];
		*(_QWORD*)(a6 + 16) = 0i64;
		*(_DWORD*)(a6 + 12) = 0;
		return 1i64;
	}
	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v11 = *(StackBase - 1);
	v12 = 1;
	--StackBase;
	HIDWORD(v29) = -1;
	v25 = v11;
	*StackBase = 1;
	v30 = StackBase;
	*(_QWORD*)a6 = 0i64;
	if (!a4)
	{
		v6 = &v26;
		v26 = 0i64;
		v27 = 0i64;
		v28 = 0i64;
		v29 = 0i64;
	}
	v24 = 0i64;
	v22 = 260;
	if ((int)sub_14034B380(a1, a2, (__int64)v6, v31[0].m128i_i32, &v22) < 0)
	{
	LABEL_19:
		sub_1400035B0();
		sub_1400035B0();
	LABEL_20:
		v12 = 2;
		goto LABEL_21;
	}
	v13 = 3;
	while (1)
	{
		if (a3)
		{
			switch (a3)
			{
			case 1:
				v14 = 2i64;
				v15 = 2;
				break;
			case 2:
				v14 = 2i64;
				v15 = 0;
				break;
			case 3:
				v14 = 3i64;
				v15 = 2;
				break;
			default:
				v24 = 0i64;
				goto LABEL_17;
			}
		}
		else
		{
			v14 = 1i64;
			v15 = (*((_BYTE*)v6 + 24) != 0) + 3;
		}
		if (sub_1401B5B50(*(__int64*)&qword_140C63788, v31, v14, v15, &v24) >= 0)
			goto LABEL_32;
	LABEL_17:
		if (!*((_BYTE*)v6 + 24))
			break;
		v26 = *v6;
		v27 = v6[1];
		v28 = v6[2];
		v16 = v6[3];
		v6 = &v26;
		v29 = v16;
		LOBYTE(v29) = 0;
		v22 = 260;
		if ((int)sub_14034B380(a1, v23->m128i_i32, (__int64)&v26, v31[0].m128i_i32, &v22) < 0)
			goto LABEL_19;
	}
	if (a3)
	{
		v17 = a3 - 1;
		if (v17)
		{
			v18 = v17 - 1;
			if (v18)
			{
				if (v18 == 1)
				{
					v19 = 2;
					goto LABEL_30;
				}
			LABEL_31:
				sub_1400035B0();
				goto LABEL_20;
			}
			v13 = 2;
			v19 = 0;
		}
		else
		{
			v13 = 2;
			v19 = 2;
		}
	}
	else
	{
		v13 = 1;
		v19 = (*((_BYTE*)v6 + 24) != 0) + 3;
	}
LABEL_30:
	if (sub_1401B5B50(*(__int64*)&qword_140C63788, v23, v13, v19, &v24) < 0)
		goto LABEL_31;
LABEL_32:
	v20 = v24;
	*(_DWORD*)(a6 + 12) = 8;
	*(_QWORD*)(a6 + 16) = v20;
	v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20);
	*(_DWORD*)(a6 + 8) = 0;
	*(_QWORD*)a6 = v21;
	LODWORD(v21) = a1[4];
	*(_QWORD*)(a6 + 24) = 0i64;
	*(_DWORD*)(a6 + 32) = v21;
LABEL_21:
	*v30 = v25;
	return v12;
}
// 14034AD40: using guessed type __m128i var_250[33];

