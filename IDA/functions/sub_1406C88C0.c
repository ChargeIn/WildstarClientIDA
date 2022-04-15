#include "../winhttp.h"

//----- (00000001406C88C0) ----------------------------------------------------
void __fastcall sub_1406C88C0(__int64 a1, __int64 a2)
{
	void(__fastcall * **v3)(_QWORD, __int64); // rax

	if ((*(_BYTE*)(a1 + 28) & 8) != 0)
	{
		v3 = sub_1406C5440(a1);
		if (v3)
			(*v3)[19](v3, a2);
	}
}

