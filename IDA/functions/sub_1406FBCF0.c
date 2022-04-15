#include "../winhttp.h"

//----- (00000001406FBCF0) ----------------------------------------------------
__int64 __fastcall sub_1406FBCF0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	int* v4; // rbx
	int* v5; // rax
	unsigned __int16* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-108h] BYREF
	int* v13; // [rsp+28h] [rbp-100h]
	int* v14; // [rsp+30h] [rbp-F8h]
	int* v15; // [rsp+38h] [rbp-F0h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-E8h] BYREF
	char v17[184]; // [rsp+48h] [rbp-E0h] BYREF
	__int128 v18; // [rsp+100h] [rbp-28h]
	int* v19; // [rsp+110h] [rbp-18h]

	sub_1400B6F30((__int64)&v16);
	v19 = 0i64;
	v18 = 0i64;
	v16 = off_140B69230;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v18 = v2;
	*((_QWORD*)&v18 + 1) = v2;
	v19 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v4 = (int*)sub_14034BDD0(v3, 173882);
	v5 = sub_14018B280(16i64, 0);
	v6 = (unsigned __int16*)v5;
	v13 = v5;
	v14 = v5;
	v15 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	if (v4)
	{
		v7 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v7;
			while (*((_WORD*)v4 + v7));
		}
		sub_14001C480((__int64)v17, v4, (int*)((char*)v4 + 2 * v7));
		v8 = sub_1400B7660(&v16);
		if ((__int64*)v8 != &v12)
		{
			sub_14001C480((__int64)&v12, *(int**)(v8 + 8), *(int**)(v8 + 16));
			v6 = (unsigned __int16*)v13;
		}
	}
	v9 = (unsigned __int64*)sub_14018F0E0(&v12, v6)[1];
	if (v9)
	{
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
		sub_140058710(a1, v9, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if ((_QWORD)v18)
		sub_14018B900(v18, 0);
	sub_1400B7390(&v16);
	return 1i64;
}
// 1406FBD69: variable 'v3' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 1406FBCF0: using guessed type char var_E0[184];

