//----- (00000001406616C0) ----------------------------------------------------
__int64 __fastcall sub_1406616C0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // r8d
	__int64 v5; // rcx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rax
	__int64 v8; // r9
	_DWORD* v9; // rcx
	__int64 result; // rax
	int v11; // edx
	__int64 v12; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_8;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		goto LABEL_8;
	v4 = *(_DWORD*)(v3 + 8);
	v5 = *(_QWORD*)(qword_140C65898 + 27728);
	if (!v5)
		goto LABEL_8;
	v6 = *(_QWORD*)(v5 + 120);
	v7 = 0i64;
	if (!v6)
		goto LABEL_8;
	v8 = *(_QWORD*)(v5 + 112);
	v9 = (_DWORD*)(v8 + 4);
	while (*v9 != v4)
	{
		++v7;
		v9 += 2;
		if (v7 >= v6)
			goto LABEL_8;
	}
	v11 = *(_DWORD*)(v8 + 8 * v7);
	if (v11)
	{
		v12 = *(_QWORD*)(a1 + 16);
		result = 1i64;
		*(_DWORD*)(v12 + 8) = 3;
		*(double*)v12 = (double)v11;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_8:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

