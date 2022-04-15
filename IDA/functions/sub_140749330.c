//----- (0000000140749330) ----------------------------------------------------
__int64 __fastcall sub_140749330(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	int v4; // esi
	unsigned int v5; // eax
	int v6; // ebx
	_DWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	_DWORD* v10; // rax
	_DWORD* v12; // rax

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = *(_QWORD*)(qword_140C65898 + 25744);
		if ((!v2 || !*(_DWORD*)(v2 + 684)) && !(unsigned int)sub_1403BB8D0())
		{
			v3 = sub_1400E93D0(a1);
			v4 = sub_1400F26A0(v3 + 384, 1);
			v5 = sub_1400F26A0(v3 + 384, 2);
			v6 = v5;
			if (v4 >= 3)
			{
				v7 = *(_DWORD**)(a1 + 16);
				*v7 = 0;
				v7[2] = 1;
			LABEL_15:
				*(_QWORD*)(a1 + 16) += 16i64;
				return 1i64;
			}
			if (v4 == 1)
			{
				v9 = sub_1401FD360(v5);
			}
			else
			{
				v8 = (unsigned int)(v4 - 2);
				if (v4 != 2)
					goto LABEL_13;
				v9 = sub_1401FD7A0(v5);
			}
			if (!v9)
			{
				v10 = *(_DWORD**)(a1 + 16);
				*v10 = 0;
			LABEL_14:
				v10[2] = 1;
				goto LABEL_15;
			}
		LABEL_13:
			sub_1403D1610(v8, v4, v6);
			v10 = *(_DWORD**)(a1 + 16);
			*v10 = 1;
			goto LABEL_14;
		}
	}
	v12 = *(_DWORD**)(a1 + 16);
	*v12 = 0;
	v12[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 1407493F8: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

