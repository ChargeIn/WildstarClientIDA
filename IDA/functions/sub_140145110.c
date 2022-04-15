//----- (0000000140145110) ----------------------------------------------------
_OWORD* __fastcall sub_140145110(_OWORD* a1, _QWORD* a2, const char* a3, __int64 a4, unsigned __int64* a5, int a6)
{
	unsigned __int64 v9; // r8
	void* v10; // rax
	int v11; // eax
	_QWORD* v12; // rcx
	__int128 v13; // xmm0
	__int64 v14; // rax
	void* v15; // rax
	int v16; // eax

	if (a5)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)a5 + v9));
		sub_140058710((__int64)a2, a5, v9);
	}
	else
	{
		*(_DWORD*)(a2[2] + 8i64) = 0;
		a2[2] += 16i64;
	}
	v10 = sub_1400580E0((__int64)a2, 1);
	sub_14005E8E0((__int64)a2, (__int64)v10, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v11 = sub_140145490((__int64)a2, -1);
	v12 = a2;
	if (!v11)
	{
		a2[2] -= 16i64;
		v14 = a2[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)a6;
		a2[2] += 16i64;
		v15 = sub_1400580E0((__int64)a2, 1);
		sub_14005E8E0((__int64)a2, (__int64)v15, (int*)(a2[2] - 16i64), a2[2] - 16i64);
		v16 = sub_140145490((__int64)a2, -1);
		v12 = a2;
		if (!v16)
			sub_140056830(a2, (unsigned __int64*)"%s missing attribute %s or [%d]", a3, (const char*)a5, a6);
	}
	v13 = *(_OWORD*)sub_140056AB0(v12, 0xFFFFFFFF);
	a2[2] -= 16i64;
	*a1 = v13;
	return a1;
}

