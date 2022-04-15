#include "../winhttp.h"

//----- (00000001407A2E40) ----------------------------------------------------
float __fastcall sub_1407A2E40(_QWORD* a1, unsigned __int64 a2, float a3)
{
	float v6; // [rsp+40h] [rbp+18h] BYREF

	v6 = a3;
	if ((int)sub_1407A4CE0(a1, &v6) < 0 || !a2)
		return 0.0;
	if (a2 < a1[4] - 1i64)
		return *(float*)(*(_QWORD*)sub_1407A45E0((__int64)a1, v6) + 4i64 * *(_QWORD*)(112 * a2 + a1[3] + 96));
	return 1.0;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

