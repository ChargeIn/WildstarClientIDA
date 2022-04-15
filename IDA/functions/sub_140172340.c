//----- (0000000140172340) ----------------------------------------------------
__int64 __fastcall sub_140172340(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	if (*(_QWORD*)(v2 + 1400) > 1ui64)
	{
		if (*(_DWORD*)(v2 + 1400) <= v3)
		{
		LABEL_7:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			goto LABEL_8;
		}
		v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 1392) + 8i64 * v3) + 4i64);
	}
	else
	{
		v4 = *(_DWORD*)(v2 + 724) - *(_DWORD*)(v2 + 716);
	}
	if (v4 <= 0)
		goto LABEL_7;
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
LABEL_8:
	a1[2] += 16i64;
	return 1i64;
}

