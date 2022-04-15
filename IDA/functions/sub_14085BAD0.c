//----- (000000014085BAD0) ----------------------------------------------------
__int64 __fastcall sub_14085BAD0(__int64 a1)
{
	unsigned int v2; // edi
	_QWORD* v3; // rax
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v9; // [rsp+48h] [rbp+10h]

	v2 = 2;
	v3 = (_QWORD*)sub_1408819F0(dword_140C10F20, 64i64);
	if (!v3)
		return 2i64;
	v4 = sub_140877140(v3, 6176, 0);
	v5 = v4;
	if (v4)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD*, __int64, _QWORD, _QWORD, _DWORD))(*v4 + 48i64))(
			v4,
			14i64,
			*(unsigned int*)(a1 + 160),
			0i64,
			0) == 1)
		{
			BYTE4(v9) = 1;
			LODWORD(v9) = *(_DWORD*)(a1 + 24);
			(*(void(__fastcall**)(_QWORD*, __int64))(*v5 + 40i64))(v5, v9);
			v6 = sub_1408819F0(dword_140C10F20, 80i64);
			if (v6)
			{
				v7 = sub_14082B2C0(v6, 0i64);
				if (v7)
				{
					*(_QWORD*)(v7 + 8) = v5;
					sub_14082BB80((__int64)qword_140C61B68, v7);
					v2 = 1;
				}
			}
		}
		(*(void(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
	}
	return v2;
}
// 140C10F20: using guessed type int dword_140C10F20;

