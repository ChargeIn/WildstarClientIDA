//----- (0000000140654A90) ----------------------------------------------------
__int64 __fastcall sub_140654A90(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rdx
	int v8; // eax
	__int64 v9; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& (v4 = (int*)sub_1406622C0(a1, 2)) != 0i64
		&& (v5 = sub_1403D90D0(qword_140C65898, *v4)) != 0)
	{
		v6 = *(unsigned int*)(v5 + 60);
		if (!(_DWORD)v6)
			v6 = *(unsigned int*)(v5 + 56);
		v7 = *(unsigned int*)(v3 + 60);
		if (!(_DWORD)v7)
			v7 = *(unsigned int*)(v3 + 56);
		v8 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65A10 + 24i64))(
			qword_140C65A10,
			v7,
			v6);
		v9 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;

