#include "../winhttp.h"

//----- (000000014001BBA0) ----------------------------------------------------
void __fastcall sub_14001BBA0(__int64 a1, int a2, int a3)
{
	unsigned __int8 v3; // r10
	char v4; // dl
	void(__fastcall * v5)(_QWORD); // rax

	if (a3 < a2)
	{
		v3 = *(_BYTE*)(a2 + a1 + 32);
		v4 = *(_BYTE*)(a3 + a1 + 32);
		if ((unsigned __int64)(a3 + 1) < 5)
			memset((void*)(a3 + 1 + a1 + 32), v4, 5i64 - (a3 + 1));
		*(_DWORD*)(a1 + 24) &= (2 << a3) - 1;
		v5 = *(void(__fastcall**)(_QWORD))(a1 + 56);
		if (v5)
		{
			if (v3 != v4)
				v5(v3);
		}
	}
}

