//----- (0000000140524020) ----------------------------------------------------
__int64 __fastcall sub_140524020(__int64 a1, _QWORD* a2)
{
	char* v4; // rax
	int* v5; // rbp
	__int64 v6; // r15
	int v7; // esi
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx
	_DWORD* v12; // rcx
	int v13; // eax
	BOOL v14; // eax
	__int64 result; // rax
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	int* v17; // [rsp+28h] [rbp-30h]

	v4 = (char*)sub_140056BB0(a2, 3u, 0i64);
	sub_14018F2D0(&v16, v4);
	v5 = v17;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = 0;
	if (v17)
	{
		v8 = 0i64;
		if (*(_WORD*)v17)
		{
			do
				++v8;
			while (*((_WORD*)v17 + v8));
		}
		v9 = sub_14018B280(2 * v8 + 18, 0);
		if (v9)
		{
			*((_QWORD*)v9 + 1) = v8;
			*(_QWORD*)v9 = off_140B55060;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		v11 = 2 * v8;
		sub_1407DB590(v9 + 4, v5, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		*(_QWORD*)(a1 + 16) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	v12 = dword_140A12138;
	if ((unsigned __int64)(a2[3] + 48i64) < a2[2])
		v12 = (_DWORD*)(a2[3] + 48i64);
	v13 = v12[2];
	v14 = v13 && (v13 != 1 || *v12);
	LOBYTE(v7) = v14;
	result = 0i64;
	*(_DWORD*)(a1 + 24) = v7;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

