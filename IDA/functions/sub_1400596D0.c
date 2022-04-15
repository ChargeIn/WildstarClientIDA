//----- (00000001400596D0) ----------------------------------------------------
__int64 __fastcall sub_1400596D0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rdi

	v1 = *(_QWORD*)(a1 + 32);
	sub_140060CB0(a1, *(_QWORD*)(a1 + 64));
	sub_14005DC50(a1);
	v3 = *(_QWORD*)(a1 + 32);
	v4 = 8i64 * *(int*)(v3 + 12);
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(v3 + 16))(*(_QWORD*)(v3 + 24), *(_QWORD*)v3, v4, 0i64);
	*(_QWORD*)(v3 + 120) -= v4;
	v5 = *(_QWORD*)(a1 + 32);
	v6 = *(_QWORD*)(v1 + 104);
	v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(v5 + 16))(
		*(_QWORD*)(v5 + 24),
		*(_QWORD*)(v1 + 88),
		v6,
		0i64);
	*(_QWORD*)(v5 + 120) -= v6;
	*(_QWORD*)(v1 + 104) = 0i64;
	*(_QWORD*)(v1 + 88) = v7;
	v8 = *(_QWORD*)(a1 + 32);
	v9 = 40i64 * *(int*)(a1 + 92);
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(v8 + 16))(
		*(_QWORD*)(v8 + 24),
		*(_QWORD*)(a1 + 80),
		v9,
		0i64);
	*(_QWORD*)(v8 + 120) -= v9;
	v10 = *(_QWORD*)(a1 + 32);
	v11 = 16i64 * *(int*)(a1 + 88);
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(v10 + 16))(
		*(_QWORD*)(v10 + 24),
		*(_QWORD*)(a1 + 64),
		v11,
		0i64);
	*(_QWORD*)(v10 + 120) -= v11;
	return (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(v1 + 16))(*(_QWORD*)(v1 + 24), a1, 616i64, 0i64);
}

