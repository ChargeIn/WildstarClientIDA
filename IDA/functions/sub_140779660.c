//----- (0000000140779660) ----------------------------------------------------
void __fastcall sub_140779660(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	void(__fastcall * v4)(_QWORD, _QWORD); // rax
	unsigned int v5; // edi
	_QWORD** v6; // rbx
	__int64 i; // rcx
	_QWORD* j; // rax
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rax
	int v12; // eax

	v2 = (unsigned int)a2;
	if (!*(_DWORD*)(a1 + 8))
	{
		v4 = *(void(__fastcall**)(_QWORD, _QWORD))(a1 + 128);
		*(_DWORD*)(a1 + 8) = 1;
		*(_DWORD*)(a1 + 168) = 0;
		if (v4)
			v4((unsigned int)a2, *(_QWORD*)(a1 + 136));
		v5 = 0;
		v6 = (_QWORD**)(a1 + 24);
		do
		{
			if ((unsigned __int64)(int)v5 < 5)
			{
				for (i = (__int64)*(v6 - 1); i; i = (__int64)*(v6 - 1))
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)i + 32i64))(i, a2, v2);
				for (j = *v6; *v6; j = *v6)
					(*(void(__fastcall**)(_QWORD*, _QWORD, __int64))(*j + 32i64))(j, *j, v2);
			}
			++v5;
			v6 += 2;
		} while (v5 < 5);
		while (*(_QWORD*)(a1 + 96))
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96), a2, v2);
		v9 = qword_140C65898;
		if (qword_140C65898)
		{
			v10 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v10)
			{
				sub_1400EA3E0(v10, "ProgressClickWindowDisplay", byte_1409EC19C, 0i64);
				v9 = qword_140C65898;
			}
			v11 = *(_QWORD*)(v9 + 29064);
			if (v11 == a1)
			{
				if (v11)
				{
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)v11 + 8i64))(*(_QWORD*)(v9 + 29064), a2, v2);
					v12 = dword_140C636A8;
					*(_QWORD*)(v9 + 29064) = 0i64;
					*(_DWORD*)(v9 + 29072) = v12;
					*(_QWORD*)(v9 + 29064) = 0i64;
				}
			}
		}
	}
}
// 1407796C5: variable 'a2' is possibly undefined
// 1407796C5: variable 'v2' is possibly undefined
// 1409EC19C: using guessed type _BYTE byte_1409EC19C[24];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

