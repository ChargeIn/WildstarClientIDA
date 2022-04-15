#include "../winhttp.h"

//----- (00000001401C01E0) ----------------------------------------------------
void __fastcall sub_1401C01E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	_DWORD* v7; // rbx
	__int64 v8; // rcx
	int v9; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 80);
	if (v2)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(v2 + 24))(a2);
		v6 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v5 % *(_QWORD*)(v2 + 8)));
		if (v6)
		{
			while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 32))(a2, v6 + 2))
			{
				v6 = (_QWORD*)v6[1];
				if (!v6)
					return;
			}
			v7 = (_DWORD*)v6 + 9;
			if (v7)
			{
				v8 = *(_QWORD*)(a1 + 80);
				v9 = *v7 - 1;
				if (v9)
					sub_1401C03F0(v8, a2, &v9);
				else
					sub_1400B6120(v8, a2);
			}
		}
	}
}

