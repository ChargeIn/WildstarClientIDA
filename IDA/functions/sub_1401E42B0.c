#include "../winhttp.h"

//----- (00000001401E42B0) ----------------------------------------------------
_QWORD* __fastcall sub_1401E42B0(_QWORD* a1, void(__fastcall**** a2)(_QWORD))
{
	void(__fastcall * **v3)(_QWORD); // rcx

	v3 = *a2;
	if ((void(__fastcall***)(_QWORD)) * a1 != *a2)
	{
		if (v3)
			(**v3)(v3);
		if (*a1)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = *a2;
	}
	return a1;
}

