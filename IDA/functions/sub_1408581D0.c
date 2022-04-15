#include "../winhttp.h"

//----- (00000001408581D0) ----------------------------------------------------
void __fastcall sub_1408581D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rbx
	__int64 i; // rbx
	int v7; // eax
	__int64 v8; // rbx
	int v9; // ebp
	__int64 j; // rbx
	int v11; // eax

	if ((*(_BYTE*)(a3 + 44) & 1) != 0)
	{
		v5 = *(_QWORD*)(a1 + 56);
		if (v5)
		{
			for (i = *(_QWORD*)(v5 + 24); i; i = *(_QWORD*)(i + 32))
			{
				v7 = *(_DWORD*)(a3 + 16);
				if ((!a2 || a2 == *(_QWORD*)(i + 176)) && (!v7 || v7 == *(_DWORD*)(i + 120)))
					(*(void(__fastcall**)(__int64, __int64, bool))(*(_QWORD*)i + 72i64))(i, a2, (*(_BYTE*)(a3 + 44) & 2) != 0);
			}
		}
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 56);
		v9 = *(_DWORD*)(a3 + 40);
		if (v9 < 0)
			v9 = 0;
		if (v8)
		{
			for (j = *(_QWORD*)(v8 + 24); j; j = *(_QWORD*)(j + 32))
			{
				v11 = *(_DWORD*)(a3 + 16);
				if ((!a2 || a2 == *(_QWORD*)(j + 176)) && (!v11 || v11 == *(_DWORD*)(j + 120)))
					(*(void(__fastcall**)(__int64, _QWORD, bool))(*(_QWORD*)j + 64i64))(
						j,
						(unsigned int)v9,
						(*(_BYTE*)(a3 + 44) & 2) != 0);
			}
		}
	}
}
// 14085825F: variable 'a2' is possibly undefined

