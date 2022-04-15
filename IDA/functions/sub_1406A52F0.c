//----- (00000001406A52F0) ----------------------------------------------------
__int64 __fastcall sub_1406A52F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_14:
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
	if (!v4
		|| (v5 = **(unsigned int**)(v3 + 8), v5 >= (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3)
		|| (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v5)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_14;
	}
	v7 = sub_140206C60(*(_DWORD*)(v6 + 4));
	v9 = sub_14034BDD0(v8, *(_DWORD*)(v7 + 12));
	v10 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v9)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710((__int64)a1, v10, v11);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v14)
	{
		sub_14018B900(v14, 0);
		return 1i64;
	}
	return 1i64;
}
// 1406A5380: variable 'v8' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

