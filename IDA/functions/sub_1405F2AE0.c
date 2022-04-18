#include "../winhttp.h"

//----- (00000001405F2AE0) ----------------------------------------------------
__int64 __fastcall sub_1405F2AE0(_DWORD* a1, __int64 a2)
{
	__int64 v5; // rcx
	bool v6; // zf
	int v7; // ecx
	unsigned int v8; // ebp
	__int64 v9; // r13
	unsigned int v10; // r12d
	unsigned int* v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned int j; // esi
	unsigned int k; // esi
	unsigned int i; // ebx
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // edx
	unsigned int v20; // r8d
	int v21; // eax
	__int64 v22; // rbx
	__int64 v23; // rax
	_QWORD* v24; // rcx

	if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 104i64))(a1))
		return 2147500037i64;
	(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 184i64))(a1);
	v6 = qword_140C65980 == 0;
	a1[6] = 1;
	if (!v6)
		sub_1405F85A0(v5, a1[10], (__int64)a1);
	v7 = dword_140C636A8;
	a1[46] = *(_DWORD*)(a2 + 4);
	a1[7] = *(_DWORD*)(a2 + 12);
	a1[8] = v7 - *(_DWORD*)(a2 + 8);
	a1[34] = *(_DWORD*)(a2 + 48);
	a1[35] = *(_DWORD*)(a2 + 52);
	a1[36] = *(_DWORD*)(a2 + 56);
	a1[37] = *(_DWORD*)(a2 + 60);
	if (*(_DWORD*)(a2 + 12))
		a1[9] = v7;
	v8 = 0;
	v9 = 0i64;
	v10 = 0;
	if (!*(_DWORD*)(a2 + 16))
	{
	LABEL_18:
		for (i = 0; i < *(_DWORD*)(a2 + 32); ++i)
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 312i64))(
				a1,
				*(unsigned int*)(*(_QWORD*)(a2 + 40) + 4i64 * i));
		a1[124] = *(_DWORD*)(a2 + 64);
		if (!(*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 176i64))(a1))
			goto LABEL_30;
		v17 = *(_QWORD*)(qword_140C65898 + 29504);
		v18 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 24i64))(a1);
		Apollo_LUAEvent(v17, "PublicEventStart", byte_1409ECF5C, v18);
		if (!v9)
			goto LABEL_30;
		v19 = a1[119];
		v20 = a1[123];
		if (dword_140C636A8 - v19 >= v20)
		{
			if ((unsigned int)(dword_140C636A8 - v19) < a1[121])
			{
				a1[119] = v20 + v19;
			}
			else
			{
				a1[119] = dword_140C636A8;
				a1[120] = 1;
			}
		}
		else
		{
			v21 = a1[120];
			if (v21 == a1[122])
			{
			LABEL_30:
				sub_140437A10((_QWORD*)qword_140C658D8, 0x6Cu, 0, 0i64, 0, 0, 1);
				v24 = (_QWORD*)qword_140C65BA8;
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				sub_1405F9E30(v24, (__int64)(v24 + 36), *(_DWORD*)a2);
				if (*(_DWORD*)(a2 + 16))
				{
					do
						sub_1405F9E30(
							(_QWORD*)qword_140C65BA8,
							qword_140C65BA8 + 320,
							*(_DWORD*)(88i64 * v8++ + *(_QWORD*)(a2 + 24)));
					while (v8 < *(_DWORD*)(a2 + 16));
				}
				return 0i64;
			}
			a1[120] = v21 + 1;
		}
		v22 = *(_QWORD*)(qword_140C65898 + 29504);
		v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 320i64))(v9);
		Apollo_LUAEvent(v22, "PublicEventObjectiveJoinedMessage", "n", v23);
		goto LABEL_30;
	}
	while (1)
	{
		v11 = (unsigned int*)(*(_QWORD*)(a2 + 24) + 88i64 * v10);
		v12 = (*(__int64(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, *v11);
		v13 = v12;
		if (!v12)
			return 2147500037i64;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v12 + 432i64))(v12, v11 + 2);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v13 + 448i64))(v13, v11[13], v11[12]);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 456i64))(v13, v11[14]);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 272i64))(v13);
		for (j = 0; j < v11[15]; ++j)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 256i64))(
				v13,
				*(unsigned int*)(*((_QWORD*)v11 + 8) + 4i64 * j));
		for (k = 0; k < v11[18]; ++k)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v13 + 288i64))(
				v13,
				*(unsigned int*)(*((_QWORD*)v11 + 10) + 8i64 * k),
				*(unsigned int*)(*((_QWORD*)v11 + 10) + 8i64 * k + 4));
		if (!v9
			&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 104i64))(v13)
			&& *(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 320i64))(v13) + 8) + 80i64))
		{
			v9 = v13;
		}
		if (++v10 >= *(_DWORD*)(a2 + 16))
			goto LABEL_18;
	}
}
// 1405F2B3A: variable 'v5' is possibly undefined
// 1409ECF5C: using guessed type _BYTE byte_1409ECF5C[4];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

