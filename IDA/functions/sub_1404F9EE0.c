//----- (00000001404F9EE0) ----------------------------------------------------
__int64 __fastcall sub_1404F9EE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rsi
	_DWORD* v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rax
	unsigned int* v9; // rbx
	__int64 v10; // rdi
	int* v11; // rax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(_QWORD*)(v3 + 2168);
		if (v5)
		{
			v6 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
				v7 = 0;
			else
				v7 = sub_140056D60(a1, 2u);
			v8 = sub_1401EFEE0(v7);
			if (v8)
			{
				v9 = (unsigned int*)(v8 + 24);
				v10 = 16i64;
				do
				{
					v11 = sub_1400B5DF0(qword_140C658F0, *v9, 0i64);
					if (v11 && (v11[85] & 0x400) != 0 && v11[96])
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v5 + 80i64))(
							v5,
							(unsigned int)v11[95],
							(unsigned int)v11[97],
							0i64);
					++v9;
					--v10;
				} while (v10);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658F0: using guessed type __int64 qword_140C658F0;

