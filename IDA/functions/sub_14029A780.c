#include "../winhttp.h"

//----- (000000014029A780) ----------------------------------------------------
__int64 __fastcall sub_14029A780(__int64 a1)
{
	unsigned int v2; // r14d
	__int64* v4; // rbp
	signed int v5; // edi
	int v6; // ecx
	int v7; // edx
	unsigned int v8; // edi
	_DWORD* v9; // r8
	int v10; // esi
	int v11; // r12d
	int v12; // r15d
	__int64 v13; // r13
	__int64 v14; // rcx
	signed int v15; // ebp
	unsigned int v16; // edx
	unsigned int v17; // ebx
	__int64 v18; // [rsp+20h] [rbp-88h]
	__int64 v19; // [rsp+28h] [rbp-80h]
	__int64 v20; // [rsp+30h] [rbp-78h]
	__int64 v21; // [rsp+38h] [rbp-70h]
	int v22; // [rsp+40h] [rbp-68h]
	__int64 v23; // [rsp+50h] [rbp-58h] BYREF
	int v24; // [rsp+58h] [rbp-50h]
	__int64 v25; // [rsp+60h] [rbp-48h] BYREF
	__int64 v26; // [rsp+68h] [rbp-40h] BYREF
	int v27; // [rsp+70h] [rbp-38h]
	int v28; // [rsp+74h] [rbp-34h]

	v2 = 1;
	if ((*(_DWORD*)(a1 + 76) & 0x100) == 0)
		v2 = *(_DWORD*)(a1 + 184);
	if (*(_QWORD*)(a1 + 176) != v2)
		return sub_14029B080(a1, 0x80004005);
	if (*(_DWORD*)(a1 + 64))
		return sub_14029B080(a1, 0x80070057);
	v4 = (__int64*)(a1 + 56);
	v5 = D3DXCreateTexture(
		*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
		*(unsigned int*)(a1 + 188),
		*(unsigned int*)(a1 + 192),
		v2,
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7032i64) + 4i64 * *(int*)(a1 + 72)),
		dword_140AE7B30[*(int*)(a1 + 196)],
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7040i64) + 4i64 * *(int*)(a1 + 72)),
		a1 + 56);
	if (v5 < 0)
	{
		v22 = *(_DWORD*)(a1 + 196);
		LODWORD(v21) = *(_DWORD*)(a1 + 72);
		LODWORD(v20) = v2;
		LODWORD(v19) = *(_DWORD*)(a1 + 192);
		LODWORD(v18) = *(_DWORD*)(a1 + 188);
		v23 = 0x141DE4628i64;
		sub_1401A3130(14, 2, &v23, (unsigned int)v5, v18, v19, v20, v21, v22);
		return sub_14029B080(a1, v5);
	}
	v6 = *(_DWORD*)(a1 + 76);
	v7 = 4;
	if ((v6 & 3) != 1)
		v7 = 65540;
	v24 = v7;
	if ((v6 & 0xC) != 4)
	{
		v7 |= 0x20000u;
		v24 = v7;
	}
	if ((v6 & 0x30) != 16)
		v24 = v7 | 0x40000;
	v8 = *(_DWORD*)(a1 + 184);
	v9 = (_DWORD*)((char*)&unk_140AE5200 + 44 * *(int*)(a1 + 196));
	v23 = (__int64)v9;
	while (v8)
	{
		--v8;
		v10 = (*(_DWORD*)(a1 + 188) >> v8 == 0) + (*(_DWORD*)(a1 + 188) >> v8);
		v11 = (*(_DWORD*)(a1 + 192) >> v8 == 0) + (*(_DWORD*)(a1 + 192) >> v8);
		v12 = (v9[9] * ((unsigned int)(*v9 + v10 - 1) / *v9) + 3) & 0xFFFFFFFC;
		if (*(_DWORD*)(a1 + 64))
		{
		LABEL_30:
			v16 = -2147467259;
			return sub_14029B080(a1, v16);
		}
		if (v8 < v2)
		{
			v13 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * (v2 - v8 - 1));
			if (!v13)
				goto LABEL_30;
			v14 = *v4;
			v26 = 0i64;
			v27 = v10;
			v28 = v11;
			v25 = 0i64;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v14 + 144i64))(v14, v8, &v25);
			if (v15 < 0
				|| (v15 = sub_14029B200(
					a1,
					v25,
					v13,
					dword_140AE7B30[*(int*)(a1 + 196)],
					(_DWORD*)v23,
					v10,
					v12,
					(__int64)&v26,
					v24),
					v15 < 0))
			{
				v23 = 0x141DE4578i64;
				LODWORD(v21) = v8;
				LODWORD(v20) = v12;
				LODWORD(v19) = v11;
				LODWORD(v18) = v10;
				sub_1401A3130(14, 2, &v23, (unsigned int)v15, v18, v19, v20, v21, v25);
				v17 = sub_14029B080(a1, v15);
				if (v25)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
				return v17;
			}
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
			v9 = (_DWORD*)v23;
			v4 = (__int64*)(a1 + 56);
		}
	}
	v16 = 0;
	return sub_14029B080(a1, v16);
}
// 14029A8A9: variable 'v18' is possibly undefined
// 14029A8A9: variable 'v19' is possibly undefined
// 14029A8A9: variable 'v20' is possibly undefined
// 14029A8A9: variable 'v21' is possibly undefined
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140C65748: using guessed type __int64 (__fastcall *D3DXCreateTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD);

