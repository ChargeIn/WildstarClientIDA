//----- (000000014069AAE0) ----------------------------------------------------
__int64 __fastcall sub_14069AAE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	_QWORD* v5; // rdi
	int* v6; // rax
	_DWORD* v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // rcx
	_QWORD* v12; // rax
	_DWORD* v13; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = (_QWORD*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) == 0i64)
	{
		v9 = 0;
	LABEL_14:
		v13 = (_DWORD*)a1[2];
		v13[2] = 1;
		*v13 = v9;
		goto LABEL_15;
	}
	v6 = (int*)sub_140056AB0(a1, 2u);
	if (v6)
	{
		v8 = sub_1403D90D0(qword_140C65898, *v6);
		v9 = 0;
		if (v8)
		{
			v10 = *(_QWORD*)(v8 + 168);
			v11 = 0i64;
			if (v10)
			{
				v12 = *(_QWORD**)(v8 + 160);
				while (*v12 != *v5)
				{
					++v11;
					++v12;
					if (v11 >= v10)
						goto LABEL_11;
				}
				LOBYTE(v9) = 1;
			}
			else
			{
			LABEL_11:
				LOBYTE(v9) = 0;
			}
		}
		goto LABEL_14;
	}
	v7 = (_DWORD*)a1[2];
	*v7 = 0;
	v7[2] = 1;
LABEL_15:
	a1[2] += 16i64;
	return 1i64;
}
// 14069AB18: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

