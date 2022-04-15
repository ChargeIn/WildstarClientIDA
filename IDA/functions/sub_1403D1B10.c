//----- (00000001403D1B10) ----------------------------------------------------
__int64 __fastcall sub_1403D1B10(__int64 a1, __int16 a2)
{
	__int64 v2; // rbp
	__int64 v4; // rdi
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // r14
	unsigned int v8; // ebx
	unsigned __int64 v9; // r8
	__int64 v10; // rdx
	int* i; // rcx

	v2 = qword_140C65898;
	v4 = qword_140C65898 + 28336;
	v5 = *(_QWORD*)(qword_140C65898 + 28344);
	v6 = sub_14018DB00(*(_QWORD*)(qword_140C65898 + 28336), v5 + 1, 2i64);
	v7 = v6;
	*((_WORD*)v6 + v5) = a2;
	if (*(int**)v4 != v6)
	{
		sub_1407DB590(v6, *(int**)v4, 2i64 * *(_QWORD*)(v4 + 8));
		if (*(_QWORD*)v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)v4 - 16i64) + 8i64))(*(_QWORD*)v4 - 16i64);
		*(_QWORD*)v4 = v7;
	}
	*(_QWORD*)(v4 + 8) = v5 + 1;
	v8 = sub_1403D02A0(v2);
	if (v8 == 1)
	{
		sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "CharacterEldanAugmentationsUpdated", &unk_1409D10E6);
		return 1i64;
	}
	else
	{
		v9 = *(_QWORD*)(v4 + 8);
		v10 = 0i64;
		if (v9)
		{
			for (i = *(int**)v4; *(_WORD*)i != a2; i = (int*)((char*)i + 2))
			{
				if (++v10 >= v9)
					return v8;
			}
			sub_140334370(v4, v10);
		}
		return v8;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

