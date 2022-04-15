//----- (0000000140417300) ----------------------------------------------------
__int64 __fastcall sub_140417300(_QWORD* a1)
{
	int v1; // ebp
	unsigned int v3; // esi
	unsigned int v4; // ebx
	_DWORD* v5; // rax
	__int64** v6; // rax
	__int64 v7; // rcx
	__int64* v8; // rax
	__int64 v9; // rcx
	int v10; // eax
	int v11; // ecx
	bool v12; // sf
	_DWORD* v13; // rax
	__int64 result; // rax
	_DWORD* v15; // rcx
	char v16[8]; // [rsp+20h] [rbp-68h] BYREF
	char v17[16]; // [rsp+28h] [rbp-60h] BYREF
	int v18; // [rsp+38h] [rbp-50h]
	__int64 v19; // [rsp+40h] [rbp-48h] BYREF
	int v20; // [rsp+48h] [rbp-40h]
	int v21; // [rsp+4Ch] [rbp-3Ch]
	int v22; // [rsp+50h] [rbp-38h]
	int v23; // [rsp+54h] [rbp-34h]
	int v24; // [rsp+58h] [rbp-30h]
	int v25; // [rsp+5Ch] [rbp-2Ch]
	int v26; // [rsp+60h] [rbp-28h]
	int v27; // [rsp+64h] [rbp-24h]

	v1 = 0;
	v19 = -4294966996i64;
	v20 = 300;
	v21 = -1;
	v3 = 0;
	v22 = 300;
	v23 = -1;
	v24 = 300;
	v25 = -1;
	v26 = 300;
	v27 = -1;
	v4 = 1;
	do
	{
		if (!(unsigned int)sub_140058190((__int64)a1, v4))
			break;
		v5 = sub_1400580E0((__int64)a1, v4);
		if (v5 == dword_140A12138 || v5[2])
		{
			v6 = (__int64**)sub_140056AB0(a1, v4);
			if (v6)
			{
				if (*v6)
				{
					v7 = **v6;
					if (v7)
						continue;
				}
			}
		}
		v15 = (_DWORD*)a1[2];
		*v15 = 0;
		v15[2] = 1;
		goto LABEL_12;
		v8 = (__int64*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v7 + 32i64))(v7, v16);
		v9 = v3;
		++v4;
		++v3;
		*(&v19 + v9) = *v8;
	} while (v4 <= 5);
	v10 = sub_1403D3800((int*)&v19, v3, qword_140C65898 + 160, (__int64)v17);
	v11 = v18;
	v12 = v10 < 0;
	v13 = (_DWORD*)a1[2];
	if (v12)
		v11 = 0;
	v13[2] = 1;
	LOBYTE(v1) = v11 != 0;
	*v13 = v1;
LABEL_12:
	result = 1i64;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140417300: using guessed type char var_68[8];
// 140417300: using guessed type char var_60[16];

