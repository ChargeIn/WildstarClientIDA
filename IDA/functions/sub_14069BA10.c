//----- (000000014069BA10) ----------------------------------------------------
__int64 __fastcall sub_14069BA10(_QWORD* a1)
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
			{
				if (v4[105])
				{
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildEventLogChange", byte_1409EA76C, v4);
					return 0i64;
				}
				sub_14057EFA0(v4);
			}
		}
	}
	return 0i64;
}
// 14069BA37: variable 'v2' is possibly undefined
// 1409EA76C: using guessed type _BYTE byte_1409EA76C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

