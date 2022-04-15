#include "../winhttp.h"

//----- (0000000140317DE0) ----------------------------------------------------
int* __fastcall sub_140317DE0(__int64* a1, unsigned __int64 a2)
{
	int* result; // rax
	int* v4; // rdx
	int* v5; // rdi
	unsigned __int64 v6; // r8
	__int64 v7; // r10
	__int64 v8; // rcx

	if (a1[1] > a2)
		a1[1] = a2;
	result = sub_14018DBC0(*a1, a2, 28i64);
	v5 = result;
	if ((int*)*a1 != result)
	{
		v6 = 0i64;
		if (a1[1])
		{
			v4 = result + 2;
			v7 = -8i64 - (_QWORD)result;
			do
			{
				if (v4 != (int*)8)
				{
					v8 = (__int64)v4 + v7 + *a1;
					*(v4 - 2) = *(_DWORD*)v8;
					*(v4 - 1) = *(_DWORD*)(v8 + 4);
					*v4 = *(_DWORD*)(v8 + 8);
					v4[1] = *(_DWORD*)(v8 + 12);
					*((_WORD*)v4 + 4) = *(_WORD*)(v8 + 16);
					*((_WORD*)v4 + 5) = *(_WORD*)(v8 + 18);
					*((_WORD*)v4 + 6) = *(_WORD*)(v8 + 20);
					*((_WORD*)v4 + 7) = *(_WORD*)(v8 + 22);
					*((_WORD*)v4 + 8) = *(_WORD*)(v8 + 24);
					result = (int*)*(unsigned __int16*)(v8 + 26);
					*((_WORD*)v4 + 9) = (_WORD)result;
				}
				++v6;
				v4 += 7;
			} while (v6 < a1[1]);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v4);
		*a1 = (__int64)v5;
	}
	return result;
}
// 140317EA3: variable 'v4' is possibly undefined

