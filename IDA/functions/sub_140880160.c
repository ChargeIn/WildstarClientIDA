//----- (0000000140880160) ----------------------------------------------------
float __fastcall sub_140880160(__int64 a1)
{
	__int64 v1; // rdx
	float result; // xmm0_4
	unsigned __int16 v3; // r8

	v1 = *(_QWORD*)(a1 + 24);
	result = 0.0;
	v3 = *(_WORD*)(v1 + 376);
	if (v3)
		return (float)((float)((float)((float)(*(_DWORD*)(a1 + 60) - *(_DWORD*)(a1 + 56) + 1) * (float)(v3 - 1))
			+ (float)*(int*)(a1 + 40))
			* 1000.0)
		/ (float)*(int*)(v1 + 192);
	return result;
}

