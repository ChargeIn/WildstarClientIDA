//----- (00000001404C7AC0) ----------------------------------------------------
__int64 __fastcall sub_1404C7AC0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r10
	_QWORD* v4; // rax
	_QWORD* v5; // r8
	unsigned __int64 v6; // rdx
	_QWORD* v8; // r10
	_QWORD* v9; // rax
	int v10; // r8d
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx
	_QWORD* v16; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD**)(a1 + 56);
	v4 = (_QWORD*)v2[1];
	v5 = v2;
	if (v4)
	{
		v6 = *(_QWORD*)(a2 + 8);
		do
		{
			if (v4[4] < v6)
			{
				v4 = (_QWORD*)v4[3];
			}
			else
			{
				v5 = v4;
				v4 = (_QWORD*)v4[2];
			}
		} while (v4);
	}
	if (v5 == v2 || (v16 = v5, *(_QWORD*)(a2 + 8) < v5[4]))
		v16 = *(_QWORD**)(a1 + 56);
	if (v16 != v2)
		return v16[5];
	v8 = *(_QWORD**)(a1 + 88);
	v9 = (_QWORD*)v8[2];
	if (v9 == v8)
		return 0i64;
	v10 = *(_DWORD*)(a2 + 48);
	while (1)
	{
		v11 = v9[5];
		if ((v10 == 4 || (v12 = *(_QWORD*)(v11 + 88)) == 0 || v12 == *(_QWORD*)(a2 + 8))
			&& *(_DWORD*)(v11 + 112) == *(_DWORD*)(a2 + 32)
			&& *(_DWORD*)(v11 + 116) == *(_DWORD*)(a2 + 36)
			&& *(_DWORD*)(v11 + 120) == *(_DWORD*)(a2 + 40)
			&& *(_DWORD*)(v11 + 128) == v10)
		{
			break;
		}
		v13 = v9[3];
		if (v13)
		{
			v9 = (_QWORD*)v9[3];
			for (i = *(_QWORD**)(v13 + 16); i; i = (_QWORD*)i[2])
				v9 = i;
		}
		else
		{
			for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v9 = (_QWORD*)j;
			if (v9[3] != j)
				v9 = (_QWORD*)j;
		}
		if (v9 == v8)
			return 0i64;
	}
	return v9[5];
}

