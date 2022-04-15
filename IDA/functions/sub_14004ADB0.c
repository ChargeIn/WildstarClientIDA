//----- (000000014004ADB0) ----------------------------------------------------
__int64 __fastcall sub_14004ADB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	_DWORD* v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rbx
	unsigned int* v8; // rbx
	__int64 v9; // rdi
	int* v10; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
			if (v4)
			{
				if (*(_QWORD*)(v4 + 16))
				{
					v5 = (_DWORD*)(a1[3] + 16i64);
					if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
						v6 = 0;
					else
						v6 = sub_140056D60(a1, 2u);
					v7 = sub_1401EFEE0(v6);
					if (v7)
					{
						sub_140049CD0(v4);
						v8 = (unsigned int*)(v7 + 24);
						v9 = 16i64;
						do
						{
							v10 = sub_1400B5DF0(qword_140C658F0, *v8, 0i64);
							if (v10 && (v10[85] & 0x400) != 0 && v10[96])
								(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(v4 + 16) + 80i64))(
									*(_QWORD*)(v4 + 16),
									(unsigned int)v10[95],
									(unsigned int)v10[97],
									0i64);
							++v8;
							--v9;
						} while (v9);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658F0: using guessed type __int64 qword_140C658F0;

