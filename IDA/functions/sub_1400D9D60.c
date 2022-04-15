//----- (00000001400D9D60) ----------------------------------------------------
__int64 __fastcall sub_1400D9D60(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rdi
	unsigned __int64 v5; // rdx
	_DWORD* v6; // rcx
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	_QWORD* v13; // [rsp+30h] [rbp-18h]

	result = sub_1400D66A0(a1, 1u);
	v4 = result;
	if (result)
	{
		v13 = a1;
		v12 = -2;
		v11 = off_140B56A08;
		sub_1400579E0((__int64)a1, v3, -2);
		v5 = a1[2];
		v6 = dword_140A12138;
		if (a1[3] + 32i64 < v5)
			v6 = (_DWORD*)(v13[3] + 32i64);
		*(_QWORD*)v5 = *(_QWORD*)v6;
		*(_DWORD*)(v5 + 8) = v6[2];
		a1[2] += 16i64;
		v12 = sub_1400578C0((__int64)v13);
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v11[1])(&v11))
			sub_1400C7F50(v4, &v11);
		v7 = sub_1400CDA50(v4);
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v7;
		v10 = (__int64)v13;
		a1[2] += 16i64;
		v11 = off_140B56A08;
		if (v10)
			sub_1400579E0(v10, v8, v12);
		return 1i64;
	}
	return result;
}
// 1400D9DB1: variable 'v3' is possibly undefined
// 1400D9E4F: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

