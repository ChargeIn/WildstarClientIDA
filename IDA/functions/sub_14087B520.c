//----- (000000014087B520) ----------------------------------------------------
unsigned __int64 __fastcall sub_14087B520(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
	int v4; // r10d
	unsigned int v5; // esi
	unsigned int i; // edi
	__int64 v11; // rbx
	unsigned __int64 result; // rax
	int v13; // [rsp+60h] [rbp+8h] BYREF
	float v14; // [rsp+64h] [rbp+Ch]

	v4 = *(_DWORD*)(a2 + 8);
	v5 = 0;
	for (i = 0; v4; v4 &= v4 - 1)
		++i;
	do
	{
		v11 = *(_QWORD*)a2 + 4 * v5 * (unsigned __int64)*(unsigned __int16*)(a2 + 16);
		sub_14087AA00((float*)&v13, (__m128*)(a4 + ((unsigned __int64)v5 << 6)), *(float*)(a1 + 4));
		result = sub_14087ADA0((unsigned __int16*)a1, v11, *a3, COERCE_DOUBLE((unsigned __int64)v13), v14);
		++v5;
	} while (v5 < i);
	return result;
}

