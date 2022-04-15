//----- (00000001408F2DA0) ----------------------------------------------------
float __fastcall sub_1408F2DA0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rsi
	float v6; // xmm0_4
	int v7; // edi

	v3 = *(_QWORD*)(a1 + 8);
	v4 = a2;
	v5 = a2;
	if (*(_BYTE*)(v3 + a2 + 208))
		v6 = sub_140835CA0(
			(_DWORD*)(16i64 * a2 + v3 + 8),
			0.0,
			*(_DWORD*)(a1 + 4i64 * a2 + 68),
			(_DWORD*)(a1 + 4i64 * a2 + 68));
	else
		v6 = 0.0;
	if ((_DWORD)v4)
	{
		v7 = v4 - 2;
		if (v7)
		{
			if (v7 == 1)
			{
				sub_1408F4EA0(a1 + 96, v6);
				return *(float*)(a1 + 4 * v5 + 164);
			}
		}
		else
		{
			sub_1408F4E60(a1 + 96, v6);
		}
		return *(float*)(a1 + 4 * v5 + 164);
	}
	else
	{
		sub_1408F4DF0(a1 + 96, v6);
		return *(float*)(a1 + 4 * v4 + 164);
	}
}

