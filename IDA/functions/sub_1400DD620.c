//----- (00000001400DD620) ----------------------------------------------------
__int64 __fastcall sub_1400DD620(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	unsigned __int64 v4; // rdx
	_DWORD* v5; // rcx
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	_QWORD* v13; // [rsp+30h] [rbp-18h]

	v3 = sub_1400D66A0(a1, 1u);
	if (v3)
	{
		v13 = a1;
		v12 = -2;
		v11 = off_140B56A08;
		sub_1400579E0((__int64)a1, v2, -2);
		v4 = a1[2];
		v5 = dword_140A12138;
		if (a1[3] + 16i64 < v4)
			v5 = (_DWORD*)(v13[3] + 16i64);
		*(_QWORD*)v4 = *(_QWORD*)v5;
		*(_DWORD*)(v4 + 8) = v5[2];
		a1[2] += 16i64;
		v12 = sub_1400578C0((__int64)v13);
		if ((__int64(__fastcall***)())(v3 + 816) != &v11)
		{
			*(_QWORD*)(v3 + 832) = v13;
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v11[1])(&v11))
			{
				sub_1400579E0(*(_QWORD*)(v3 + 832), v6, *(_DWORD*)(v3 + 824));
				v7 = sub_14005C3C0(*(_QWORD*)(v13[4] + 160i64), v12);
				v9 = *(_QWORD*)(v8 + 16);
				*(_QWORD*)v9 = *v7;
				*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
				*(_QWORD*)(v8 + 16) += 16i64;
				*(_DWORD*)(v3 + 824) = sub_1400578C0(*(_QWORD*)(v3 + 832));
			}
		}
		v11 = off_140B56A08;
		if (v13)
			sub_1400579E0((__int64)v13, v6, v12);
	}
	return 0i64;
}
// 1400DD66A: variable 'v2' is possibly undefined
// 1400DD6E0: variable 'v6' is possibly undefined
// 1400DD6FE: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

