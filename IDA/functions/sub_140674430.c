#include "../winhttp.h"

//----- (0000000140674430) ----------------------------------------------------
void __fastcall sub_140674430(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // edx
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	unsigned __int16* v11; // r11

	if (*(_DWORD*)(a1 + 1344))
	{
		v3 = *(_QWORD*)(a1 + 168);
		if (v3)
		{
			v4 = sub_140244F40(*(_DWORD*)(v3 + 456));
			if (v4)
			{
				v5 = sub_140245380(*(_DWORD*)(v4 + 16));
				if (v5)
				{
					v7 = *(_DWORD*)(v5 + 4);
					if (v7)
					{
						sub_14034BDD0(v6, v7);
						v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
						v10 = *(_QWORD*)(v9 + 16);
						*(_QWORD*)v10 = *v8;
						*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
						*(_QWORD*)(v9 + 16) += 16i64;
						sub_1400F0870(*(_QWORD*)(a2 + 16), v10, L"strMaterialCategory", v11);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
				}
			}
		}
	}
}
// 140674476: variable 'v6' is possibly undefined
// 140674495: variable 'v9' is possibly undefined
// 1406744B8: variable 'v11' is possibly undefined
// 140B2FC28: using guessed type wchar_t aStrmaterialcat[20];

