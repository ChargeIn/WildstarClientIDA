//----- (0000000140869D80) ----------------------------------------------------
__int64 __fastcall sub_140869D80(_BYTE* a1, __int64 a2, int a3)
{
	__int64 result; // rax
	unsigned int* v5; // [rsp+38h] [rbp+10h] BYREF
	int v6; // [rsp+40h] [rbp+18h] BYREF

	v6 = a3;
	v5 = (unsigned int*)(a2 + 4);
	result = sub_1408546E0(a1, &v5, &v6, 0);
	if ((_DWORD)result == 1)
		return sub_140869CC0((__int64)a1, &v5);
	return result;
}

