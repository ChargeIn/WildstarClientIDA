//----- (00000001408E8390) ----------------------------------------------------
__int64 __fastcall sub_1408E8390(__int64 a1, float a2, float a3)
{
	int v3; // edi
	unsigned int v4; // esi
	__int64 result; // rax
	unsigned int v7; // r11d

	v3 = *(_DWORD*)(a1 + 8);
	v4 = *(unsigned __int16*)(a1 + 18);
	if ((v3 & 3) != 0)
		result = sub_1408E7BD0(*(float**)a1, (float*)(*(_QWORD*)a1 + 4i64 * *(unsigned __int16*)(a1 + 16)), v4, a2, a3);
	if ((v3 & 0x30) != 0)
	{
		v7 = 2;
		if ((v3 & 4) != 0)
			v7 = 3;
		return sub_1408E7BD0(
			(float*)(*(_QWORD*)a1 + 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)v7),
			(float*)(*(_QWORD*)a1 + 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)(v7 + 1)),
			v4,
			a2,
			a3);
	}
	return result;
}

