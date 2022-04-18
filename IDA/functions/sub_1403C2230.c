#include "../winhttp.h"

//----- (00000001403C2230) ----------------------------------------------------
void __fastcall sub_1403C2230(__int64 a1)
{
	_DWORD* v2; // r14
	unsigned int v3; // esi
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // [rsp+20h] [rbp-28h]
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = (_DWORD*)(a1 + 4288);
	v3 = 0;
	v4 = (_QWORD*)(a1 + 4328);
	do
	{
		v5 = 12i64;
		do
		{
			if (*v4)
			{
				if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 16i64))(*v4) && *v4)
					(**(void(__fastcall***)(_QWORD, __int64)) * v4)(*v4, 1i64);
				*v4 = 0i64;
			}
			++v4;
			--v5;
		} while (v5);
		*v2 = 0;
		v6 = *(_QWORD*)(a1 + 29504);
		if (v6)
		{
			LODWORD(v8) = 0;
			LODWORD(v7) = 0;
			Apollo_LUAEvent(v6, "ShowActionBarShortcut", byte_1409E98AC, v3, v7, v8);
		}
		++v3;
		++v2;
	} while (v3 < 9);
	*(_DWORD*)(a1 + 5272) = 9;
	*(_DWORD*)(a1 + 5276) = 9;
}
// 1403C22BF: variable 'v7' is possibly undefined
// 1403C22BF: variable 'v8' is possibly undefined
// 1409E98AC: using guessed type _BYTE byte_1409E98AC[72];

