//----- (00000001407A45E0) ----------------------------------------------------
__int64 __fastcall sub_1407A45E0(__int64 a1, float a2)
{
	__int64 v2; // r8
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v6; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 64);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (a2 > *(float*)(v4 + 32))
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v6 = v3, a2 < *(float*)(v3 + 32)))
		v6 = *(_QWORD*)(a1 + 64);
	if (v6 == v2)
		return 0i64;
	else
		return *(_QWORD*)(v6 + 40);
}

