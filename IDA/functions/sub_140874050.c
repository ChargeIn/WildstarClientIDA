//----- (0000000140874050) ----------------------------------------------------
unsigned __int64* __fastcall sub_140874050(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rax
	unsigned __int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rsi
	_QWORD* v9; // rax
	_QWORD* v10; // rdi

	*a1 = 0i64;
	if (!*(_DWORD*)a2)
		return a1;
	v5 = *(_QWORD*)(a2 + 144);
	v6 = *(_QWORD*)(v5 + 32);
	if (!v6)
		return a1;
	sub_140865FB0(*(_QWORD*)(v5 + 32));
	v7 = *a1;
	*a1 = v6;
	if (v7)
		sub_140866000(v7);
	v8 = *a1;
	v9 = sub_140873F00((__int64*)(a3 + 192), *a1);
	v10 = v9;
	if (v9)
	{
		if (!*((_DWORD*)v9 + 2))
			sub_140865FB0(v8);
		++* ((_DWORD*)v10 + 2);
	}
	return a1;
}

