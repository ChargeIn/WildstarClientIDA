#include "../winhttp.h"

//----- (00000001405542B0) ----------------------------------------------------
float __fastcall sub_1405542B0(int a1, float a2)
{
	__int64 v4; // rax
	float v5; // xmm1_4
	double v6; // xmm0_8
	double v7; // xmm0_8

	if (qword_140C63840)
	{
		v4 = qword_140C63840(off_140A6A408, 530i64, qword_140C63858);
	}
	else
	{
		if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			goto LABEL_8;
		v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 530i64);
	}
	if (!v4)
	{
	LABEL_8:
		v5 = 0.0;
		goto LABEL_9;
	}
	v5 = *(float*)(v4 + 24);
LABEL_9:
	HIDWORD(v6) = 0;
	*(float*)&v6 = (float)a1;
	v7 = sub_1408FBFC0(v6, v5);
	return (float)(*(float*)&v7 * a2) + 0.5;
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;

