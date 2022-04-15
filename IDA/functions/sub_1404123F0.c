#include "../winhttp.h"

//----- (00000001404123F0) ----------------------------------------------------
__int64 __fastcall sub_1404123F0(_QWORD* a1, void(__fastcall*** a2)(_QWORD), int a3)
{
	void(__fastcall * **v4)(_QWORD); // rcx
	unsigned int v5; // esi

	v4 = (void(__fastcall***)(_QWORD)) * a1;
	v5 = 0;
	if (a2 != v4)
	{
		v5 = 1;
		if (v4)
		{
			(*v4)[1](v4);
			*a1 = 0i64;
		}
		*a1 = a2;
		if (a2)
			(**a2)(a2);
	}
	if (a3)
	{
		*(_QWORD*)((char*)a1 + 1204) = 0i64;
		sub_140412AD0((__int64)a1);
	}
	return v5;
}

