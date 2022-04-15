#include "../winhttp.h"

//----- (000000014072D8C0) ----------------------------------------------------
__int64 __fastcall sub_14072D8C0(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // eax
	int* v4; // rcx
	__int64 v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-108h] BYREF
	__int64 v9; // [rsp+28h] [rbp-100h]
	__int64 v10[24]; // [rsp+40h] [rbp-E8h] BYREF
	__int128 v11; // [rsp+100h] [rbp-28h]
	int* v12; // [rsp+110h] [rbp-18h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)result + 56i64))(*(_QWORD*)result);
		sub_1400B7090((__int64)v10, v3);
		v12 = 0i64;
		v11 = 0i64;
		v10[0] = (__int64)off_140B69230;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v11 = v4;
		*((_QWORD*)&v11 + 1) = v4;
		v12 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = sub_1400B7660(v10);
		v6 = (unsigned __int64*)sub_14018F0E0(&v8, *(unsigned __int16**)(v5 + 8))[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			sub_140058710((__int64)a1, v6, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v9)
			sub_14018B900(v9, 0);
		if ((_QWORD)v11)
			sub_14018B900(v11, 0);
		sub_1400B7390(v10);
		return 1i64;
	}
	return result;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

