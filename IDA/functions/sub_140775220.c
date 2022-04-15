//----- (0000000140775220) ----------------------------------------------------
__int64 __fastcall sub_140775220(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // ebp
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v4 = a2[2];
	v5 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	v7 = 0;
	*(_QWORD*)v4 = v5;
	a2[2] += 16i64;
	v8 = *(_QWORD**)(a1 + 824);
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			v10 = a2[2];
			v11 = v9[5];
			++v7;
			*(_DWORD*)(v10 + 8) = 3;
			*(double*)v10 = (double)v7;
			a2[2] += 16i64;
			sub_140774A40(v6, a2, v11);
			sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
			a2[2] -= 32i64;
			v12 = v9[3];
			if (v12)
			{
				v9 = (_QWORD*)v9[3];
				for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
					v9 = i;
			}
			else
			{
				for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = (_QWORD*)j;
				if (v9[3] != j)
					v9 = (_QWORD*)j;
			}
		} while (v9 != *(_QWORD**)(a1 + 824));
	}
	return 1i64;
}
// 1407752B5: variable 'v6' is possibly undefined

