//----- (000000014033E780) ----------------------------------------------------
__int64* __fastcall sub_14033E780(__int64* a1, __int64* a2, _QWORD* a3, __int64* a4)
{
	__int64 i; // rbp
	_DWORD* v8; // r14
	__int64 v9; // rsi
	void(__fastcall * **v10)(_QWORD); // rcx
	__int64 v11; // rcx
	__int64* v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rcx

	for (i = 31 * ((a3[3] - a2[3]) >> 3) + ((__int64)(*a3 - a3[1]) >> 4) + ((a2[2] - *a2) >> 4) - 31; i > 0; --i)
	{
		v8 = (_DWORD*)*a2;
		v9 = *a4;
		*(_DWORD*)v9 = *(_DWORD*)*a2;
		v10 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v8 + 1);
		if (*(void(__fastcall****)(_QWORD))(v9 + 8) != v10)
		{
			if (v10)
				(**v10)(v10);
			v11 = *(_QWORD*)(v9 + 8);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(v9 + 8) = *((_QWORD*)v8 + 1);
		}
		*a2 += 16i64;
		if (*a2 == a2[2])
		{
			v12 = (__int64*)(a2[3] + 8);
			a2[3] = (__int64)v12;
			v13 = *v12;
			a2[1] = *v12;
			*a2 = v13;
			a2[2] = v13 + 496;
		}
		*a4 += 16i64;
		if (*a4 == a4[2])
		{
			v14 = (__int64*)(a4[3] + 8);
			a4[3] = (__int64)v14;
			v15 = *v14;
			a4[1] = *v14;
			*a4 = v15;
			a4[2] = v15 + 496;
		}
	}
	*a1 = *a4;
	a1[1] = a4[1];
	a1[2] = a4[2];
	a1[3] = a4[3];
	return a1;
}

