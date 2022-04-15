//----- (000000014040BEE0) ----------------------------------------------------
__int64 __fastcall sub_14040BEE0(__int64 a1, float a2, unsigned int a3, int a4)
{
	float v6; // xmm6_4
	float v7; // xmm0_4
	__int64 result; // rax
	unsigned int v9; // ecx

	if ((dword_140C8AC28 & 1) == 0)
	{
		dword_140C8AC28 |= 1u;
		qword_140C8AC30 = (__int64)off_140B66A98;
		sub_1407DD89C(sub_140950B70);
	}
	if (a4)
		v6 = (float)a4;
	else
		v6 = 1.0;
	v7 = (*(float(__fastcall**)(__int64*, _QWORD))(qword_140C8AC30 + 8))(&qword_140C8AC30, a3);
	result = 1i64;
	v9 = (int)(float)(v7 * (float)(v6 * a2));
	if (v9)
		return v9;
	return result;
}
// 140B66A98: using guessed type __int64 (__fastcall *off_140B66A98[110])();
// 140C8AC28: using guessed type int dword_140C8AC28;
// 140C8AC30: using guessed type __int64 qword_140C8AC30;

