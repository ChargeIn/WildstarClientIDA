#include "../winhttp.h"

//----- (00000001407797A0) ----------------------------------------------------
void __fastcall sub_1407797A0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // edx
	_QWORD* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // edx
	__int64 v13; // rbx
	__int64 i; // rcx
	__int64 j; // rcx

	v3 = a3;
	if ((unsigned __int64)a3 < 5)
	{
		if (a2)
		{
			v5 = a1 + 16i64 * a3;
			if (!*(_QWORD*)(v5 + 16))
			{
				v6 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4i64 * a3 + 76));
				if (v6)
				{
					v8 = *(_DWORD*)(a1 + 108);
					if (v8)
						sub_140578770(v7, v8, v6, 0i64, 0i64, (_QWORD*)(v5 + 16));
				}
			}
			v9 = (_QWORD*)(v5 + 24);
			if (!*v9)
			{
				v10 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v3 + 56));
				if (v10)
				{
					v12 = *(_DWORD*)(a1 + 112);
					if (v12)
						sub_140578770(v11, v12, v10, 0i64, 0i64, v9);
				}
			}
		}
		else
		{
			v13 = 2i64 * a3;
			for (i = *(_QWORD*)(a1 + 16i64 * a3 + 16); i; i = *(_QWORD*)(a1 + 8 * v13 + 16))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)i + 32i64))(i);
			for (j = *(_QWORD*)(a1 + 8 * v13 + 24); j; j = *(_QWORD*)(a1 + 8 * v13 + 24))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)j + 32i64))(j);
		}
	}
}
// 140779811: variable 'v7' is possibly undefined
// 140779859: variable 'v11' is possibly undefined

