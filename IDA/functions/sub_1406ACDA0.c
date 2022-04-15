//----- (00000001406ACDA0) ----------------------------------------------------
__int64 __fastcall sub_1406ACDA0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ebp
	unsigned __int64 v4; // rdx
	unsigned int v5; // eax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rdi
	int v10; // eax
	__int64 v11; // rcx
	int v12; // eax
	_DWORD* v13; // rcx
	_DWORD* v14; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		v5 = 0;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v4)
					goto LABEL_7;
			}
			v8 = *(_QWORD*)(v6 + 8i64 * v5);
		}
		else
		{
		LABEL_7:
			v8 = 0i64;
		}
		v9 = (int)sub_1400F26A0(v8 + 384, 2);
		v10 = sub_1400F26A0(v8 + 384, 3);
		v12 = sub_1404B9AE0(v11, v9 | ((__int64)v10 << 32));
		v13 = (_DWORD*)a1[2];
		v13[2] = 1;
		LOBYTE(v3) = v12 != 0;
		*v13 = v3;
	}
	else
	{
		v14 = (_DWORD*)a1[2];
		*v14 = 0;
		v14[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406ACE4C: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

