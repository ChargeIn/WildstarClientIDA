//----- (0000000140143790) ----------------------------------------------------
__int64 __fastcall sub_140143790(_QWORD* a1)
{
	int v1; // esi
	int v3; // ebp
	char* v4; // rax
	unsigned __int16* v5; // rdi
	_DWORD* v6; // rdx
	__int128 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+30h] [rbp-18h]

	v1 = 0;
	v3 = 0;
	v4 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v8, v4);
	v5 = (unsigned __int16*)*((_QWORD*)&v8 + 1);
	if (*((_QWORD*)&v8 + 1) != v9)
	{
		sub_1401431C0(&v8, a1);
		LOBYTE(v3) = sub_140142780(qword_140C63678, v5, &v8, 0i64) != 0;
	}
	v6 = (_DWORD*)a1[2];
	LOBYTE(v1) = v3 != 0;
	v6[2] = 1;
	*v6 = v1;
	a1[2] += 16i64;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 1i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

