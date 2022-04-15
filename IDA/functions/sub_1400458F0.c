//----- (00000001400458F0) ----------------------------------------------------
__int64 __fastcall sub_1400458F0(__int64 a1, __int64 a2, float a3)
{
	float v3; // xmm1_4
	__int64 v5; // r8

	if (!*(_DWORD*)(a1 + 168)
		&& *(_DWORD*)(qword_140C635F0 + 5704)
		&& *(_DWORD*)(a1 + 232)
		&& *(_QWORD*)(a1 + 192) < *(_QWORD*)(a1 + 208))
	{
		sub_140045B70(a1);
	}
	v5 = *(_QWORD*)(a1 + 176);
	if (v5)
		sub_140047E50(a1, v3, v5);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a1 + 168) == 0;
	return sub_14003DEA0(a1, a2, a3);
}
// 14004594F: variable 'a1' is possibly undefined
// 14004594F: variable 'v3' is possibly undefined
// 14004597D: variable 'a2' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;

