//----- (00000001400617F0) ----------------------------------------------------
char* __fastcall sub_1400617F0(__int64 a1, _DWORD* a2)
{
	_QWORD* v4; // rax
	char* v5; // r14
	_QWORD* v6; // rsi
	unsigned __int64 i; // rdx
	int v8; // edx
	int v9; // edx
	char* result; // rax

	v4 = sub_1400623D0(a1, a2, 16);
	v5 = (char*)a2 - *(_QWORD*)(a1 + 64);
	v6 = v4;
	if (*((_DWORD*)v4 + 2) != 6)
		sub_14005A950(a1, (__int64)a2, aCall);
	for (i = *(_QWORD*)(a1 + 16); i > (unsigned __int64)a2; i -= 16i64)
	{
		*(_QWORD*)i = *(_QWORD*)(i - 16);
		*(_DWORD*)(i + 8) = *(_DWORD*)(i - 8);
	}
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
	{
		v8 = *(_DWORD*)(a1 + 88);
		if (v8 < 1)
			v9 = v8 + 1;
		else
			v9 = 2 * v8;
		sub_140061210(a1, v9);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	result = &v5[*(_QWORD*)(a1 + 64)];
	*(_QWORD*)result = *v6;
	*((_DWORD*)result + 2) = *((_DWORD*)v6 + 2);
	return result;
}

