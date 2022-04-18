#include "../winhttp.h"

//----- (00000001405E3030) ----------------------------------------------------
void __fastcall sub_1405E3030(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rcx
	__int64 v5; // rbx
	void* v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // edx
	__int64 v13; // rdx
	int lpv; // [rsp+20h] [rbp-A8h]
	__int64 v15[2]; // [rsp+30h] [rbp-98h] BYREF
	__int64 v16; // [rsp+40h] [rbp-88h] BYREF
	__int64 v17; // [rsp+48h] [rbp-80h]
	int v18[2]; // [rsp+68h] [rbp-60h]
	__int64 v19; // [rsp+70h] [rbp-58h]
	__int64 v20[4]; // [rsp+88h] [rbp-40h]
	void* v21; // [rsp+A8h] [rbp-20h]

	sub_14040B680(&v16, a1, 0);
	v5 = *(_QWORD*)v18;
	v6 = v21;
	if (*(_QWORD*)v18 == v19)
	{
		v7 = qword_140C65898;
		v8 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v8
			&& (v9 = *(_DWORD*)(v8 + 264)) != 0
			&& (v10 = sub_1403D90D0(qword_140C65898, v9), v7 = qword_140C65898, v10))
		{
			v11 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v11 && (v12 = *(_DWORD*)(v11 + 264)) != 0)
				v13 = sub_1403D90D0(qword_140C65898, v12);
			else
				v13 = 0i64;
			v15[0] = *(_QWORD*)(v13 + 416);
			v15[1] = *(_QWORD*)(v13 + 424);
			sub_1405DE590(v7, v15, a3, 0i64);
		}
		else
		{
			lpv = 0;
			Apollo_LUAEvent(*(_QWORD*)(v7 + 29504), "FriendshipResult", byte_1409EA994, &unk_1409F393C, lpv);
		}
	}
	else
	{
		sub_1405DE4D0(v4, *(__int64*)v18, v20[0], a3, v21);
	}
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if (v20[0])
		sub_14018B900(v20[0], 0);
	if (v5)
		sub_14018B900(v5, 0);
	if (v17)
		sub_14018B900(v17, 0);
}
// 1405E307C: variable 'v4' is possibly undefined
// 1405E30F9: variable 'v7' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405E3030: using guessed type __int64 var_40[4];

