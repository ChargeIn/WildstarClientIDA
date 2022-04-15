#include "../winhttp.h"

//----- (00000001401AE760) ----------------------------------------------------
float __fastcall sub_1401AE760(float a1, float a2)
{
	float v3; // xmm0_4

	v3 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890) * (float)(a2 - a1);
	return v3 + a1;
}
// 140C77890: using guessed type __int64 qword_140C77890;

