//----- (0000000140661360) ----------------------------------------------------
__int64 __fastcall sub_140661360(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // edx
	int v5; // eax
	__int64 v6; // r8
	__int64 v7; // rax
	bool v8; // zf
	_DWORD* v9; // rcx
	__int64 result; // rax
	_DWORD* v11; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *v2);
		if (v3)
		{
			v4 = 0;
			if (*(_DWORD*)(v3 + 304))
			{
			LABEL_4:
				v5 = 1;
			LABEL_10:
				v9 = *(_DWORD**)(a1 + 16);
				v8 = v5 == 0;
				result = 1i64;
				LOBYTE(v4) = !v8;
				v9[2] = 1;
				*v9 = v4;
				*(_QWORD*)(a1 + 16) += 16i64;
				return result;
			}
			v6 = *(_QWORD*)(qword_140C65898 + 120);
			if (v6)
			{
				if (*(_DWORD*)(v3 + 292) == *(_DWORD*)(v6 + 8))
					goto LABEL_4;
				v7 = *(_QWORD*)(v3 + 296);
				if (v7)
				{
					v8 = *(_QWORD*)(v6 + 6304) == v7;
					v5 = 1;
					if (v8)
						goto LABEL_10;
				}
			}
			v5 = 0;
			goto LABEL_10;
		}
	}
	v11 = *(_DWORD**)(a1 + 16);
	*v11 = 0;
	v11[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

