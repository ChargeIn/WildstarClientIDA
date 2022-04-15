#include "../winhttp.h"

//----- (000000014082A280) ----------------------------------------------------
__int64 __fastcall sub_14082A280(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // edi
	_QWORD* v4; // rcx
	__int64 result; // rax
	unsigned int v6; // edx
	_QWORD* v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rcx
	unsigned int v10; // edx
	_QWORD* v11; // rax

	*(_DWORD*)(a1 + 52) = -1;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = sub_1408819F0(dword_140C10F20, 192i64);
	v3 = 52;
	v4 = (_QWORD*)v2;
	*(_QWORD*)(a1 + 64) = v2;
	if (v2)
	{
		*(_DWORD*)(a1 + 48) = 8;
		*(_QWORD*)(a1 + 40) = v2;
		v6 = 0;
		do
		{
			v7 = v4 + 3;
			++v6;
			*v4 = v4 + 3;
			v4 += 3;
		} while (v6 < *(_DWORD*)(a1 + 48));
		*(v7 - 3) = 0i64;
		result = 1i64;
	}
	else
	{
		result = 52i64;
	}
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	if ((_DWORD)result == 1)
	{
		*(_DWORD*)(a1 + 104) = 0;
		*(_DWORD*)(a1 + 100) = -1;
		*(_QWORD*)(a1 + 88) = 0i64;
		v8 = sub_1408819F0(dword_140C10F20, 256i64);
		v9 = (_QWORD*)v8;
		*(_QWORD*)(a1 + 112) = v8;
		if (v8)
		{
			*(_DWORD*)(a1 + 96) = 8;
			*(_QWORD*)(a1 + 88) = v8;
			v10 = 0;
			do
			{
				v11 = v9 + 4;
				++v10;
				*v9 = v9 + 4;
				v9 += 4;
			} while (v10 < *(_DWORD*)(a1 + 96));
			*(v11 - 4) = 0i64;
			v3 = 1;
		}
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		return v3;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

