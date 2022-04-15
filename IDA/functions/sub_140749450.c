//----- (0000000140749450) ----------------------------------------------------
__int64 __fastcall sub_140749450(__int64 a1)
{
	_DWORD* v2; // rdx
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // esi
	int v10; // eax
	_DWORD* v11; // rax
	int v12; // eax
	__int64 v13; // rcx

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v4 = 0i64;
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		if (v5)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v4 = (unsigned int)(v4 + 1);
				v7 = (unsigned int)v4;
				if ((unsigned int)v4 >= v5)
					goto LABEL_7;
			}
			v8 = *(_QWORD*)(v6 + 8 * v4);
		}
		else
		{
		LABEL_7:
			v8 = 0i64;
		}
		v9 = sub_1400F26A0(v8 + 384, 1);
		v10 = sub_1400F26A0(v8 + 384, 2);
		if (v9 < 3)
		{
			v12 = sub_1403D16C0(qword_140C65898, v9, v10);
			v13 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v13 + 8) = 3;
			*(double*)v13 = (double)v12;
		}
		else
		{
			v11 = *(_DWORD**)(a1 + 16);
			*v11 = 0;
			v11[2] = 1;
		}
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v2 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v2 = 0;
		v2[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

