#include "../winhttp.h"

//----- (000000014063D070) ----------------------------------------------------
void __fastcall sub_14063D070(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int16* v2; // rdi
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rax
	__int64* v6; // rbx
	__int64* v7; // rdx
	__int64 v8; // rbx
	unsigned __int64 v9; // rcx
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // [rsp+20h] [rbp-88h] BYREF
	__int64 v13; // [rsp+28h] [rbp-80h]
	unsigned __int16* v14; // [rsp+48h] [rbp-60h]
	unsigned __int16* v15; // [rsp+50h] [rbp-58h]
	__int64 v16; // [rsp+68h] [rbp-40h]
	__int64 v17; // [rsp+88h] [rbp-20h]

	if (*(_DWORD*)(qword_140C65B98 + 312) && *(_QWORD*)(qword_140C65B98 + 320))
		return;
	v1 = *(_QWORD*)(qword_140C65898 + 27728);
	if (!v1 || ((*(_DWORD*)(v1 + 8) >> 3) & 1) == 0)
		return;
	sub_14040B680(&v12, a1, 0);
	v2 = v14;
	if (v14 == v15)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v3)
			goto LABEL_22;
		v4 = *(_DWORD*)(v3 + 264);
		if (!v4)
			goto LABEL_22;
		v5 = sub_1403D90D0(qword_140C65898, v4);
		if (!v5)
			goto LABEL_22;
		v6 = (__int64*)(v5 + 416);
		if (!*(_DWORD*)(v5 + 416) || !*(_QWORD*)(v5 + 424) || !sub_140605340(qword_140C65898 + 27664, v5 + 416))
			goto LABEL_22;
		v7 = v6;
	}
	else
	{
		v8 = qword_140C65898;
		v9 = sub_140605380(qword_140C65898 + 27664, v14);
		v10 = *(_QWORD**)(v8 + 27728);
		if (!v10 || v9 >= v10[12])
			goto LABEL_22;
		if (v9)
		{
			if (v9 <= v10[13])
				--v9;
		}
		else
		{
			v9 = v10[13];
		}
		v11 = *(_QWORD*)(v10[11] + 8 * v9);
		if (!v11)
			goto LABEL_22;
		v7 = (__int64*)(v11 + 16);
	}
	sub_1405C13D0(qword_140C65B98 + 264, v7);
LABEL_22:
	if (v17)
		sub_14018B900(v17, 0);
	if (v16)
		sub_14018B900(v16, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	if (v13)
		sub_14018B900(v13, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

