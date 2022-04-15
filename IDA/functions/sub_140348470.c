//----- (0000000140348470) ----------------------------------------------------
void __fastcall sub_140348470(__int64 a1)
{
	bool v1; // zf
	_QWORD* v3; // rdi
	unsigned int i; // esi
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	int v9; // r8d
	_QWORD* v10; // rax
	_QWORD* v11; // rdx
	__int64 v12; // rdx

	v1 = *(_DWORD*)(a1 + 64) == 0;
	*(_QWORD*)a1 = off_140B652D0;
	if (!v1)
		sub_1403487F0(a1);
	v3 = (_QWORD*)(a1 + 80);
	for (i = 0; i < 2; ++i)
	{
		if (*v3)
		{
			sub_1403499E0(a1 + 32 * (i + 3i64));
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			*v3 = 0i64;
		}
		++v3;
	}
	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 48);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	sub_14033FB30(v6, a1);
	v7 = *(_QWORD**)(a1 + 168);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 176);
	v8 = *(_QWORD*)(a1 + 176);
	if (v8)
		*(_QWORD*)(v8 + 168) = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v9 = 1;
	v10 = (_QWORD*)(a1 + 176);
	do
	{
		v11 = (_QWORD*)*(v10 - 4);
		v10 -= 4;
		if (v11)
			*v11 = v10[1];
		v12 = v10[1];
		if (v12)
			*(_QWORD*)(v12 + 16) = *v10;
		--v9;
		*v10 = 0i64;
		v10[1] = 0i64;
	} while (v9 >= 0);
	sub_140349D80(a1 + 8);
}
// 1403484FB: variable 'v6' is possibly undefined
// 140B652D0: using guessed type __int64 (__fastcall *off_140B652D0[24])();

