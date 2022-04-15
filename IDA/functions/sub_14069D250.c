//----- (000000014069D250) ----------------------------------------------------
__int64 __fastcall sub_14069D250(_QWORD* a1)
{
	int v1; // ebx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64* v6; // r8
	_DWORD* v7; // rdx
	int v8; // ecx
	int v9; // ecx
	__int64 v11; // [rsp+20h] [rbp-48h]
	__int64 v12; // [rsp+30h] [rbp-38h] BYREF
	__int64 v13; // [rsp+38h] [rbp-30h]
	__int64 v14; // [rsp+40h] [rbp-28h]
	__int64 v15; // [rsp+48h] [rbp-20h]
	__int64 v16; // [rsp+50h] [rbp-18h]
	__int64 v17; // [rsp+58h] [rbp-10h]

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
				v7 = dword_140A12138;
				if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
					v7 = (_DWORD*)(a1[3] + 16i64);
				v8 = v7[2];
				if (!v8 || v8 == 1 && !*v7)
					v1 = 0;
				v12 = 0i64;
				v13 = 0i64;
				v14 = 0i64;
				v16 = 0i64;
				v17 = 0i64;
				v15 = v1;
				v9 = *(_DWORD*)(qword_140C635F0 + 5760);
				LODWORD(v17) = 39;
				v16 = 0i64;
				LODWORD(v11) = v9;
				v13 = *v6;
				v12 = v11;
				sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)&v12);
			}
		}
	}
	return 0i64;
}
// 14069D28A: variable 'v4' is possibly undefined
// 14069D32C: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

