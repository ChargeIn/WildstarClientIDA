//----- (00000001400CB960) ----------------------------------------------------
void __fastcall sub_1400CB960(char* a1)
{
	int v2; // ecx
	int v3; // edx
	int v4; // ebp
	int v5; // esi
	__int64 v6; // rbx
	int v7; // eax
	int v8; // eax
	int v9; // esi
	int v10; // eax
	int v11; // ebp
	int v12; // eax
	int v13; // ebx
	unsigned __int8 v14; // al
	__int64 v15; // r8
	__int64 v16; // rdx
	unsigned int v17; // ebp
	int v18; // esi
	unsigned int v19; // ebx
	__int64 v20; // rcx
	int v21; // eax
	int v22; // r9d
	int v23; // eax
	__int64 v24; // rcx
	int v25; // eax
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // rcx
	int v29; // eax
	int v30; // ecx
	__int64 v31; // rax
	__int64 v32; // rax
	_QWORD* v33; // rax
	_QWORD* v34; // rbx
	__m128i v35; // xmm2
	unsigned int v36; // [rsp+30h] [rbp-58h]
	unsigned int v37; // [rsp+34h] [rbp-54h]
	int v38; // [rsp+38h] [rbp-50h]
	unsigned int v39; // [rsp+40h] [rbp-48h] BYREF
	int v40; // [rsp+44h] [rbp-44h]
	int v41; // [rsp+48h] [rbp-40h]
	unsigned int v42; // [rsp+4Ch] [rbp-3Ch]
	__m128 v43; // [rsp+50h] [rbp-38h] BYREF
	__int64 v44; // [rsp+90h] [rbp+8h]
	int v45; // [rsp+90h] [rbp+8h]
	int v46; // [rsp+90h] [rbp+8h]
	int v47; // [rsp+98h] [rbp+10h]
	int v48; // [rsp+98h] [rbp+10h]
	unsigned int v49; // [rsp+A0h] [rbp+18h]
	unsigned int v50; // [rsp+A8h] [rbp+20h]

	if (*((_QWORD*)a1 + 48) != -1i64 && (**((float(__fastcall***)(__int64))a1 + 78))((__int64)(a1 + 624)) == 0.0)
		return;
	sub_1400CB3D0((__int64)a1, &v39);
	v2 = v41 - v39;
	v3 = v42 - v40;
	LODWORD(v44) = v41 - v39;
	HIDWORD(v44) = v42 - v40;
	v49 = v41 - v39;
	v50 = v42 - v40;
	if (*((_QWORD*)a1 + 48) == v44)
		return;
	v4 = HIDWORD(qword_140C77760);
	v5 = qword_140C77760;
	if ((a1[656] & 8) != 0 && (v6 = *((_QWORD*)a1 + 6)) != 0)
	{
		if (*(_BYTE*)(v6 + 992))
			v7 = *(_DWORD*)(v6 + 1000);
		else
			v7 = sub_14010CF80(*((_QWORD*)a1 + 6));
		v45 = v5 + v7;
		if (*(_BYTE*)(v6 + 992))
			v8 = *(_DWORD*)(v6 + 1004);
		else
			v8 = sub_14010D0A0(v6);
		v9 = v49 - v8;
		if (*(_BYTE*)(v6 + 992))
			v10 = *(_DWORD*)(v6 + 996);
		else
			v10 = sub_14010D1C0(v6);
		v11 = v10 + v4;
		if (*(_BYTE*)(v6 + 992))
			v12 = *(_DWORD*)(v6 + 1008);
		else
			v12 = sub_14010D2F0(v6);
		*((_DWORD*)a1 + 180) = v11;
		*((_DWORD*)a1 + 179) = v45;
		*((_DWORD*)a1 + 181) = v9;
		*((_DWORD*)a1 + 182) = v50 - v12;
	}
	else
	{
		*((_DWORD*)a1 + 179) = qword_140C77760;
		*((_DWORD*)a1 + 180) = v4;
		*((_DWORD*)a1 + 181) = v2;
		*((_DWORD*)a1 + 182) = v3;
	}
	v13 = (unsigned __int8)sub_1400C6E00((__int64)a1);
	v14 = sub_1400C6D90((__int64)a1);
	v15 = 0i64;
	v16 = v14;
	v47 = v14;
	if (v13)
	{
		v17 = *((_DWORD*)a1 + 182);
		v20 = *((_QWORD*)a1 + 59);
		v46 = *((_DWORD*)a1 + 180);
		if ((*((_QWORD*)a1 + 82) & 0x200000000i64) != 0)
		{
			v19 = *((_DWORD*)a1 + 179);
			if (v20)
			{
				v21 = sub_1400C4410(v20);
				LODWORD(v16) = v47;
			}
			else
			{
				v21 = 0;
			}
			v22 = v41;
			v18 = v21 + v19;
			*((_DWORD*)a1 + 179) = v21 + v19;
			v15 = v21 + v19;
		}
		else
		{
			v18 = *((_DWORD*)a1 + 181);
			if (v20)
			{
				v23 = sub_1400C4410(v20);
				LODWORD(v16) = v47;
			}
			else
			{
				v23 = 0;
			}
			v15 = v39;
			v19 = v18 - v23;
			*((_DWORD*)a1 + 181) = v18 - v23;
			v22 = v18 - v23;
		}
		if (!(_DWORD)v16)
		{
			v16 = v42;
			v30 = v40;
		LABEL_44:
			v31 = *((_QWORD*)a1 + 59);
			if (v31)
			{
				*(_DWORD*)(v31 + 1312) = v19;
				*(_DWORD*)(v31 + 1316) = v46;
				*(_DWORD*)(v31 + 1320) = v18;
				*(_DWORD*)(v31 + 1324) = v17;
				*(_BYTE*)(v31 + 1392) |= 0x10u;
			}
			v32 = *((_QWORD*)a1 + 58);
			if (v32)
			{
				*(_DWORD*)(v32 + 1312) = v15;
				*(_DWORD*)(v32 + 1316) = v30;
				*(_DWORD*)(v32 + 1320) = v22;
				*(_DWORD*)(v32 + 1324) = v16;
				*(_BYTE*)(v32 + 1392) |= 0x10u;
			}
			goto LABEL_48;
		}
	LABEL_33:
		v24 = *((_QWORD*)a1 + 58);
		v37 = *((_DWORD*)a1 + 179);
		v38 = *((_DWORD*)a1 + 181);
		v36 = *((_DWORD*)a1 + 182);
		if (v24)
			v25 = sub_1400C4410(v24);
		else
			v25 = 0;
		v48 = *((_DWORD*)a1 + 182) - v25;
		v26 = *((_QWORD*)a1 + 58);
		if (v26)
			v27 = sub_1400C4410(v26);
		else
			v27 = 0;
		v28 = *((_QWORD*)a1 + 58);
		*((_DWORD*)a1 + 182) -= v27;
		if (v28)
			v29 = sub_1400C4410(v28);
		else
			v29 = 0;
		v30 = v48;
		v16 = v36;
		v15 = v37;
		v22 = v38;
		v17 -= v29;
		goto LABEL_44;
	}
	if (v14)
	{
		v17 = v42;
		v18 = v41;
		v19 = v39;
		v46 = v40;
		goto LABEL_33;
	}
LABEL_48:
	(*(void(__fastcall**)(char*, __int64, __int64))(*(_QWORD*)a1 + 384i64))(a1, v16, v15);
	*((_DWORD*)a1 + 96) = v49;
	*((_DWORD*)a1 + 97) = v50;
	v33 = (_QWORD*)*((_QWORD*)a1 + 70);
	v34 = (_QWORD*)*v33;
	if ((_QWORD*)*v33 != v33)
	{
		do
		{
			sub_1400CB960(v34[2]);
			v34 = (_QWORD*)*v34;
		} while (v34 != *((_QWORD**)a1 + 70));
	}
	sub_1400C7600((__int64)a1);
	v35 = _mm_cvtsi32_si128(0);
	v43 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), v35),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), v35)));
	sub_1400D4070((__int64)a1, 6u, a1, byte_1409D2D8C, &v43);
}
// 1409D2D8C: using guessed type _BYTE byte_1409D2D8C[88];
// 140C77760: using guessed type __int64 qword_140C77760;
// 1400CB960: using guessed type __m128 var_38;

