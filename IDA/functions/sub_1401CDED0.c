//----- (00000001401CDED0) ----------------------------------------------------
__int64 __fastcall sub_1401CDED0(
	int a1,
	unsigned __int16* a2,
	unsigned int a3,
	_DWORD** a4,
	unsigned int* a5,
	char* a6)
{
	unsigned int i; // r10d
	unsigned __int64 v11; // rax
	unsigned __int16* v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rax
	unsigned int v15; // r9d
	unsigned int v16; // r10d
	int v17; // r14d
	unsigned int v19; // r11d
	__int16* v20; // rax
	unsigned int v21; // edx
	int v22; // r8d
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int16 v25; // ax
	unsigned int v26; // r8d
	unsigned __int16* v27; // rdx
	int v28; // r12d
	_DWORD* v29; // rdi
	__int64 v30; // rdx
	unsigned int v31; // ebx
	__int64 v32; // rsi
	__int64 v33; // r8
	unsigned int v34; // r13d
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int16 v37; // ax
	int v38; // r8d
	int v39; // r9d
	unsigned int j; // edx
	bool v41; // zf
	__int64 v42; // rdi
	char v43; // r9
	__int64 v44; // r8
	int v45; // eax
	int v46; // eax
	bool v47; // cc
	int v48; // [rsp+20h] [rbp-89h]
	int v49; // [rsp+20h] [rbp-89h]
	int v50; // [rsp+24h] [rbp-85h]
	int v51; // [rsp+28h] [rbp-81h]
	unsigned int v52; // [rsp+2Ch] [rbp-7Dh]
	_DWORD* v54; // [rsp+38h] [rbp-71h]
	char* v55; // [rsp+40h] [rbp-69h]
	int v56; // [rsp+48h] [rbp-61h]
	char* v57; // [rsp+50h] [rbp-59h]
	__int16 v61[16]; // [rsp+7Ah] [rbp-2Fh] BYREF
	__int16 v62[15]; // [rsp+9Ah] [rbp-Fh]

	for (i = 0; i <= 0xF; ++i)
	{
		v11 = i;
		if (v11 >= 16)
		{
			_report_rangecheckfailure();
			JUMPOUT(0x1401CE38Ai64);
		}
		v61[v11 - 1] = 0;
	}
	if (a3)
	{
		v12 = a2;
		v13 = a3;
		do
		{
			v14 = *v12++;
			++v61[v14 - 1];
			--v13;
		} while (v13);
	}
	v15 = *a5;
	v16 = 15;
	v17 = -1;
	do
	{
		if (v61[v16 - 1])
			break;
		--v16;
	} while (v16);
	if (v15 > v16)
		v15 = v16;
	if (!v16)
	{
		*(*a4)++ = 320;
		*(*a4)++ = 320;
		*a5 = 1;
		return 0i64;
	}
	v19 = 1;
	if (v16 > 1)
	{
		v20 = v61;
		do
		{
			if (*v20)
				break;
			++v19;
			++v20;
		} while (v19 < v16);
	}
	v21 = 1;
	if (v15 < v19)
		v15 = v19;
	v22 = 1;
	v52 = v15;
	do
	{
		v22 = 2 * v22 - (unsigned __int16)v61[v21 - 1];
		if (v22 < 0)
			return 0xFFFFFFFFi64;
		++v21;
	} while (v21 <= 0xF);
	if (v22 > 0 && (!a1 || v16 != 1))
		return 0xFFFFFFFFi64;
	v62[0] = 0;
	v23 = 0i64;
	v24 = 14i64;
	do
	{
		v25 = v61[v23++];
		v62[v23] = v61[v23 + 15] + v25;
		--v24;
	} while (v24);
	v26 = 0;
	if (a3)
	{
		v27 = a2;
		do
		{
			if (*v27)
				*(_WORD*)&a6[2 * (unsigned __int16)v61[*v27 + 15]++] = v26;
			++v26;
			++v27;
		} while (v26 < a3);
	}
	if (a1)
	{
		if (a1 == 1)
		{
			v28 = 256;
			v57 = (char*)&unk_140A4A8D0 - 514;
			v55 = (char*)&unk_140A4A890 - 514;
		}
		else
		{
			v28 = -1;
			v57 = (char*)&unk_140A4A910;
			v55 = (char*)&unk_140A4A850;
		}
	}
	else
	{
		v55 = a6;
		v57 = a6;
		v28 = 19;
	}
	v29 = *a4;
	LOBYTE(v30) = 0;
	v31 = 0;
	v32 = (unsigned int)(1 << v15);
	LODWORD(v33) = 0;
	v51 = 0;
	v54 = *a4;
	v50 = 0;
	v34 = 1 << v15;
	v56 = v32 - 1;
	if (a1 == 1)
	{
		if ((unsigned int)v32 <= 0x354)
			goto LABEL_47;
		return 1i64;
	}
	if (a1 == 2 && (unsigned int)v32 > 0x250)
		return 1i64;
	while (1)
	{
	LABEL_47:
		BYTE1(v48) = v19 - v30;
		v35 = *(unsigned __int16*)&a6[2 * (unsigned int)v33];
		if ((int)v35 >= v28)
		{
			if ((int)v35 <= v28)
			{
				LOBYTE(v48) = 96;
				v37 = 0;
			}
			else
			{
				v36 = 2 * v35;
				LOBYTE(v48) = v55[v36];
				v37 = *(_WORD*)&v57[v36];
			}
			HIWORD(v48) = v37;
		}
		else
		{
			LOBYTE(v48) = 0;
			HIWORD(v48) = *(_WORD*)&a6[2 * (unsigned int)v33];
		}
		v38 = v32;
		v39 = 1 << (v19 - v30);
		LODWORD(v30) = v32 + (v31 >> v50);
		do
		{
			v30 = (unsigned int)(v30 - v39);
			v29[v30] = v48;
			v38 -= v39;
		} while (v38);
		for (j = 1 << (v19 - 1); (j & v31) != 0; j >>= 1)
			;
		if (j)
			v31 = j + ((j - 1) & v31);
		else
			v31 = 0;
		v33 = (unsigned int)(v51 + 1);
		v41 = v61[v19 - 1]-- == 1;
		++v51;
		if (!v41)
			goto LABEL_63;
		if (v19 == v16)
			break;
		v19 = a2[*(unsigned __int16*)&a6[2 * v33]];
	LABEL_63:
		LODWORD(v30) = v50;
		if (v19 > v52)
		{
			v42 = v31 & v56;
			if ((_DWORD)v42 == v17)
			{
				v29 = v54;
			}
			else
			{
				if (!v50)
					LODWORD(v30) = v52;
				v43 = v19 - v30;
				v54 += v32;
				v50 = v30;
				v44 = v19;
				v45 = 1 << (v19 - v30);
				if (v19 < v16)
				{
					do
					{
						v46 = v45 - (unsigned __int16)v61[v44 - 1];
						if (v46 <= 0)
							break;
						v44 = (unsigned int)(v44 + 1);
						++v43;
						v45 = 2 * v46;
					} while ((unsigned int)v44 < v16);
				}
				v32 = (unsigned int)(1 << v43);
				v34 += v32;
				if (a1 == 1)
				{
					v47 = v34 <= 0x354;
				}
				else
				{
					if (a1 != 2)
						goto LABEL_75;
					v47 = v34 <= 0x250;
				}
				if (!v47)
					return 1i64;
			LABEL_75:
				v30 = 4 * v42;
				v17 = v31 & v56;
				v29 = v54;
				*((_BYTE*)*a4 + v30) = v43;
				*((_BYTE*)*a4 + v30 + 1) = v52;
				LODWORD(v33) = v51;
				*(_WORD*)((char*)*a4 + v30 + 2) = v54 - *a4;
				LOBYTE(v30) = v50;
			}
		}
	}
	if (v31)
	{
		HIBYTE(v49) = 0;
		LOBYTE(v49) = 64;
		*(_WORD*)((char*)&v49 + 1) = (unsigned __int8)(v19 - v50);
		v29[v31] = v49;
	}
	*a4 += v34;
	*a5 = v52;
	return 0i64;
}
// 1401CE385: control flows out of bounds to 1401CE38A
// 1407DEDF4: using guessed type __int64 _report_rangecheckfailure(void);

