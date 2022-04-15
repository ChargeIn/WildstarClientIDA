//----- (0000000140657A10) ----------------------------------------------------
__int64 __fastcall sub_140657A10(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (!v4)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_19:
		a1[2] += 16i64;
		return 1i64;
	}
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| *(_DWORD*)(v3 + 128) != 5
		|| (v5 = sub_140244B00(*(_DWORD*)(v4 + 168))) == 0
		|| (v6 = sub_140246480(*(_DWORD*)(v5 + 4))) == 0
		|| (v7 = sub_140242D40(*(_DWORD*)(v6 + 4))) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_19;
	}
	v9 = sub_14034BDD0(v8, *(_DWORD*)(v7 + 4));
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
		sub_14018B900(v14, 0);
	return 1i64;
}
// 140657AC1: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

