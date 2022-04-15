//----- (0000000140373190) ----------------------------------------------------
__int64 __fastcall sub_140373190(__int64 a1, __int64* a2, __int64* a3)
{
	__int64 v6; // rsi
	__int64 v8; // rdx
	unsigned int v9; // ebp
	__int64 v10; // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	int v13; // eax
	unsigned int v14; // ebx
	__int64 v15; // rdx
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	unsigned __int64 v18; // rdx
	int v19; // eax
	bool v20; // sf
	__int64 v21; // [rsp+70h] [rbp+8h] BYREF
	__int64 v22; // [rsp+88h] [rbp+20h] BYREF

	v6 = sub_140350CD0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64), *(_DWORD*)(a1 + 12));
	if (!v6)
		return 2147500037i64;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = dword_140B65808[*(int*)(v8 + 156)];
	v10 = 0i64;
	v21 = 0i64;
	if ((*(_BYTE*)(v8 + 232) & 1) == 0
		|| ((v11 = *(_QWORD*)(v6 + 40)) != 0
			? (v11 <= qword_140C3FE70
				? (v12 = v11 + qword_140C3FE68)
				: (v12 = 0i64))
			: (v12 = 0i64),
			v13 = (*(__int64(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 136i64))(
				qword_140C65670,
				v12,
				v9,
				21i64,
				0,
				0,
				&v21),
			v10 = v21,
			v14 = v13,
			v13 >= 0))
	{
		v15 = *(_QWORD*)(a1 + 16);
		v16 = 0i64;
		v22 = 0i64;
		if ((*(_BYTE*)(v15 + 232) & 1) == 0
			|| *(int*)(v15 + 144) < 0
			|| ((v17 = *(_QWORD*)(v6 + 48)) != 0
				? (v17 <= qword_140C3FE70
					? (v18 = v17 + qword_140C3FE68)
					: (v18 = 0i64))
				: (v18 = 0i64),
				v19 = (*(__int64(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 136i64))(
					qword_140C65670,
					v18,
					v9,
					21i64,
					0,
					0,
					&v22),
				v10 = v21,
				v14 = v19,
				v20 = v19 < 0,
				v16 = v22,
				!v20))
		{
			*a2 = v10;
			if (v10)
			{
				(**(void(__fastcall***)(__int64))v10)(v10);
				v10 = v21;
				v16 = v22;
			}
			*a3 = v16;
			if (v16)
			{
				(**(void(__fastcall***)(__int64))v16)(v16);
				v10 = v21;
				v16 = v22;
			}
			v14 = 0;
		}
		if (v16)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
			v10 = v21;
		}
	}
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	return v14;
}
// 140B65808: using guessed type int dword_140B65808[4];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65670: using guessed type __int64 qword_140C65670;

