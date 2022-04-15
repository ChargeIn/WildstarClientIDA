#include "../winhttp.h"

//----- (0000000140880730) ----------------------------------------------------
__int64 __fastcall sub_140880730(__int64 a1, __int64 a2, char a3)
{
	__int64 v3; // rax
	int v5; // r9d
	__int64 v6; // rdx
	int v9; // r8d
	int v10; // r10d
	char v11; // cl
	int v12; // eax
	unsigned int v13; // ebx
	__int64 v14; // r10
	unsigned int v15; // eax
	int v16; // [rsp+40h] [rbp-38h] BYREF
	__int64 v17; // [rsp+44h] [rbp-34h]
	char v18; // [rsp+4Ch] [rbp-2Ch]
	char v19; // [rsp+4Dh] [rbp-2Bh]
	int v20[4]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v21; // [rsp+60h] [rbp-18h]
	char v22; // [rsp+68h] [rbp-10h]
	bool v23; // [rsp+69h] [rbp-Fh]
	int v24; // [rsp+6Ch] [rbp-Ch]

	v3 = *(_QWORD*)(a1 + 24);
	v5 = -1;
	v6 = *(_QWORD*)(v3 + 168);
	if (!*(_QWORD*)(v6 + 24) && *(_DWORD*)(v6 + 4) == -1)
		return 2i64;
	v18 = a3;
	v9 = 0;
	v16 = 1065353216;
	v17 = 0i64;
	v19 = (int)*(float*)(v3 + 388);
	v10 = *(_DWORD*)(v6 + 16);
	if ((v10 & 0x100) == 0)
		v5 = *(_DWORD*)(v6 + 4);
	v11 = *(_BYTE*)(v6 + 16);
	v12 = *(unsigned __int16*)(v6 + 34);
	v20[0] = 0;
	v20[1] = v12;
	v20[2] = 0;
	v21 = 0i64;
	v22 = v11 & 1;
	v24 = v5;
	v23 = (v10 & 0x200) != 0;
	v13 = 1;
	if ((*(_DWORD*)(v6 + 16) & 0x100) != 0)
		v9 = 1;
	v20[0] = v9;
	v14 = *(_QWORD*)qword_140C62930;
	if ((*(_DWORD*)(v6 + 16) & 0x400) != 0)
		v15 = (*(__int64(__fastcall**)(__int64, _QWORD, int*, int*, __int64, __int64, _BYTE))(v14 + 48))(
			qword_140C62930,
			*(_QWORD*)(v6 + 24),
			v20,
			&v16,
			a2,
			a1 + 88,
			0);
	else
		v15 = (*(__int64(__fastcall**)(__int64, _QWORD, int*, int*, __int64, __int64, _BYTE))(v14 + 40))(
			qword_140C62930,
			*(unsigned int*)(v6 + 4),
			v20,
			&v16,
			a2,
			a1 + 88,
			0);
	if (v15 != 1)
		return v15;
	return v13;
}
// 140C62930: using guessed type __int64 qword_140C62930;

