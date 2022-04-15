//----- (0000000140452750) ----------------------------------------------------
__int64 __fastcall sub_140452750(__int64 a1, unsigned int a2)
{
	__int64 v2; // r12
	__int64 result; // rax
	unsigned int v4; // r15d
	unsigned int* v5; // rdi
	__int64 v6; // rbp
	int v7; // esi
	int v8; // r14d
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rax

	v2 = qword_140C65910;
	result = sub_140201760(a2);
	if (result)
	{
		v4 = 0;
		v5 = (unsigned int*)(result + 8);
		v6 = 6i64;
		v7 = 0;
		v8 = 0;
		while (1)
		{
			v9 = *v5;
			if (*v5)
			{
				++v8;
				if (qword_140C63840)
				{
					v10 = qword_140C63840(off_140A6A4E8, v9, qword_140C63858);
				LABEL_9:
					if (v10)
					{
						v11 = sub_1404530F0(v2, *(_DWORD*)(v10 + 24), *(_DWORD*)(v10 + 28));
						if (v11)
						{
							if (*(_DWORD*)(v11 + 4) || *(_DWORD*)(v11 + 8))
								++v7;
						}
					}
					goto LABEL_14;
				}
				if (!dword_140C64C20 && (int)sub_1402010C0() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E50 + 24i64))(qword_140C64E50, v9);
					goto LABEL_9;
				}
			}
		LABEL_14:
			++v5;
			if (!--v6)
			{
				LOBYTE(v4) = v7 == v8;
				return v4;
			}
		}
	}
	return result;
}
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;
// 140C65910: using guessed type __int64 qword_140C65910;

