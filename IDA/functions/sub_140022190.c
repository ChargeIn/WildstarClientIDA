//----- (0000000140022190) ----------------------------------------------------
__int64 __fastcall sub_140022190(__int64 a1, unsigned int* a2)
{
	unsigned __int64 v4; // r8
	unsigned __int64 v5; // r9
	_QWORD* v6; // rax
	_WORD* v7; // r8
	__int64 v8; // r9
	_WORD* v9; // rcx
	__int64 v10; // rdx

	*(_DWORD*)(a1 + 368) = 0;
	if (*a2 == 18)
	{
		v4 = *(_QWORD*)(a1 + 272);
		v5 = 0i64;
		if (v4)
		{
			v6 = *(_QWORD**)(a1 + 264);
			while (*v6 != *((_QWORD*)a2 + 1))
			{
				++v5;
				v6 += 102;
				if (v5 >= v4)
					goto LABEL_13;
			}
			v7 = (_WORD*)*((_QWORD*)a2 + 2);
			v8 = 816 * v5;
			v9 = (_WORD*)(v8 + *(_QWORD*)(a1 + 264) + 8i64);
			v10 = 33i64;
			while (v10 != -2147483613 && *v7)
			{
				*v9++ = *v7++;
				if (!--v10)
				{
					--v9;
					break;
				}
			}
			*v9 = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 264) + v8 + 712) = 0;
		}
	}
LABEL_13:
	sub_1400EA3E0(*(_QWORD*)(a1 + 72), "CharacterRename", byte_1409D0ABC, *a2, *((_QWORD*)a2 + 2));
	return 0i64;
}
// 14002222A: conditional instruction was optimized away because rdx.8!=0
// 1409D0ABC: using guessed type _BYTE byte_1409D0ABC[3];

