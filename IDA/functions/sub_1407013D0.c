//----- (00000001407013D0) ----------------------------------------------------
__int64 __fastcall sub_1407013D0(_QWORD* a1)
{
	char* v2; // rax
	unsigned int v3; // eax
	void* v4; // rbp
	int v5; // esi
	int v6; // edi
	_DWORD* v7; // rax
	unsigned int v8; // eax
	_DWORD* v9; // rdx
	__int64 v11; // [rsp+30h] [rbp-28h] BYREF
	void* lpv; // [rsp+38h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v11, v2);
	v3 = sub_140056D60(a1, 2u);
	v4 = lpv;
	v5 = 0;
	v6 = sub_1403E1170(lpv, v3);
	v7 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
	{
		v8 = sub_140056D60(a1, 3u);
		if (v8 <= 2)
		{
			if (v6)
				v6 = (*(__int64(__fastcall**)(__int64, void*, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65890 + 8i64))(
					qword_140C65890,
					v4,
					v8,
					0i64,
					0) == 0;
		}
	}
	v9 = (_DWORD*)a1[2];
	LOBYTE(v5) = v6 != 0;
	v9[2] = 1;
	*v9 = v5;
	a1[2] += 16i64;
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65890: using guessed type __int64 qword_140C65890;

