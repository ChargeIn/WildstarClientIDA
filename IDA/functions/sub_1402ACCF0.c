//----- (00000001402ACCF0) ----------------------------------------------------
__int64* __fastcall sub_1402ACCF0(__int64* a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64* v7; // rdx
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax

	*((_DWORD*)a1 + 2) = 0;
	a1[2] = 0i64;
	*((_DWORD*)a1 + 8) = 0;
	a1[5] = 0i64;
	*((_DWORD*)a1 + 14) = 0;
	a1[8] = 0i64;
	*((_DWORD*)a1 + 20) = 0;
	a1[11] = 0i64;
	a1[13] = 0i64;
	a1[14] = 0i64;
	a1[15] = 0i64;
	a1[16] = 0i64;
	a1[21] = 0i64;
	a1[22] = 0i64;
	*a1 = a2;
	v3 = *(_QWORD*)(a2 + 8584);
	*((_DWORD*)a1 + 2) = 0;
	a1[2] = 0i64;
	*((_DWORD*)a1 + 8) = 1;
	a1[5] = 0i64;
	*((_DWORD*)a1 + 14) = 1;
	a1[8] = 0i64;
	*((_DWORD*)a1 + 20) = 1;
	a1[11] = 0i64;
	v4 = *(_QWORD*)(v3 + 112);
	if (a1[13] != v4)
	{
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		v5 = a1[13];
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		a1[13] = *(_QWORD*)(v3 + 112);
	}
	v6 = *a1;
	*((_DWORD*)a1 + 34) = *(_DWORD*)(v3 + 24);
	v7 = (__int64*)(v6 + 8592);
	*((_DWORD*)a1 + 35) = *(_DWORD*)(v3 + 28);
	v8 = *((_DWORD*)a1 + 34);
	a1[18] = 0i64;
	*((_DWORD*)a1 + 38) = v8;
	v9 = *((_DWORD*)a1 + 35);
	*((_DWORD*)a1 + 40) = 0;
	*((_DWORD*)a1 + 41) = 1065353216;
	*((_DWORD*)a1 + 39) = v9;
	if (!a1[21])
	{
		a1[21] = (__int64)v7;
		a1[22] = *v7;
		*v7 = (__int64)a1;
		v10 = a1[22];
		if (v10)
			*(_QWORD*)(v10 + 168) = a1 + 22;
	}
	*(_DWORD*)(*a1 + 7176) |= 0x18u;
	return a1;
}

