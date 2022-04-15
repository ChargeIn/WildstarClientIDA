#include "../winhttp.h"

//----- (000000014079BDF0) ----------------------------------------------------
void __fastcall sub_14079BDF0(__int64 a1, int* a2)
{
	int* v4; // rbx

	v4 = sub_14018B280(40i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = 0i64;
		*((_QWORD*)v4 + 1) = 0i64;
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 4) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	if ((int)sub_14079B890((__int64*)v4, a2, (__int64**)(a1 + 48)) < 0)
	{
		if (v4)
		{
			sub_14079B810(v4);
			sub_14018B900((__int64)v4, 0);
		}
	}
}

