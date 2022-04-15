//----- (0000000140740F60) ----------------------------------------------------
__int64 __fastcall sub_140740F60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rcx
	_DWORD* v5; // rax
	__int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0 || !*(_DWORD*)(v3 + 224))
	{
		v5 = (_DWORD*)a1[2];
		*v5 = 0;
		goto LABEL_8;
	}
	if ((__int64)*sub_14073FAF0(*(unsigned int**)(v2 + 8), v7, 0) <= 0)
	{
		sub_14073FE40(v3, 0);
		v5 = (_DWORD*)a1[2];
		*v5 = 1;
	LABEL_8:
		v5[2] = 1;
		goto LABEL_9;
	}
	v4 = (_DWORD*)a1[2];
	*v4 = 0;
	v4[2] = 1;
LABEL_9:
	a1[2] += 16i64;
	return 1i64;
}
// 140740F60: using guessed type __int64 var_28[5];

