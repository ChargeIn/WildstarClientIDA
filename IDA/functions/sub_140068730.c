//----- (0000000140068730) ----------------------------------------------------
void __fastcall sub_140068730(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int v3; // edi
	int v5; // ebp
	char v6; // al
	char v7; // al
	bool v8; // zf
	__int64 v9; // rax
	int v10; // edi
	__int64 v11; // rcx
	int v12; // eax
	int v13; // edx
	__int64 v14; // rcx
	int v15; // eax
	int v16; // edx
	__int64 v17; // [rsp+30h] [rbp-28h] BYREF
	int v18; // [rsp+38h] [rbp-20h]
	char v19; // [rsp+3Ch] [rbp-1Ch]
	char v20; // [rsp+3Dh] [rbp-1Bh]
	char v21; // [rsp+3Eh] [rbp-1Ah]
	__int64 v22; // [rsp+40h] [rbp-18h] BYREF
	int v23; // [rsp+48h] [rbp-10h]
	char v24; // [rsp+4Ch] [rbp-Ch]
	char v25; // [rsp+4Dh] [rbp-Bh]
	char v26; // [rsp+4Eh] [rbp-Ah]

	v2 = *(_QWORD*)(a1 + 48);
	v3 = a2;
	v5 = *(_DWORD*)(v2 + 48);
	*(_DWORD*)(v2 + 52) = v5;
	v23 = -1;
	v26 = 1;
	v6 = *(_BYTE*)(v2 + 74);
	v25 = 0;
	v24 = v6;
	v22 = *(_QWORD*)(v2 + 40);
	*(_QWORD*)(v2 + 40) = &v22;
	v18 = -1;
	v21 = 0;
	v7 = *(_BYTE*)(v2 + 74);
	v20 = 0;
	v19 = v7;
	v17 = *(_QWORD*)(v2 + 40);
	*(_QWORD*)(v2 + 40) = &v17;
	v8 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v8)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v9 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v9;
	}
	sub_140069EC0(a1, a2);
	sub_1400656B0(a1, 276, 272, v3);
	v10 = sub_1400683A0(a1);
	if (!v20)
	{
		sub_140065E10(v2);
		v11 = *(_QWORD*)(a1 + 48);
		v12 = *(_DWORD*)(v11 + 48);
		if (v5 == v12)
		{
			*(_DWORD*)(v11 + 52) = v12;
			if (v10 != -1)
				sub_14006A3C0((__int64*)v11, (int*)(v11 + 56), v10);
			goto LABEL_16;
		}
		v13 = v10;
	LABEL_15:
		sub_14006A230((__int64*)v11, v13, v5, 255, v5);
		goto LABEL_16;
	}
	sub_1400684D0(a1);
	v14 = *(_QWORD*)(a1 + 48);
	*(_DWORD*)(v14 + 52) = *(_DWORD*)(v14 + 48);
	if (v10 != -1)
		sub_14006A3C0((__int64*)v14, (int*)(v14 + 56), v10);
	sub_140065E10(v2);
	v15 = sub_14006A030((__int64*)v2);
	v11 = *(_QWORD*)(a1 + 48);
	v16 = *(_DWORD*)(v11 + 48);
	if (v5 != v16)
	{
		v13 = v15;
		goto LABEL_15;
	}
	*(_DWORD*)(v11 + 52) = v16;
	if (v15 != -1)
		sub_14006A3C0((__int64*)v11, (int*)(v11 + 56), v15);
LABEL_16:
	sub_140065E10(v2);
}
// 1400687DE: variable 'a2' is possibly undefined
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

