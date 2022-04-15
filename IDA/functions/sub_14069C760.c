//----- (000000014069C760) ----------------------------------------------------
__int64 __fastcall sub_14069C760(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx

	v1 = sub_140056AB0(a1, 1u);
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 8);
		if (v3)
		{
			v4 = sub_1405845F0(v2, *(_QWORD*)(v3 + 8));
			if (v4)
				sub_1403C2A20(v5, v4);
		}
	}
	return 0i64;
}
// 14069C787: variable 'v2' is possibly undefined
// 14069C794: variable 'v5' is possibly undefined

