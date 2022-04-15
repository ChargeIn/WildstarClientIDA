#include "../winhttp.h"

//----- (0000000140931A70) ----------------------------------------------------
int* sub_140931A70()
{
	int* result; // rax
	int* v1; // rbx
	__int64 v2; // rax
	_QWORD* v3; // rcx
	bool v4; // zf
	_DWORD* v5; // rax
	__int64 v6; // rcx

	result = (int*)off_140C1B1E0(112i64);
	v1 = result;
	if (!result)
		return result;
	sub_1407E4830(result, 0i64, 0x70ui64);
	*v1 = 0;
	*((_QWORD*)v1 + 7) = off_140C1B1E0(4096i64);
	v2 = off_140C1B1E0(4096i64);
	v3 = (_QWORD*)*((_QWORD*)v1 + 7);
	*((_QWORD*)v1 + 8) = v2;
	if (v3)
	{
		if (v2)
		{
			v4 = dword_140C63558 == 0;
			*v3 = 0i64;
			*(_QWORD*)(*((_QWORD*)v1 + 7) + 8i64) = 0i64;
			**((_QWORD**)v1 + 8) = 0i64;
			*(_QWORD*)(*((_QWORD*)v1 + 8) + 8i64) = 0i64;
			*((_QWORD*)v1 + 9) = -1i64;
			if (v4)
			{
				dword_140C63558 = 1;
				v5 = (_DWORD*)((unsigned __int64)&unk_140C6358F & 0xFFFFFFFFFFFFFFF0ui64);
				qword_140C63578 = (__int64)v5;
				*v5 = 0x80000000;
				v5[4] = 0x7FFFFFFF;
				v5[8] = 0;
				v5[9] = 0x80000000;
				v5[12] = -1;
				v5[13] = 0x7FFFFFFF;
			}
			return v1;
		}
		off_140C1B1E8(v3);
	}
	v6 = *((_QWORD*)v1 + 8);
	if (v6)
		off_140C1B1E8(v6);
	off_140C1B1E8(v1);
	return 0i64;
}
// 140931B52: conditional instruction was optimized away because rcx.8!=0
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);
// 140C63558: using guessed type int dword_140C63558;
// 140C63578: using guessed type __int64 qword_140C63578;

