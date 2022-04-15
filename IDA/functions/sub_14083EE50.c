#include "../winhttp.h"

//----- (000000014083EE50) ----------------------------------------------------
__int64 __fastcall sub_14083EE50(char* lpParameter)
{
	__int64 result; // rax
	_QWORD* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // rax
	_QWORD* v8; // rcx
	unsigned int v9; // edx
	_QWORD* v10; // rax

	sub_140868D60((__int64)(lpParameter + 1776));
	result = sub_14083C710((__int64)lpParameter);
	if ((_DWORD)result == 1)
	{
		*((_DWORD*)lpParameter + 54) = dword_140C10F20;
		v3 = lpParameter + 224;
		*((_DWORD*)lpParameter + 442) = 0;
		v4 = 24i64;
		do
		{
			*v3 = 0i64;
			v3[1] = 0i64;
			v3[2] = 0i64;
			v3 += 8;
			*(v3 - 5) = 0i64;
			*(v3 - 4) = 0i64;
			*(v3 - 3) = 0i64;
			*(v3 - 2) = 0i64;
			*(v3 - 1) = 0i64;
			--v4;
		} while (v4);
		*v3 = 0i64;
		v5 = 3i64;
		*((_DWORD*)lpParameter + 508) = dword_140C10F20;
		v6 = lpParameter + 2040;
		*((_DWORD*)lpParameter + 572) = 0;
		do
		{
			*v6 = 0i64;
			v6[1] = 0i64;
			v6[2] = 0i64;
			v6 += 8;
			*(v6 - 5) = 0i64;
			*(v6 - 4) = 0i64;
			*(v6 - 3) = 0i64;
			*(v6 - 2) = 0i64;
			*(v6 - 1) = 0i64;
			--v5;
		} while (v5);
		*v6 = 0i64;
		v6[1] = 0i64;
		v6[2] = 0i64;
		v6[3] = 0i64;
		v6[4] = 0i64;
		v6[5] = 0i64;
		v6[6] = 0i64;
		*((_DWORD*)lpParameter + 48) = 0;
		*((_DWORD*)lpParameter + 47) = -1;
		*((_QWORD*)lpParameter + 22) = 0i64;
		v7 = sub_1408819F0(dword_140C10F20, 640i64);
		v8 = (_QWORD*)v7;
		*((_QWORD*)lpParameter + 25) = v7;
		if (v7)
		{
			*((_DWORD*)lpParameter + 46) = 10;
			*((_QWORD*)lpParameter + 22) = v7;
			v9 = 0;
			do
			{
				v10 = v8 + 8;
				++v9;
				*v8 = v8 + 8;
				v8 += 8;
			} while (v9 < *((_DWORD*)lpParameter + 46));
			*(v10 - 8) = 0i64;
			result = 1i64;
		}
		else
		{
			result = 52i64;
		}
		*((_QWORD*)lpParameter + 20) = 0i64;
		*((_QWORD*)lpParameter + 21) = 0i64;
		if ((_DWORD)result == 1)
			return sub_1408426D0(lpParameter);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

