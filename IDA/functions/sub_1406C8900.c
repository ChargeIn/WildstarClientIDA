#include "../winhttp.h"

//----- (00000001406C8900) ----------------------------------------------------
char __fastcall sub_1406C8900(__int64 a1, int* a2)
{
	void(__fastcall * **v4)(_QWORD, __int64); // rax

	if ((*(_BYTE*)(a1 + 28) & 8) != 0 || (LOBYTE(v4) = sub_140001D30(a1, a2), (_BYTE)v4))
	{
		v4 = sub_1406C5440(a1);
		if (v4)
			LOBYTE(v4) = ((__int64(__fastcall*)(_QWORD, int*))(*v4)[20])(v4, a2);
	}
	return (char)v4;
}

