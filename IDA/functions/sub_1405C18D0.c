//----- (00000001405C18D0) ----------------------------------------------------
__int64 __fastcall sub_1405C18D0(unsigned int* a1, unsigned int* a2)
{
	__int64 v3; // rbx
	int v4; // eax

	a1[3] = *a2;
	a1[5] = dword_140C636A8 - a2[1];
	v3 = *(_QWORD*)(qword_140C65898 + 29504);
	v4 = sub_1405C15D0(a1);
	sub_1400EA3E0(v3, "PVPMatchStateUpdated", "if", *a2, (float)((float)v4 * 0.001));
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

