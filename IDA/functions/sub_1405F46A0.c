#include "../winhttp.h"

//----- (00000001405F46A0) ----------------------------------------------------
__int64 __fastcall sub_1405F46A0(unsigned int* a1, _DWORD* a2, _DWORD* a3)
{
	unsigned int v6; // r8d
	unsigned int v7; // ebx
	__int64 v8; // rsi
	int* v9; // rdi
	__int64* v10; // rax
	__int64* v11; // rsi
	__int64 v12; // rax
	__int64 v13; // rcx
	_QWORD* v14; // rdx
	unsigned int* v15; // rax
	unsigned int* v16; // rcx
	__int64 v17; // r15
	int* v18; // rax
	__int64 v19; // rcx
	unsigned int v20; // edx
	unsigned int v22; // [rsp+48h] [rbp-9h] BYREF
	unsigned int* v23; // [rsp+50h] [rbp-1h] BYREF
	__int64 v24; // [rsp+58h] [rbp+7h]
	__int64 v25; // [rsp+60h] [rbp+Fh] BYREF
	unsigned int v26; // [rsp+B8h] [rbp+67h] BYREF
	int v27; // [rsp+D0h] [rbp+7Fh] BYREF

	(*(void(__fastcall**)(unsigned int*, unsigned int**))(*(_QWORD*)a1 + 344i64))(a1, &v23);
	v6 = v24;
	v7 = 0;
	LODWORD(v8) = 0;
	v9 = 0i64;
	if (!v24)
	{
		v10 = sub_1405F4420((__int64)a1);
		v11 = v10;
		if (!v10)
			goto LABEL_21;
		v12 = (*(__int64(__fastcall**)(__int64*, __int64*, __int64, _QWORD))(*v10 + 464))(v10, &v25, 1i64, 0i64);
		v13 = v24;
		v14 = (_QWORD*)v12;
		v24 = *(_QWORD*)(v12 + 8);
		v15 = *(unsigned int**)v12;
		v14[1] = v13;
		v16 = v23;
		v23 = v15;
		*v14 = v16;
		if (v25)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
		v17 = (*(__int64(__fastcall**)(__int64*))(*v11 + 312))(v11);
		v8 = *(_QWORD*)(v17 + 8);
		if (v8)
		{
			v18 = sub_14018B280(8 * v8 + 16, 0);
			if (v18)
			{
				*((_QWORD*)v18 + 1) = v8;
				*(_QWORD*)v18 = off_140B55060;
			}
			else
			{
				v18 = 0i64;
			}
			v9 = v18 + 4;
		}
		sub_1407DB590(v9, *(int**)v17, 8 * v8);
		v6 = v24;
	}
	v19 = qword_140C65898;
	v20 = 0;
	v26 = 0;
	v22 = 0;
	v27 = 2139095039;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		sub_1403F7E50(qword_140C65898, v23, v6, &v26, (float*)&v27, a1[124], &v22);
		v20 = v26;
		v19 = qword_140C65898;
	}
	if (*(_QWORD*)(v19 + 120))
	{
		sub_1403F8070(v19, (__int64)v9, v8, &v26, (float*)&v27, &v22);
		v20 = v26;
	}
	if (v20)
	{
		if (a2)
			*a2 = v27;
		if (a3)
			*a3 = v22;
		v7 = v20;
	}
LABEL_21:
	if (v9)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
	if (v23)
		(*(void(__fastcall**)(unsigned int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
	return v7;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

