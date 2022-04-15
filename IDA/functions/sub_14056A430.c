//----- (000000014056A430) ----------------------------------------------------
__int64 __fastcall sub_14056A430(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rax
	__int64 v4; // rax
	int* v5; // rax
	int* v6; // rbx
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	__int64 v10; // rbx
	unsigned int v11; // edx
	__int64 v12; // rcx
	char v13; // al
	char v14; // al
	char v15; // al
	char v16; // al
	char v17; // al
	char v18; // al
	char v19; // al
	char v20; // al
	char v21; // al
	__int64 v22; // rcx
	unsigned __int64 v23; // rdx
	__int16 v24; // ax
	unsigned __int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	unsigned __int64 v28; // rax
	unsigned int v29; // edx
	bool v30; // zf
	_DWORD* v31; // rax
	__int64 v32; // r9
	__int64 v33; // rdx
	int v34; // ebx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v40; // [rsp+38h] [rbp-C8h]
	__int64 v41; // [rsp+48h] [rbp-B8h] BYREF
	__int64(__fastcall * *v42)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v43; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v44)(); // [rsp+70h] [rbp-90h] BYREF
	int v45; // [rsp+78h] [rbp-88h]
	__int64 v46; // [rsp+80h] [rbp-80h]
	__int64 v47; // [rsp+88h] [rbp-78h]
	__int64 v48; // [rsp+90h] [rbp-70h]
	__int64 v49; // [rsp+98h] [rbp-68h]
	__int64 v50; // [rsp+A0h] [rbp-60h]
	__int64 v51; // [rsp+A8h] [rbp-58h]
	__int64 v52; // [rsp+B0h] [rbp-50h]
	int v53; // [rsp+B8h] [rbp-48h]
	__int128 v54; // [rsp+C0h] [rbp-40h]
	int v55; // [rsp+D0h] [rbp-30h]
	__int64 v56; // [rsp+D8h] [rbp-28h]
	__int64 v57; // [rsp+E0h] [rbp-20h]
	__int64 v58; // [rsp+ECh] [rbp-14h]
	int v59; // [rsp+F4h] [rbp-Ch]
	__int64 v60; // [rsp+F8h] [rbp-8h]
	__int64 v61; // [rsp+100h] [rbp+0h]
	__int64 v62; // [rsp+108h] [rbp+8h]
	__int128 v63; // [rsp+110h] [rbp+10h]
	__int64 v64; // [rsp+120h] [rbp+20h]
	int v65; // [rsp+13Ch] [rbp+3Ch]
	__int64 v66; // [rsp+188h] [rbp+88h]
	__int64 v67; // [rsp+190h] [rbp+90h]
	__int64 v68; // [rsp+198h] [rbp+98h]
	__int64 v69; // [rsp+1A0h] [rbp+A0h]
	__int64 v70; // [rsp+1A8h] [rbp+A8h]
	__int64 v71; // [rsp+1D8h] [rbp+D8h]
	BOOL v72; // [rsp+1E0h] [rbp+E0h]

	if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 332i64) & 8) == 0
		&& !*(_DWORD*)(a1 + 144)
		&& !*(_DWORD*)(a1 + 148)
		&& !*(_QWORD*)(a1 + 176)
		&& !*(_DWORD*)(a1 + 184)
		&& !*(_DWORD*)(a1 + 220)
		&& !*(_QWORD*)(a1 + 224)
		&& !*(_DWORD*)(a1 + 292)
		&& !*(_DWORD*)(a1 + 232))
	{
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 72))
	{
		v3 = sub_14018B280(312i64, 0);
		if (v3)
			v4 = sub_1400B52A0((__int64)v3);
		else
			v4 = 0i64;
		*(_QWORD*)(a1 + 72) = v4;
	}
	if (!*(_QWORD*)(a1 + 80))
	{
		v5 = sub_14018B280(400i64, 0);
		v6 = v5;
		if (v5)
		{
			sub_1407E4830(v5, 0i64, 0x90ui64);
			sub_1407E4830(v6, 0i64, 0x190ui64);
			sub_1407E4830(v6, 0i64, 0x90ui64);
			*(_QWORD*)v6 = 0xC5000000C5i64;
			*((_QWORD*)v6 + 1) = 0xC5000000C5i64;
			*((_QWORD*)v6 + 2) = 0xC5000000C5i64;
			*((_QWORD*)v6 + 3) = 0xC5000000C5i64;
			*((_QWORD*)v6 + 4) = 0xC5000000C5i64;
			*((_QWORD*)v6 + 5) = 0xC5000000C5i64;
			*((_QWORD*)v6 + 6) = 0xC5000000C5i64;
			v6[14] = 197;
		}
		else
		{
			v6 = 0i64;
		}
		*(_QWORD*)(a1 + 80) = v6;
	}
	if (!*(_QWORD*)(a1 + 96))
	{
		v7 = sub_14018B280(16i64, 0);
		if (v7)
		{
			*(_QWORD*)v7 = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		*(_QWORD*)(a1 + 96) = v7;
	}
	if (!*(_QWORD*)(a1 + 104))
	{
		v8 = sub_14018B280(8i64, 0);
		if (v8)
			*(_QWORD*)v8 = 0i64;
		else
			v8 = 0i64;
		*(_QWORD*)(a1 + 104) = v8;
	}
	if (!*(_QWORD*)(a1 + 88))
	{
		v9 = sub_14018B280(12i64, 0);
		if (v9)
		{
			*(_QWORD*)v9 = 0i64;
			v9[2] = 1;
		}
		else
		{
			v9 = 0i64;
		}
		*(_QWORD*)(a1 + 88) = v9;
	}
	v10 = *(_QWORD*)(a1 + 72);
	sub_1407E4830((int*)v10, 0i64, 0x138ui64);
	v10 += 148i64;
	sub_1407E4830((int*)v10, 0i64, 0x90ui64);
	*(_QWORD*)v10 = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 8) = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 16) = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 24) = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 32) = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 40) = 0xC5000000C5i64;
	*(_QWORD*)(v10 + 48) = 0xC5000000C5i64;
	*(_DWORD*)(v10 + 56) = 197;
	v11 = *(_DWORD*)(a1 + 220);
	v12 = *(_QWORD*)(a1 + 96);
	*(_QWORD*)v12 = 0i64;
	*(_QWORD*)(v12 + 8) = 0i64;
	v13 = v11 & 7;
	v11 >>= 3;
	*(_BYTE*)(v12 + 9) = v13;
	v14 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 8) = v14 & 7;
	v15 = v11;
	v11 >>= 1;
	*(_DWORD*)(v12 + 12) = v15 & 1;
	v16 = v11;
	v11 >>= 3;
	*(_BYTE*)v12 = v16 & 7;
	v17 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 1) = v17 & 7;
	v18 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 2) = v18 & 7;
	v19 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 3) = v19 & 7;
	v20 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 4) = v20 & 7;
	v21 = v11;
	v11 >>= 3;
	*(_BYTE*)(v12 + 5) = v21 & 7;
	*(_BYTE*)(v12 + 6) = v11 & 7;
	*(_BYTE*)(v12 + 7) = (v11 >> 3) & 7;
	v22 = *(_QWORD*)(a1 + 104);
	v23 = *(_QWORD*)(a1 + 224) >> 4;
	*(_BYTE*)v22 = *(_QWORD*)(a1 + 224) & 0xF;
	v24 = v23;
	v23 >>= 10;
	*(_WORD*)(v22 + 2) = v24 & 0x3FF;
	*(_WORD*)(v22 + 4) = v23 & 0x3FF;
	*(_WORD*)(v22 + 6) = (v23 >> 10) & 0x3FF;
	v25 = *(_QWORD*)(a1 + 176);
	v26 = *(_QWORD*)(a1 + 64);
	v27 = *(_QWORD*)(a1 + 88);
	if (v25)
	{
		*(_BYTE*)v27 = v25;
		v28 = v25 >> 8;
		*(_BYTE*)(v27 + 1) = v28;
		v28 >>= 8;
		*(_BYTE*)(v27 + 2) = v28;
		v28 >>= 8;
		*(_BYTE*)(v27 + 3) = v28;
		v28 >>= 8;
		*(_BYTE*)(v27 + 4) = v28;
		v28 >>= 8;
		*(_BYTE*)(v27 + 5) = v28;
		v28 >>= 8;
		*(_BYTE*)(v27 + 6) = v28;
		*(_DWORD*)(v27 + 8) = BYTE1(v28);
	}
	else
	{
		*(_QWORD*)v27 = 0i64;
		*(_DWORD*)(v27 + 8) = 1;
		if (v26 && (unsigned int)(*(_DWORD*)(v26 + 320) - 1) <= 1)
			*(_DWORD*)(v27 + 8) = 0;
	}
	v29 = *(_DWORD*)(a1 + 232);
	v30 = *(_DWORD*)(a1 + 32) == 0;
	v45 = 0;
	v46 = 0i64;
	v54 = 0i64;
	v63 = 0i64;
	v47 = 1i64;
	v58 = 0i64;
	v61 = 0i64;
	v62 = 0i64;
	v72 = v30;
	v44 = &off_140B6C7A0;
	v48 = 0i64;
	v49 = 0i64;
	v50 = 0i64;
	v71 = qword_140C65898;
	v51 = 0i64;
	v52 = 0i64;
	v53 = 0;
	v55 = 0;
	v56 = 0i64;
	v57 = 0i64;
	v59 = 1;
	v60 = 0i64;
	v64 = 0i64;
	v65 = 0;
	v66 = 0i64;
	v67 = 0i64;
	v68 = 0i64;
	v69 = 0i64;
	v70 = 0i64;
	v31 = sub_140445320(&v42, v29);
	v32 = *(_QWORD*)(a1 + 80);
	v46 = *(_QWORD*)(a1 + 64);
	v47 = *(_QWORD*)v31;
	v48 = *((_QWORD*)v31 + 1);
	v49 = *((_QWORD*)v31 + 2);
	LODWORD(v50) = v31[6];
	v33 = *(_QWORD*)(a1 + 72);
	HIDWORD(v50) = v31[7];
	v52 = *(unsigned int*)(a1 + 144) | 0x100000000i64;
	v53 = *(_DWORD*)(a1 + 148);
	*(_QWORD*)&v54 = a1 + 152;
	*((_QWORD*)&v54 + 1) = *(_QWORD*)(a1 + 88);
	v51 = *(_QWORD*)(a1 + 104);
	v55 = *(_DWORD*)(a1 + 184);
	v56 = a1 + 188;
	v57 = *(_QWORD*)(a1 + 96);
	if ((unsigned int)sub_14040C310((__int64)&v44, v33, qword_140C658F0, v32, 0i64, 0i64))
	{
		*(_QWORD*)&v40 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v40 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v42 = TlsValue;
		v41 = 0x141E19018i64;
		v43 = v40;
		v34 = sub_1401971E0(&dword_140C8AF2C, 28, &v41, &v42);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v40 + 1));
		if (v34)
			DebugBreak();
		sub_14018B900(*(_QWORD*)(a1 + 72), 0);
		v35 = *(_QWORD*)(a1 + 80);
		*(_QWORD*)(a1 + 72) = 0i64;
		sub_14018B900(v35, 0);
		v36 = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(a1 + 80) = 0i64;
		sub_14018B900(v36, 0);
		v37 = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 96) = 0i64;
		sub_14018B900(v37, 0);
		v38 = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 104) = 0i64;
		sub_14018B900(v38, 0);
		*(_QWORD*)(a1 + 88) = 0i64;
		result = 2147500037i64;
	}
	else
	{
		*(_DWORD*)(qword_140C65898 + 1368) = 1;
		result = 0i64;
	}
	*(_DWORD*)(a1 + 292) = 0;
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B6C7A0: using guessed type __int64 (__fastcall *off_140B6C7A0)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C8AF2C: using guessed type _DWORD dword_140C8AF2C;

