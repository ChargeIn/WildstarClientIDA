//----- (0000000140515190) ----------------------------------------------------
__int64 __fastcall sub_140515190(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r8
	int* v3; // rax
	unsigned int v4; // edx
	__int64 v5; // rcx
	int v6; // eax
	int v7; // ecx
	int v8; // eax

	result = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 16));
	v2 = result;
	if (result)
	{
		v3 = *(int**)(result + 72);
		v4 = 0;
		if (v3)
			v5 = (__int64)v3;
		else
			v5 = *(_QWORD*)(v2 + 64) + 8i64;
		if (v5)
		{
			if (!v3)
				v3 = (int*)(*(_QWORD*)(v2 + 64) + 8i64);
			v6 = *v3;
			v7 = 1;
			if (v6 > 1)
				v7 = v6;
			v8 = 7;
			if (v7 < 7)
				v8 = v7;
			if (v8 != 1)
			{
				if (v8 <= 3)
					return 250i64;
				else
					return 1000i64;
			}
			return 100;
		}
		return v4;
	}
	return result;
}
// 1405151FD: conditional instruction was optimized away because eax.4 is in (2..7)
// 140515207: conditional instruction was optimized away because eax.4 is in (4..7)
// 140C65898: using guessed type __int64 qword_140C65898;

