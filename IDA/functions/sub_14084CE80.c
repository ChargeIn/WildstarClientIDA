//----- (000000014084CE80) ----------------------------------------------------
__int64 __fastcall sub_14084CE80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	__int64 v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // rdi
	unsigned int v11; // esi
	int v13; // ebx
	int v14; // ebx

	v8 = sub_1408819F0(dword_140C10F20, 80i64);
	if (!v8)
		return 52i64;
	v9 = sub_14082B2C0(v8, *(_QWORD*)(a2 + 16));
	v10 = (_QWORD*)v9;
	if (!v9)
		return 52i64;
	if ((unsigned int)sub_140857370(a4, *(_QWORD*)a1, *(_BYTE*)(a1 + 24), v9) != 1
		|| (unsigned int)sub_1408572D0(a4, *(_QWORD*)(a1 + 8), *(_BYTE*)(a1 + 25), (__int64)v10) != 1)
	{
		v14 = dword_140C10F20;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*v10 + 8i64))(v10, 0i64);
		sub_140881720(v14, (__int64)v10);
		return 52i64;
	}
	sub_140857240(a4, *(_QWORD*)(a1 + 16));
	v11 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a4 + 48i64))(a4, 14i64, a3);
	if (v11 == 1)
	{
		v10[1] = a4;
		sub_14082B460((__int64)(v10 + 4), a2 + 32);
		sub_14082BB80((__int64)qword_140C61B68, (__int64)v10);
	}
	else
	{
		v13 = dword_140C10F20;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*v10 + 8i64))(v10, 0i64);
		sub_140881720(v13, (__int64)v10);
	}
	return v11;
}
// 140C10F20: using guessed type int dword_140C10F20;

