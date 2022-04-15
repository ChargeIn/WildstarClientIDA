//----- (000000014072B1F0) ----------------------------------------------------
__int64 __fastcall sub_14072B1F0(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rbx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = qword_140C665E0;
	v7 = v1 + 384;
	if (qword_140C665E0)
	{
		if (dword_140C4B488)
			sub_14072AFA0(qword_140C665E0, &dword_140C4B488);
		v8 = *(_QWORD*)(v6 + 1168);
		*(_DWORD*)(v6 + 20) = 10;
		sub_14078B4A0(v8);
	}
	v9 = qword_140C65A48;
	if (qword_140C65A48)
		*(_DWORD*)(v9 + 72) = sub_1400F26A0(v7, 1);
	return 0i64;
}
// 140C4B488: using guessed type int dword_140C4B488;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65A48: using guessed type __int64 qword_140C65A48;
// 140C665E0: using guessed type __int64 qword_140C665E0;

