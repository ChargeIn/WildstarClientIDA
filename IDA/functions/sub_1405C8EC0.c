//----- (00000001405C8EC0) ----------------------------------------------------
__int64 __fastcall sub_1405C8EC0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	unsigned int v4; // esi
	__int64 v5; // rax
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	_DWORD* v8; // r9
	_DWORD* v9; // rax
	__int64 v10; // rbx
	int v11; // edi
	__int64 v12; // r12
	__int64 v13; // rax
	unsigned int v14; // edx
	__int64 v15; // r8
	__int64 v16; // rdx
	BOOL v17; // eax
	__int64 v18; // rsi
	int v19; // ebx
	int* v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rcx
	unsigned int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // rcx
	int* v28; // rax
	int* v29; // rdx
	__int64 v30; // rax
	_QWORD* v31; // rax
	_WORD* v32; // rax
	__int64 result; // rax
	int v34; // r10d
	__int64 v35; // r11
	__int64 v36; // rax
	__int64 v37; // r8
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rbx
	int v41; // eax
	__int64 v42; // rdx
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64* v45; // [rsp+40h] [rbp-98h] BYREF
	__int64 v46; // [rsp+48h] [rbp-90h]
	__int64 v47[2]; // [rsp+50h] [rbp-88h] BYREF
	int v48; // [rsp+60h] [rbp-78h]
	__int64 v49; // [rsp+64h] [rbp-74h]
	int v50; // [rsp+6Ch] [rbp-6Ch]
	_QWORD v51[4]; // [rsp+70h] [rbp-68h] BYREF
	_QWORD v52[9]; // [rsp+90h] [rbp-48h] BYREF
	__int64 v53; // [rsp+E0h] [rbp+8h] BYREF

	v2 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	v3 = v2;
	v53 = v2;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
	{
	case 1u:
		v4 = 0;
		if (*(_DWORD*)(a1 + 324))
		{
			v5 = sub_140584690();
			if (!v5)
				goto LABEL_32;
			v6 = *(_QWORD*)(v5 + 656);
			v7 = 0i64;
			if (!v6)
				goto LABEL_32;
			v8 = *(_DWORD**)(v5 + 648);
			v9 = v8;
			while (*v9 != *(_DWORD*)(a1 + 320))
			{
				++v7;
				v9 += 2;
				if (v7 >= v6)
					goto LABEL_32;
			}
			v4 = v8[2 * v7 + 1];
		}
		else
		{
			v10 = qword_140C65898;
			v11 = *(_DWORD*)(a1 + 320);
			v46 = 0i64;
			v45 = 0i64;
			sub_1405CABD0(qword_140C65898 + 160, v11, (__int64*)&v45);
			sub_1405CABD0(v10 + 184, v11, (__int64*)&v45);
			sub_1405CABD0(v10 + 280, v11, (__int64*)&v45);
			sub_1405CABD0(v10 + 304, v11, (__int64*)&v45);
			if (v46)
			{
				v12 = *v45;
				*(_QWORD*)(a1 + 308) = 1i64;
				*(_DWORD*)(a1 + 304) = 0;
				*(_DWORD*)(a1 + 316) = 96;
				*(_QWORD*)(a1 + 296) = 0i64;
				v13 = *(_QWORD*)(v12 + 80);
				if (!v13)
					v13 = *(_QWORD*)(v12 + 64) + 156i64;
				v14 = *(_DWORD*)(v13 + 128);
				if (v14)
				{
					v15 = sub_1403ACD90(qword_140C65B70, v14, *(_QWORD*)(qword_140C65898 + 120));
					if (v15)
					{
						v16 = *(_QWORD*)(v12 + 64);
						v17 = (*(_DWORD*)(v16 + 340) & 0x400) == 0 || !*(_DWORD*)(v16 + 384) || *(_DWORD*)(v12 + 32) == 0;
						if ((*(_DWORD*)(v16 + 340) & 0x200) != 0 || v17)
						{
							v18 = *(_QWORD*)(qword_140C65898 + 120);
							v19 = **(_DWORD**)(v15 + 112);
							v20 = (int*)(qword_140C65898 + 27920);
							if (a1 == -288)
							{
								v47[0] = 0i64;
								v49 = 0i64;
								v48 = 0;
								v50 = 96;
								v47[1] = 0i64;
								v21 = sub_14055BDC0(qword_140C65898, v18, v15, 1, 0);
								sub_1403986F0(v22, v19, v18, v21, v20, v12, (__int64)v47, 0);
								if (v47[0])
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47[0] - 16) + 8i64))(v47[0] - 16);
							}
							else
							{
								v23 = sub_14055BDC0(qword_140C65898, v18, v15, 1, 0);
								sub_1403986F0(v24, v19, v18, v23, v20, v12, a1 + 288, 0);
							}
						}
					}
				}
				v25 = *(_DWORD*)(a1 + 320);
				if (sub_140444550(qword_140C658F0, v25))
					v4 = sub_1403AC840(qword_140C65898 + 160, 771, v25);
				else
					v4 = 0;
			}
			if (v45)
				(*(void(__fastcall**)(__int64*))(*(v45 - 2) + 8))(v45 - 2);
			v3 = v53;
		}
		if (!v4)
		{
		LABEL_32:
			LODWORD(v53) = 25;
			*(_QWORD*)(a1 + 308) = 1i64;
			*(_QWORD*)(a1 + 312) = 1i64;
			*(_QWORD*)(a1 + 296) = 0i64;
			*(_DWORD*)(a1 + 304) = 25;
			sub_1401C2E70((__int64*)(a1 + 288), 0i64, (int*)&v53);
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
			*(_DWORD*)(a1 + 188) = 1;
			v26 = sub_14018EFA0(v51, (__int64)L"%d", 0i64);
			if (v26 != (_QWORD*)(a1 + 80))
				sub_14001C480(a1 + 80, (int*)v26[1], (int*)v26[2]);
			v27 = v51[1];
		LABEL_45:
			if (v27)
				sub_14018B900(v27, 0);
			return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
		}
		v28 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 320), 0i64);
		if (v28)
		{
			v29 = (int*)*((_QWORD*)v28 + 61);
			if (v29)
			{
				if (*(_WORD*)v29)
				{
					v30 = 0i64;
					if (*(_WORD*)v29)
					{
						do
							++v30;
						while (*((_WORD*)v29 + v30));
					}
					sub_14001C480(a1 + 16, v29, (int*)((char*)v29 + 2 * v30));
				}
			}
		}
		if (v4 > 1)
		{
			v31 = sub_14018EFA0(v52, (__int64)L"%d", v4);
			if (v31 != (_QWORD*)(a1 + 80))
				sub_14001C480(a1 + 80, (int*)v31[1], (int*)v31[2]);
			v27 = v52[1];
			goto LABEL_45;
		}
		v32 = *(_WORD**)(a1 + 88);
		if (v32 != *(_WORD**)(a1 + 96))
		{
			*v32 = 0;
			*(_QWORD*)(a1 + 96) = *(_QWORD*)(a1 + 88);
		}
		return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
	case 3u:
	case 4u:
	case 0xDu:
		result = sub_1403C1780(qword_140C65898, *(_DWORD*)(a1 + 280));
		if (result)
		{
			*(_QWORD*)(a1 + 308) = 1i64;
			*(_DWORD*)(a1 + 304) = 0;
			*(_DWORD*)(a1 + 316) = 96;
			*(_QWORD*)(a1 + 296) = 0i64;
			sub_14039A040(v35, *(_DWORD*)(result + 36), a1 + 288, 1, 0, 0i64);
			return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
		}
		if (v34)
			return sub_1405CACC0(a1 + 16);
		return result;
	case 6u:
	case 9u:
		v36 = sub_14055BDC0(qword_140C65898, *(_QWORD*)(qword_140C65898 + 120), v3, 1, 0);
		v37 = qword_140C65898;
		*(_QWORD*)(a1 + 308) = 1i64;
		*(_DWORD*)(a1 + 304) = 0;
		*(_DWORD*)(a1 + 316) = 96;
		*(_QWORD*)(a1 + 296) = 0i64;
		sub_1403986F0(
			v37 + 27920,
			*(_DWORD*)(a1 + 276),
			*(_QWORD*)(v37 + 120),
			v36,
			(int*)(v37 + 27920),
			0i64,
			a1 + 288,
			1);
		return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
	case 7u:
		v38 = sub_14039DFB0();
		v39 = qword_140C65898;
		v40 = v38;
		if (!v38 || (v41 = *(_DWORD*)(v38 + 128), v41 != 3) && v41 != 9)
			v40 = *(_QWORD*)(qword_140C65898 + 120);
		v42 = v40;
		goto LABEL_61;
	case 0xAu:
		result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 512));
		v40 = result;
		if (!result)
			return result;
		v39 = qword_140C65898;
		v42 = result;
	LABEL_61:
		v43 = sub_14055BDC0(v39, v42, v3, 1, 0);
		v44 = qword_140C65898;
		*(_QWORD*)(a1 + 308) = 1i64;
		*(_DWORD*)(a1 + 304) = 0;
		*(_DWORD*)(a1 + 316) = 96;
		*(_QWORD*)(a1 + 296) = 0i64;
		sub_1403986F0(v44 + 27920, *(_DWORD*)(a1 + 276), v40, v43, (int*)(v44 + 27920), 0i64, a1 + 288, 0);
		return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
	default:
		return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v3, a1 + 288);
	}
}
// 1405C9189: variable 'v22' is possibly undefined
// 1405C91C5: variable 'v24' is possibly undefined
// 1405C93C4: variable 'v34' is possibly undefined
// 1405C940C: variable 'v35' is possibly undefined
// 140B16074: using guessed type wchar_t aD_57[3];
// 140B16504: using guessed type wchar_t aD_56[3];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

