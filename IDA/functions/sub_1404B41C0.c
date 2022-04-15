#include "../winhttp.h"

//----- (00000001404B41C0) ----------------------------------------------------
__int64 __fastcall sub_1404B41C0(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v4; // rax
	__int64 v5; // r8
	int v6; // edx
	__int64 i; // r8
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v11; // [rsp+20h] [rbp-48h] BYREF
	__int64 v12; // [rsp+28h] [rbp-40h]
	__int64 v13; // [rsp+40h] [rbp-28h] BYREF
	__int64 v14; // [rsp+48h] [rbp-20h]
	__int64 v15; // [rsp+50h] [rbp-18h]

	v2 = qword_140C659E0;
	v4 = *(_QWORD*)(qword_140C659E0 + 8);
	v5 = *(_QWORD*)(qword_140C659E0 + 16);
	if (v4 != v5)
	{
		v6 = *a2;
		while (*(_DWORD*)v4 != v6 || *(_DWORD*)(v4 + 4) != a2[1])
		{
			v4 += 8i64;
			if (v4 == v5)
				goto LABEL_11;
		}
		if (v4 + 8 != v5)
		{
			for (i = (v5 - (v4 + 8)) >> 3; i > 0; *(_QWORD*)(v4 - 8) = v8)
			{
				v8 = *(_QWORD*)(v4 + 8);
				--i;
				v4 += 8i64;
			}
		}
		*(_QWORD*)(v2 + 16) -= 8i64;
	}
LABEL_11:
	v14 = 0i64;
	v13 = 0i64;
	v15 = 0i64;
	v13 = *(_QWORD*)a2;
	LOBYTE(v14) = *((_BYTE*)a2 + 8);
	BYTE1(v14) = *((_BYTE*)a2 + 12);
	BYTE2(v14) = *((_BYTE*)a2 + 16);
	BYTE3(v14) = *((_BYTE*)a2 + 20);
	sub_14018F2D0(&v11, (char*)a2 + 24);
	v9 = v12;
	v15 = v12;
	sub_1403F4900(qword_140C65898, 0x33Fu, (__int64)&v13);
	if (v9)
		sub_14018B900(v9, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659E0: using guessed type __int64 qword_140C659E0;

