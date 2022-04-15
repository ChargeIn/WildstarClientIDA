#include "../winhttp.h"

//----- (00000001406542A0) ----------------------------------------------------
__int64 __fastcall sub_1406542A0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64* v8; // rdx
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v8 = (unsigned __int64*)&unk_1409D143F;
		goto LABEL_16;
	}
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
		v5 = *(_DWORD*)(v4 + 108);
	else
		v5 = 0;
	v6 = sub_1401ED460(v5);
	if (!v6)
	{
		v8 = (unsigned __int64*)&unk_1409D145B;
	LABEL_16:
		sub_140058710(a1, v8, 0i64);
		return 1i64;
	}
	v9 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 8));
	v10 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v9)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710(a1, v10, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v14)
	{
		sub_14018B900(v14, 0);
		return 1i64;
	}
	return 1i64;
}
// 1406542F9: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

