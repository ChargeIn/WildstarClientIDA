//----- (000000014040F570) ----------------------------------------------------
float __fastcall sub_14040F570(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // r15
	unsigned int v4; // edi
	__int64 v5; // rbp
	__int64 v6; // rbx
	float v7; // xmm0_4

	v2 = a2;
	if ((dword_140C8ABB0 & 1) == 0)
	{
		dword_140C8ABB0 |= 1u;
		qword_140C8AB90 = (__int64)off_140B66A10;
		sub_1407DD89C(sub_140950BD0);
	}
	if (*(_QWORD*)(a1 + 80) > v2)
		return *(float*)(*(_QWORD*)(a1 + 72) + 4 * v2);
	v4 = *(_DWORD*)(a1 + 80);
	sub_140052360((__int64*)(a1 + 72), (unsigned int)(v2 + 1));
	if (v4 > (unsigned int)v2)
		return *(float*)(*(_QWORD*)(a1 + 72) + 4 * v2);
	v5 = 4i64 * v4;
	do
	{
		v6 = *(_QWORD*)(a1 + 72);
		v7 = (*(float(__fastcall**)(__int64*, _QWORD))(qword_140C8AB90 + 8))(&qword_140C8AB90, v4++);
		v5 += 4i64;
		*(float*)(v6 + v5 - 4) = v7;
	} while (v4 <= (unsigned int)v2);
	return *(float*)(*(_QWORD*)(a1 + 72) + 4 * v2);
}
// 140950BD0: using guessed type __int64 __fastcall sub_140950BD0();
// 140B66A10: using guessed type __int64 (__fastcall *off_140B66A10[127])();
// 140C8AB90: using guessed type __int64 qword_140C8AB90;
// 140C8ABB0: using guessed type int dword_140C8ABB0;

