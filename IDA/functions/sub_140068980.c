//----- (0000000140068980) ----------------------------------------------------
void __fastcall sub_140068980(__int64 a1, int a2, int a3, int a4, int a5)
{
	__int64 v5; // rdi
	int v6; // r10d
	__int64 v11; // r11
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // rax
	int v15; // eax
	int v16; // r15d
	char v17; // al
	int v18; // r9d
	__int64 v19; // r8
	__int64 v20; // rdx
	int v21; // ecx
	__int64 v22; // rbx
	char v23; // al
	int v24; // edx
	int v25; // r10d
	int v26; // eax
	const char* v27; // rax
	__int64 v28; // [rsp+30h] [rbp-38h] BYREF
	int v29; // [rsp+38h] [rbp-30h]
	char v30; // [rsp+3Ch] [rbp-2Ch]
	char v31; // [rsp+3Dh] [rbp-2Bh]
	char v32; // [rsp+3Eh] [rbp-2Ah]
	__int64 v33; // [rsp+40h] [rbp-28h] BYREF
	int v34; // [rsp+48h] [rbp-20h]
	char v35; // [rsp+4Ch] [rbp-1Ch]
	char v36; // [rsp+4Dh] [rbp-1Bh]
	char v37; // [rsp+4Eh] [rbp-1Ah]

	v5 = *(_QWORD*)(a1 + 48);
	v6 = 3;
	*(_BYTE*)(v5 + 74) += 3;
	v11 = 3i64;
	do
	{
		v12 = *(unsigned __int8*)(v5 + 74) - v11--;
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 48i64) + 16i64 * *(unsigned __int16*)(v5 + 2 * v12 + 196) + 8) = *(_DWORD*)(v5 + 48);
		--v6;
	} while (v6);
	if (*(_DWORD*)(a1 + 16) != 259)
	{
		v27 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", aDo);
		sub_140062CF0(a1, v27, *(_DWORD*)(a1 + 16));
	}
	v13 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v13)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v14 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v14;
	}
	if (a5)
		v15 = sub_14006BBF0(v5, (a2 << 6) | 0x7FFF8020u, *(_DWORD*)(*(_QWORD*)(v5 + 24) + 8i64));
	else
		v15 = sub_14006A030((__int64*)v5);
	v29 = -1;
	v32 = 0;
	v16 = v15;
	v17 = *(_BYTE*)(v5 + 74);
	v31 = 0;
	v18 = a4;
	v30 = v17;
	v28 = *(_QWORD*)(v5 + 40);
	*(_QWORD*)(v5 + 40) = &v28;
	v19 = *(_QWORD*)(a1 + 48);
	*(_BYTE*)(v19 + 74) += a4;
	if (a4)
	{
		do
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v19 + 48i64)
				+ 16i64 * *(unsigned __int16*)(v19 + 2 * (*(unsigned __int8*)(v19 + 74) - (__int64)v18--) + 196)
				+ 8) = *(_DWORD*)(v19 + 48);
		while (v18);
	}
	v20 = *(_QWORD*)v5;
	v21 = a4 + *(_DWORD*)(v5 + 60);
	if (v21 > *(unsigned __int8*)(*(_QWORD*)v5 + 115i64))
	{
		if (v21 >= 250)
			sub_140062CF0(*(_QWORD*)(v5 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v5 + 24) + 16i64));
		*(_BYTE*)(v20 + 115) = v21;
	}
	*(_DWORD*)(v5 + 60) += a4;
	v34 = -1;
	v37 = 0;
	v22 = *(_QWORD*)(a1 + 48);
	v23 = *(_BYTE*)(v22 + 74);
	v36 = 0;
	v35 = v23;
	v33 = *(_QWORD*)(v22 + 40);
	*(_QWORD*)(v22 + 40) = &v33;
	sub_140069EC0(a1, v20);
	sub_140065E10(v22);
	sub_140065E10(v5);
	*(_DWORD*)(v5 + 52) = *(_DWORD*)(v5 + 48);
	if (v16 != -1)
		sub_14006A3C0((__int64*)v5, (int*)(v5 + 56), v16);
	if (a5)
		v24 = (a2 << 6) | 0x7FFF801F;
	else
		v24 = ((a2 | (a4 << 8)) << 6) | 0x21;
	v25 = sub_14006BBF0(v5, v24, *(_DWORD*)(*(_QWORD*)(v5 + 24) + 8i64));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 40i64) + 4i64 * *(int*)(v5 + 48) - 4) = a3;
	if (!a5)
		v25 = sub_14006A030((__int64*)v5);
	v26 = *(_DWORD*)(v5 + 48);
	if (v16 + 1 == v26)
	{
		*(_DWORD*)(v5 + 52) = v26;
		if (v25 != -1)
			sub_14006A3C0((__int64*)v5, (int*)(v5 + 56), v25);
	}
	else
	{
		sub_14006A230((__int64*)v5, v25, v16 + 1, 255, v16 + 1);
	}
}
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

