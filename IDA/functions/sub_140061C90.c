//----- (0000000140061C90) ----------------------------------------------------
__int64 __fastcall sub_140061C90(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r10
	__int64 v4; // rdx
	int v5; // r11d
	__int64 v6; // rax
	int v7; // r9d
	_QWORD* v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rcx

	v2 = (_QWORD*)a2;
	if ((*(_BYTE*)(a1 + 100) & 2) != 0)
		v2 = (_QWORD*)sub_140061B00(a1, a2);
	v4 = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = v4 - 40;
	v5 = *(_DWORD*)(v4 + 32);
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v5;
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(v4 - 40);
	for (*(_QWORD*)(a1 + 48) = *(_QWORD*)(v4 - 16); v7; --v7)
	{
		if ((unsigned __int64)v2 >= *(_QWORD*)(a1 + 16))
			break;
		v8 = v2;
		v9 = v6;
		v6 += 16i64;
		v10 = *v2;
		v2 += 2;
		*(_QWORD*)v9 = v10;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	}
	for (; v7 > 0; v6 += 16i64)
	{
		--v7;
		*(_DWORD*)(v6 + 8) = 0;
	}
	*(_QWORD*)(a1 + 16) = v6;
	return (unsigned int)(v5 + 1);
}

