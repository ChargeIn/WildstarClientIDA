//----- (00000001400E9410) ----------------------------------------------------
__int64 __fastcall sub_1400E9410(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v3; // r10
	__int64 v4; // r8
	__int64 v5; // rcx
	char v6[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v7; // [rsp+40h] [rbp+8h]
	unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

	v8 = a2;
	result = *(_QWORD*)(a1 + 3336);
	v3 = a1 + 3328;
	v4 = result;
	v5 = *(_QWORD*)(result + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == result || (v7 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v7 = result;
	if (v7 == result)
		return sub_1400293C0(v3, (__int64)v6, (int*)&v8);
	return result;
}
// 1400E9410: using guessed type char var_18[24];

