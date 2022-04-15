//----- (00000001406825B0) ----------------------------------------------------
__int64 __fastcall sub_1406825B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r10
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r10
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64* v13; // rdx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	if (!qword_140C65970
		|| !*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v4 = *(_QWORD*)(v2 + 8)) == 0
		|| (v5 = *(_QWORD*)(v4 + 8)) == 0)
	{
		v13 = (unsigned __int64*)&unk_1409D14A9;
		goto LABEL_18;
	}
	v6 = sub_140617410(v3, *(_DWORD*)(v5 + 4));
	if (!v6 || *(_DWORD*)(*(_QWORD*)(v6 + 152) + 4i64) != 4 || *(_DWORD*)v6 != 1)
	{
		v13 = (unsigned __int64*)&unk_1409D14AA;
	LABEL_18:
		sub_140058710((__int64)a1, v13, 0i64);
		return 1i64;
	}
	v9 = sub_14034BDD0(v7, *(_DWORD*)(v8 + 12));
	v10 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v9)[1];
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
	if (v15)
	{
		sub_14018B900(v15, 0);
		return 1i64;
	}
	return 1i64;
}
// 140682611: variable 'v3' is possibly undefined
// 140682634: variable 'v7' is possibly undefined
// 140682630: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

