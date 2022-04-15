//----- (0000000140172880) ----------------------------------------------------
__int64 __fastcall sub_140172880(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx
	int v4; // edx
	__int64 result; // rax

	v2 = sub_140171EB0(a1);
	v3 = (int)sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	if ((int)v3 < 0 || (int)v3 >= (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
	{
		result = 0i64;
		MEMORY[0x74] = v4;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8 * v3) + 116i64) = v4;
		return 0i64;
	}
	return result;
}

