#include "../winhttp.h"

//----- (000000014088DAF0) ----------------------------------------------------
void __fastcall sub_14088DAF0(__int64 a1, signed __int64 a2, unsigned int a3)
{
	__int64 v3; // rbx
	signed __int64 v7; // r14
	_QWORD* v8; // r9
	__int64 v9; // rcx
	signed __int64 v10; // rdx
	signed __int64 v11; // rax
	__int64 v12; // rcx
	_BYTE* v13; // rcx
	char v14; // al
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	int v20; // esi
	__int64 v21; // rcx
	int v22[4]; // [rsp+20h] [rbp-68h] BYREF
	__int64 v23; // [rsp+30h] [rbp-58h] BYREF
	char v24; // [rsp+38h] [rbp-50h]
	__int128 v25; // [rsp+40h] [rbp-48h]
	__int128 v26; // [rsp+50h] [rbp-38h]
	int v27; // [rsp+90h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 64);
	v7 = a2 + a3;
	v8 = 0i64;
	while (v3)
	{
		v9 = *(_QWORD*)(v3 + 8);
		if (v9)
		{
			v10 = *(_QWORD*)(v3 + 24) - *(int*)(v3 + 36);
			if (v7 > v10)
			{
				if (a2 <= v10)
				{
					v22[2] = 0;
					v22[0] = 0;
					sub_14088B940(v9, v22);
				}
				v11 = *(_QWORD*)(v3 + 24) + *(int*)(v3 + 40);
				if (a2 <= v11 && v7 > v11)
				{
					v12 = *(_QWORD*)(v3 + 8);
					v27 = 0;
					sub_14088BB90(v12, &v27, v11 - a2);
				}
				v13 = *(_BYTE**)(v3 + 8);
				v14 = v13[98];
				if ((v14 & 3) != 0 && (v14 & 0x10) == 0)
				{
					v15 = *(_QWORD*)(v3 + 24);
					v24 = 1;
					v23 = v15 + 1;
					(*(void(__fastcall**)(_BYTE*, signed __int64, _QWORD, __int64*))(*(_QWORD*)v13 + 80i64))(
						v13,
						a2,
						a3,
						&v23);
					v16 = *(_QWORD*)(v3 + 8);
					if ((*(_BYTE*)(v16 + 98) & 0xFu) > 1)
					{
						v17 = *(_QWORD*)(v3 + 8);
						*(_QWORD*)(v3 + 8) = 0i64;
						if (v16)
							sub_14088B630(v17);
					}
				}
			}
		}
		else if (a2 > *(_QWORD*)(v3 + 24) + *(unsigned int*)(v3 + 32))
		{
			v18 = *(_QWORD*)v3;
			*((_QWORD*)&v25 + 1) = v8;
			*(_QWORD*)&v25 = v18;
			if (v3 == *(_QWORD*)(a1 + 64))
				*(_QWORD*)(a1 + 64) = v18;
			else
				*v8 = v18;
			v19 = *(_QWORD*)(v3 + 8);
			v20 = dword_140C10F20;
			v26 = v25;
			*(_QWORD*)(v3 + 8) = 0i64;
			if (v19)
				sub_14088B630(v19);
			v21 = *(_QWORD*)(v3 + 8);
			if (v21)
			{
				sub_14088B630(v21);
				*(_QWORD*)(v3 + 8) = 0i64;
			}
			sub_140881720(v20, v3);
			v8 = (_QWORD*)*((_QWORD*)&v26 + 1);
			v3 = v26;
			continue;
		}
		v8 = (_QWORD*)v3;
		v3 = *(_QWORD*)v3;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

