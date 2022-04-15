//----- (000000014005BA70) ----------------------------------------------------
__int64 __fastcall sub_14005BA70(__int64 a1, __int64 a2, __int64 a3)
{
	int v5; // eax
	__int64 v6; // r11
	int v7; // r9d
	__int64 v8; // rax
	_DWORD* v9; // r8
	int v10; // r9d
	__int64 v11; // rdx
	__int64 v12; // r8
	_DWORD* i; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx

	v5 = sub_14005B960(a1, a2, (int*)a3);
	v6 = *(int*)(a2 + 56);
	v7 = v5 + 1;
	v8 = v7;
	if (v7 >= v6)
	{
	LABEL_5:
		v10 = v7 - v6;
		v11 = 1i64 << *(_BYTE*)(a2 + 11);
		if (v10 >= v11)
		{
			return 0i64;
		}
		else
		{
			v12 = *(_QWORD*)(a2 + 32);
			for (i = (_DWORD*)(v12 + 8 * (v10 + 4i64 * v10 + 1)); !*i; i += 10)
			{
				if (++v10 >= v11)
					return 0i64;
			}
			*(_QWORD*)a3 = *(_QWORD*)(v12 + 40i64 * v10 + 16);
			*(_DWORD*)(a3 + 8) = *(_DWORD*)(v12 + 40i64 * v10 + 24);
			v16 = *(_QWORD*)(a2 + 32);
			*(_QWORD*)(a3 + 16) = *(_QWORD*)(v16 + 40i64 * v10);
			*(_DWORD*)(a3 + 24) = *(_DWORD*)(v16 + 40i64 * v10 + 8);
			return 1i64;
		}
	}
	else
	{
		v9 = (_DWORD*)(16i64 * v7 + *(_QWORD*)(a2 + 24) + 8i64);
		while (!*v9)
		{
			++v8;
			++v7;
			v9 += 4;
			if (v8 >= v6)
				goto LABEL_5;
		}
		*(_DWORD*)(a3 + 8) = 3;
		*(double*)a3 = (double)(v7 + 1);
		v15 = *(_QWORD*)(a2 + 24) + 16i64 * v7;
		*(_QWORD*)(a3 + 16) = *(_QWORD*)v15;
		*(_DWORD*)(a3 + 24) = *(_DWORD*)(v15 + 8);
		return 1i64;
	}
}

