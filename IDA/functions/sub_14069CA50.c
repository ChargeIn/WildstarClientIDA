//----- (000000014069CA50) ----------------------------------------------------
__int64 __fastcall sub_14069CA50(_QWORD* a1)
{
	unsigned int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64* v6; // rsi
	unsigned int v7; // eax
	_DWORD* v8; // rdx
	unsigned int v9; // ebp
	int v10; // ecx
	int v11; // eax

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v5 = *(_QWORD*)(v3 + 8);
		if (v5)
		{
			v6 = (__int64*)sub_1405845F0(v4, *(_QWORD*)(v5 + 8));
			if (v6)
			{
				v7 = sub_140056D60(a1, 2u);
				v8 = dword_140A12138;
				v9 = v7;
				if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
					v8 = (_DWORD*)(a1[3] + 32i64);
				v10 = v8[2];
				if (!v10 || v10 == 1 && !*v8)
					v1 = 0;
				v11 = sub_140056D60(a1, 4u);
				sub_14057FE00(v6, v9, v1, v11);
			}
		}
	}
	return 0i64;
}
// 14069CA87: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

