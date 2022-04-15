//----- (0000000140863130) ----------------------------------------------------
__int64 __fastcall sub_140863130(__int64 a1, __int64 a2, int a3)
{
	int v4; // ecx
	unsigned int v5; // r8d
	unsigned int i; // edx
	__int64 v7; // rax
	__int64 result; // rax

	*(_DWORD*)(a1 + 768) = a3;
	if (a2 && (*(_BYTE*)(a2 + 91) & 4) != 0)
	{
		*(_BYTE*)(a1 + 776) |= 1u;
		sub_1408524D0(a2, 0i64, a1 + 796);
	}
	else
	{
		*(_BYTE*)(a1 + 776) &= ~1u;
		*(_DWORD*)(a1 + 796) = 1056964608;
		*(_DWORD*)(a1 + 800) = 1065353216;
		*(_DWORD*)(a1 + 804) = 1120403456;
		*(_BYTE*)(a1 + 808) = 0;
	}
	sub_140863990(a1);
	v4 = *(_DWORD*)(a1 + 768);
	v5 = 0;
	for (i = 0; v4; v4 &= v4 - 1)
		++i;
	do
	{
		v7 = v5++;
		result = v7 << 6;
		*(_OWORD*)(result + a1 + 32) = *(_OWORD*)(result + a1);
		*(_OWORD*)(result + a1 + 48) = *(_OWORD*)(result + a1 + 16);
	} while (v5 < i);
	return result;
}

