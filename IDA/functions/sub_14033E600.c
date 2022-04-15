//----- (000000014033E600) ----------------------------------------------------
__int64* __fastcall sub_14033E600(__int64* a1, _QWORD* a2, __int64* a3, __int64* a4)
{
	__int64 i; // rbp
	__int64* v8; // rax
	__int64 v9; // rax
	__int64 v10; // r14
	__int64* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rsi
	void(__fastcall * **v14)(_QWORD); // rcx
	__int64 v15; // rcx

	for (i = ((__int64)(a2[2] - *a2) >> 4) + 31 * ((a3[3] - a2[3]) >> 3) + ((*a3 - a3[1]) >> 4) - 31; i > 0; --i)
	{
		if (*a3 == a3[1])
		{
			v8 = (__int64*)(a3[3] - 8);
			a3[3] = (__int64)v8;
			v9 = *v8;
			a3[1] = v9;
			v9 += 496i64;
			a3[2] = v9;
			*a3 = v9;
		}
		*a3 -= 16i64;
		v10 = *a3;
		if (*a4 == a4[1])
		{
			v11 = (__int64*)(a4[3] - 8);
			a4[3] = (__int64)v11;
			v12 = *v11;
			a4[1] = v12;
			v12 += 496i64;
			a4[2] = v12;
			*a4 = v12;
		}
		*a4 -= 16i64;
		v13 = *a4;
		*(_DWORD*)v13 = *(_DWORD*)v10;
		v14 = *(void(__fastcall****)(_QWORD))(v10 + 8);
		if (*(void(__fastcall****)(_QWORD))(v13 + 8) != v14)
		{
			if (v14)
				(**v14)(v14);
			v15 = *(_QWORD*)(v13 + 8);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*(_QWORD*)(v13 + 8) = *(_QWORD*)(v10 + 8);
		}
	}
	*a1 = *a4;
	a1[1] = a4[1];
	a1[2] = a4[2];
	a1[3] = a4[3];
	return a1;
}

