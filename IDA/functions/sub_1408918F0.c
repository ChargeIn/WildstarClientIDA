//----- (00000001408918F0) ----------------------------------------------------
__int64 __fastcall sub_1408918F0(_QWORD* a1, __int64 a2)
{
	char v2; // al
	float v3; // xmm3_4
	int v4; // xmm0_4

	if (*(_DWORD*)a2 != 4)
		return sub_140890B90(a1, a2);
	v2 = *(_BYTE*)(a2 + 44);
	if ((v2 & 1) != 0)
	{
		v3 = *(float*)(a2 + 40);
		v4 = 0;
		if (v3 < 0.0 || (v4 = 1065353216, v3 > 1.0))
			v3 = *(float*)&v4;
		sub_14088AF40(qword_140C629C0, (__int64)a1, *(_QWORD*)(a2 + 8), v3, (v2 & 2) != 0);
		return 1i64;
	}
	else
	{
		sub_14088AFE0(qword_140C629C0, (__int64)a1, *(_QWORD*)(a2 + 8), *(_DWORD*)(a2 + 40), (v2 & 2) != 0);
		return 1i64;
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C629C0: using guessed type __int64 qword_140C629C0;

