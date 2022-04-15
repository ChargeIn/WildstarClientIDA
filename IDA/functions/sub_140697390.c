//----- (0000000140697390) ----------------------------------------------------
__int64 __fastcall sub_140697390(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64* v4; // rax

	v1 = sub_140056AB0(a1, 1u);
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 8);
		if (v3)
		{
			v4 = (__int64*)sub_1405845F0(v2, *(_QWORD*)(v3 + 8));
			if (v4)
				sub_14057E730(v4);
		}
	}
	return 0i64;
}
// 1406973B7: variable 'v2' is possibly undefined

