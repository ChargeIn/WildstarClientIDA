//----- (0000000140693D00) ----------------------------------------------------
__int64 __fastcall sub_140693D00(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v4 = *(_QWORD*)(v3 + 8);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 8);
			if (v5)
				v1 = *(_DWORD*)(*(_QWORD*)v5 + 8i64);
		}
	}
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)v1;
	a1[2] += 16i64;
	return result;
}

