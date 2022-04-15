//----- (0000000140593EC0) ----------------------------------------------------
__int64 __fastcall sub_140593EC0(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // eax
	float v3; // xmm0_4
	__int64 result; // rax
	__int64 v5; // rax

	if (*(_DWORD*)(qword_140C65898 + 6964))
	{
		v1 = *(_QWORD*)(a1 + 16);
		v2 = *(_DWORD*)(qword_140C65898 + 6968) - dword_140C636A8;
		*(_DWORD*)(v1 + 8) = 3;
		v3 = (float)v2;
		result = 1i64;
		*(double*)v1 = (float)(v3 * 0.000000011574074);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v5 = 0i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

