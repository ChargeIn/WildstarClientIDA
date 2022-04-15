//----- (000000014050D220) ----------------------------------------------------
__int64 __fastcall sub_14050D220(_QWORD* a1)
{
	int v2; // esi
	int* v3; // rax
	__int64 v4; // rcx
	unsigned __int64* v5; // rbx
	int* v6; // rbp
	int* v7; // r14
	__int16* v8; // rax
	_QWORD* v9; // rcx
	unsigned __int64* v10; // rax
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_14018B280(8i64, 0);
	v5 = (unsigned __int64*)v3;
	v6 = v3;
	v7 = v3 + 2;
	if (v3)
		*(_BYTE*)v3 = 0;
	v8 = sub_14034BDD0(v4, v2);
	if (v8)
	{
		v9 = sub_14018F0E0(&v13, (unsigned __int16*)v8);
		v10 = v5;
		v5 = (unsigned __int64*)v9[1];
		v9[1] = v10;
		v9[2] = v6;
		v9[3] = v7;
		if (v14)
			sub_14018B900(v14, 0);
	}
	if (v5)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v5 + v11));
		sub_140058710((__int64)a1, v5, v11);
		sub_14018B900((__int64)v5, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14050D267: variable 'v4' is possibly undefined

