//----- (00000001403D9200) ----------------------------------------------------
__int64 __fastcall sub_1403D9200(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // r15
	__int64 v4; // rdi
	__int64 v5; // rbx
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rsi
	__int64* v8; // rsi
	__int64 v9; // rsi
	__int16* v10; // rcx
	__int64 v11; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 28512);
	v5 = *(_QWORD*)(v4 + 16);
	if (v5 == v4)
		return 0i64;
	while (1)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(v2 + 28448))(v5 + 48);
		v7 = *(_QWORD**)(*(_QWORD*)(v2 + 28440) + 8 * (v6 % *(_QWORD*)(v2 + 28432)));
		if (v7)
		{
			while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 28456))(v5 + 48, v7 + 2))
			{
				v7 = (_QWORD*)v7[1];
				if (!v7)
					goto LABEL_11;
			}
			v8 = v7 + 3;
			if (v8)
			{
				v9 = *v8;
				v10 = &word_140B7B704;
				if (*(_QWORD*)(v9 + 16))
					v10 = *(__int16**)(v9 + 16);
				if (!(unsigned int)sub_14018E2C0((__int64)v10, a2))
					return v9;
			}
		}
	LABEL_11:
		v11 = *(_QWORD*)(v5 + 24);
		if (v11)
		{
			v5 = *(_QWORD*)(v5 + 24);
			for (i = *(_QWORD*)(v11 + 16); i; i = *(_QWORD*)(i + 16))
				v5 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v5 = j;
			if (*(_QWORD*)(v5 + 24) != j)
				v5 = j;
		}
		if (v5 == v4)
			return 0i64;
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

