//----- (00000001407BA850) ----------------------------------------------------
__int64 __fastcall sub_1407BA850(__m128* a1, double a2)
{
	unsigned __int64 i; // rbx
	float v5; // xmm7_4
	unsigned int v7[4]; // [rsp+30h] [rbp-58h] BYREF
	__m128 v8; // [rsp+40h] [rbp-48h] BYREF
	float v9; // [rsp+A0h] [rbp+18h] BYREF
	int v10; // [rsp+A8h] [rbp+20h] BYREF

	sub_1407B6330((__int64)a1);
	for (i = 0i64; i < 0x40; ++i)
	{
		if (*(float*)&a2 <= 0.0)
			break;
		if (!(unsigned int)sub_1407BA940((__int64)a1, &v10, &v8, &v9))
			break;
		if (!(unsigned int)sub_1407BB5F0(a1, v10, &v8, a2, (float*)v7))
			break;
		v5 = *(float*)v7;
		if (!(unsigned int)sub_1407BB9C0(a1, v9, COERCE_DOUBLE((unsigned __int64)v7[0])))
			break;
		*(float*)&a2 = *(float*)&a2 - v5;
		if (v5 == 0.0)
			break;
	}
	return sub_1407BB9C0(a1, v9, a2);
}
// 1407BA850: using guessed type unsigned int var_58[4];

