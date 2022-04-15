//----- (00000001405375A0) ----------------------------------------------------
__int64 __fastcall sub_1405375A0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // esi
	_OWORD* v5; // r10
	_QWORD* v6; // r9
	_QWORD* v7; // rax
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx
	__int64 v18; // [rsp+38h] [rbp+10h] BYREF
	__int64 v19; // [rsp+40h] [rbp+18h] BYREF

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = 0;
		else
			v4 = sub_140056D60(a1, 2u);
		v5 = (_OWORD*)sub_140118290((__int64)a1, 3);
		if (v5)
		{
			v6 = *(_QWORD**)(v2 + 1384);
			v7 = (_QWORD*)v6[2];
			if (v7 != v6)
			{
				while (1)
				{
					v8 = v7[109];
					v9 = v8;
					v10 = *(_QWORD*)(v8 + 8);
					while (v10)
					{
						if (*(_DWORD*)(v10 + 32) < v4)
						{
							v10 = *(_QWORD*)(v10 + 24);
						}
						else
						{
							v9 = v10;
							v10 = *(_QWORD*)(v10 + 16);
						}
					}
					if (v9 == v8 || v4 < *(_DWORD*)(v9 + 32))
					{
						v19 = v7[109];
						v11 = &v19;
					}
					else
					{
						v18 = v9;
						v11 = &v18;
					}
					v12 = *v11;
					if (v12 != v8)
					{
						v13 = *(_QWORD*)(v12 + 40);
						if (v13)
							break;
					}
					v14 = v7[3];
					if (v14)
					{
						v7 = (_QWORD*)v7[3];
						for (i = *(_QWORD**)(v14 + 16); i; i = (_QWORD*)i[2])
							v7 = i;
					}
					else
					{
						for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v7 = (_QWORD*)j;
						if (v7[3] != j)
							v7 = (_QWORD*)j;
					}
					if (v7 == v6)
						return 0i64;
				}
				*(_OWORD*)(v13 + 64) = *v5;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

