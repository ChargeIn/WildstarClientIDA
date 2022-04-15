//----- (00000001402ACE40) ----------------------------------------------------
__int64* __fastcall sub_1402ACE40(__int64* a1, __int64 a2, char* a3)
{
	_QWORD* v3; // rdi
	_QWORD* v4; // rbx
	char* v7; // r14
	__int64 v8; // rbp
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64* v11; // rdx
	__int64 v12; // rax

	v3 = a1 + 1;
	v4 = a1 + 13;
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
	v7 = (char*)(a3 - (char*)a1);
	v8 = 4i64;
	do
	{
		*v3 = *(_QWORD*)((char*)v3 + (_QWORD)v7);
		v3[1] = *(_QWORD*)((char*)v3 + (_QWORD)v7 + 8);
		v3[2] = *(_QWORD*)((char*)v3 + (_QWORD)v7 + 16);
		v9 = *(_QWORD*)((char*)v4 + (_QWORD)v7);
		if (*v4 != v9)
		{
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			if (*v4)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 16i64))(*v4);
			*v4 = *(_QWORD*)((char*)v4 + (_QWORD)v7);
		}
		++v4;
		v3 += 3;
		--v8;
	} while (v8);
	*((_DWORD*)a1 + 34) = *((_DWORD*)a3 + 34);
	*((_DWORD*)a1 + 35) = *((_DWORD*)a3 + 35);
	v10 = *a1;
	*((_DWORD*)a1 + 36) = *((_DWORD*)a3 + 36);
	v11 = (__int64*)(v10 + 8592);
	*((_DWORD*)a1 + 37) = *((_DWORD*)a3 + 37);
	*((_DWORD*)a1 + 38) = *((_DWORD*)a3 + 38);
	*((_DWORD*)a1 + 39) = *((_DWORD*)a3 + 39);
	*((_DWORD*)a1 + 40) = *((_DWORD*)a3 + 40);
	*((_DWORD*)a1 + 41) = *((_DWORD*)a3 + 41);
	if (!a1[21])
	{
		a1[21] = (__int64)v11;
		a1[22] = *v11;
		*v11 = (__int64)a1;
		v12 = a1[22];
		if (v12)
			*(_QWORD*)(v12 + 168) = a1 + 22;
	}
	return a1;
}

