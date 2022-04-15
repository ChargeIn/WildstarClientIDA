//----- (0000000140839AD0) ----------------------------------------------------
__int64 __fastcall sub_140839AD0(__int64 a1, int a2, int a3)
{
	unsigned int v6; // eax
	_DWORD* v7; // rcx
	_DWORD* v8; // rbx
	unsigned int v9; // esi
	int v11; // [rsp+60h] [rbp+8h] BYREF
	__int64 v12; // [rsp+78h] [rbp+20h] BYREF

	if ((*(_DWORD*)(a1 + 96) & 0xFFFFFFFD) != 0 || *(_DWORD*)(a1 + 200))
		return 1i64;
	*(_DWORD*)(a1 + 96) = 1;
	v11 = 0;
	while (1)
	{
		v12 = 0i64;
		v6 = sub_140839D40(a1, &v11, &v12);
		v7 = *(_DWORD**)(a1 + 128);
		v8 = *(_DWORD**)(a1 + 192);
		v9 = v6;
		if (v7)
			sub_140828460(v7);
		if (v8)
			++* v8;
		*(_QWORD*)(a1 + 128) = v8;
		if (!v9 || (unsigned int)sub_140839E50(a1, v9, v11, a2, a3) == 1)
			break;
		sub_14083B960(qword_140C61B80, *(_DWORD*)(a1 + 136), v9, v12);
	}
	return 1i64;
}
// 140C61B80: using guessed type __int64 qword_140C61B80;

