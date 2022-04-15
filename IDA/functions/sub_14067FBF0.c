//----- (000000014067FBF0) ----------------------------------------------------
__int64 __fastcall sub_14067FBF0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD** v3; // rdi
	_DWORD* v4; // rcx
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rcx
	bool v8; // zf
	_DWORD* v9; // rax

	v2 = sub_14067B760(a1);
	v3 = (_QWORD**)v2;
	if (!v2
		|| (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) < 2
		|| !qword_140C65970
		|| *(_DWORD*)(qword_140C65970 + 8) != 3)
	{
		goto LABEL_10;
	}
	if (*(_DWORD*)(*v3[6] + 12i64) == 18)
	{
		if (((unsigned int(__fastcall*)(_QWORD**))(*v3)[5])(v3))
		{
			v5 = ((__int64(__fastcall*)(_QWORD**, __int64))(*v3)[16])(v3, 1347241296i64);
			v6 = 0;
			v7 = v5;
			v8 = v5 == 0;
			v9 = (_DWORD*)a1[2];
			if (!v8)
				LOBYTE(v6) = *(_DWORD*)(v7 + 24) != 0;
			goto LABEL_11;
		}
	LABEL_10:
		v9 = (_DWORD*)a1[2];
		v6 = 0;
	LABEL_11:
		v9[2] = 1;
		*v9 = v6;
		goto LABEL_12;
	}
	v4 = (_DWORD*)a1[2];
	*v4 = 0;
	v4[2] = 1;
LABEL_12:
	a1[2] += 16i64;
	return 1i64;
}
// 140C65970: using guessed type __int64 qword_140C65970;

