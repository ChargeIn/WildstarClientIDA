//----- (00000001406DF690) ----------------------------------------------------
__int64 __fastcall sub_1406DF690(__int64 a1, _BYTE* a2)
{
	__int64 v3; // rcx
	__int64 v5; // r10
	__int64 v6; // r9
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rcx
	int v10; // eax
	unsigned __int8 v11; // al
	__int64 result; // rax

	*(_QWORD*)a1 = a2;
	v3 = a1 + 72;
	*(_OWORD*)(v3 - 56) = 0i64;
	*(_QWORD*)(v3 - 40) = 0i64;
	*(_QWORD*)(v3 - 24) = 0i64;
	*(_BYTE*)(v3 - 4) = a2[64];
	sub_1400C35F0(v3);
	sub_1401095E0(a1 + 496);
	*(_QWORD*)(a1 + 592) = 0i64;
	*(_QWORD*)(a1 + 544) = 0i64;
	*(_QWORD*)(a1 + 552) = 0i64;
	*(_QWORD*)(a1 + 560) = 0i64;
	*(_QWORD*)(a1 + 568) = 0i64;
	*(_QWORD*)(a1 + 576) = 0i64;
	*(_QWORD*)(a1 + 584) = 0i64;
	v5 = *(unsigned int*)(*(_QWORD*)a2 + 28i64);
	v6 = *(unsigned int*)(*(_QWORD*)a2 + 24i64);
	v7 = *(unsigned int*)(*(_QWORD*)a2 + 36i64);
	v8 = *(unsigned int*)(*(_QWORD*)a2 + 32i64);
	v9 = (unsigned int)(v7 + v8 + v6 + v5);
	if (v9 == v5 || v9 == v8 || v9 == v7 || v9 == v6)
	{
		if ((_DWORD)v5)
		{
			*(_DWORD*)(a1 + 488) = 2;
			goto LABEL_15;
		}
		if ((_DWORD)v8)
		{
			*(_DWORD*)(a1 + 488) = 1;
			goto LABEL_15;
		}
		if ((_DWORD)v7)
		{
			*(_DWORD*)(a1 + 488) = 3;
			goto LABEL_15;
		}
		v10 = 4;
		if ((_DWORD)v6)
			v10 = 0;
	}
	else
	{
		v10 = 4;
	}
	*(_DWORD*)(a1 + 488) = v10;
LABEL_15:
	v11 = a2[64];
	if (v11)
	{
		*(_DWORD*)(a1 + 64) = 3 - ((unsigned int)v11 < *(_DWORD*)(*(_QWORD*)a2 + 20i64));
		return a1;
	}
	else
	{
		result = a1;
		*(_DWORD*)(a1 + 64) = *(_BYTE*)(*(_QWORD*)a2 + 16i64) & 1;
	}
	return result;
}

