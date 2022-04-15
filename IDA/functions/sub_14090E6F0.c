//----- (000000014090E6F0) ----------------------------------------------------
__int64 __fastcall sub_14090E6F0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
	int v5; // r14d
	__int64 result; // rax
	unsigned __int16* v12[5]; // [rsp+40h] [rbp-28h] BYREF
	unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

	v5 = a5;
	v12[0] = *(unsigned __int16**)(a1 + 48);
	v13 = 0;
	for (result = sub_14090E7B0(v12, a1, a2, a3, a4, a5, &v13);
		(int)result <= 0;
		result = sub_14090E7B0(v12, a1, a2, a3, a4, v5, &v13))
	{
		if (!*v12[0]++)
			break;
	}
	return result;
}

