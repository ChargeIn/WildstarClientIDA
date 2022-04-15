//----- (000000014069C8A0) ----------------------------------------------------
__int64 __fastcall sub_14069C8A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	char* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v10; // [rsp+20h] [rbp-68h]
	__int64 v11; // [rsp+30h] [rbp-58h] BYREF
	__int64 v12; // [rsp+38h] [rbp-50h]
	__int64 v13; // [rsp+50h] [rbp-38h] BYREF
	__int64 v14; // [rsp+58h] [rbp-30h]
	__int64 v15; // [rsp+60h] [rbp-28h]
	__int64 v16; // [rsp+68h] [rbp-20h]
	__int64 v17; // [rsp+70h] [rbp-18h]
	__int64 v18; // [rsp+78h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
				sub_14018F2D0(&v11, v6);
				v13 = 0i64;
				v14 = 0i64;
				v15 = 0i64;
				v16 = 0i64;
				v17 = 0i64;
				v18 = 35i64;
				LODWORD(v10) = *(_DWORD*)(qword_140C635F0 + 5760);
				v7 = *v5;
				v8 = v12;
				v14 = v7;
				v13 = v10;
				v17 = v12;
				v16 = 0i64;
				sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)&v13);
				if (v8)
					sub_14018B900(v8, 0);
			}
		}
	}
	return 0i64;
}
// 14069C8DB: variable 'v3' is possibly undefined
// 14069C964: variable 'v10' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

