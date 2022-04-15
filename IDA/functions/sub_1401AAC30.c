//----- (00000001401AAC30) ----------------------------------------------------
__int64 __fastcall sub_1401AAC30(__int64 a1, int a2)
{
	unsigned __int8* v4; // r15
	unsigned int v5; // eax
	unsigned int v6; // r9d
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 v10; // r9
	unsigned int v11; // edx
	__int16 v12; // r8
	unsigned __int8 v13; // dl
	unsigned __int16 v14; // r8
	int v15; // ecx
	unsigned int v16; // eax
	BOOL v17; // r10d
	unsigned int v18; // r9d
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // r8
	__int64 v22; // r9
	bool v23; // zf
	__int64 v24; // rax
	__int64 v25; // rdx
	int v26; // ecx
	int v27; // r8d
	__int64 v28; // rdx
	int v29; // eax
	unsigned __int8* v30; // rdx
	__int64 v31; // rbp
	__int64 v32; // rsi
	unsigned int v33; // r14d
	unsigned int v35; // ecx
	int v36; // eax
	int v37; // eax
	unsigned __int8* v38; // rdx
	__int64 v39; // rcx
	int v40; // eax
	__int64 v41; // rcx

	v4 = 0i64;
	while (1)
	{
		v5 = *(_DWORD*)(a1 + 156);
		if (v5 < 0x106)
		{
			sub_1401AA730(a1);
			v5 = *(_DWORD*)(a1 + 156);
			if (v5 < 0x106 && !a2)
				return 0i64;
			if (!v5)
				break;
		}
		if (v5 >= 3)
		{
			v6 = *(_DWORD*)(a1 + 148);
			v7 = *(_QWORD*)(a1 + 104);
			v8 = *(_QWORD*)(a1 + 96);
			v9 = *(_DWORD*)(a1 + 124) & ((*(_DWORD*)(a1 + 112) << *(_DWORD*)(a1 + 128)) ^ (unsigned int)*(unsigned __int8*)(v6 + 2 + *(_QWORD*)(a1 + 80)));
			v10 = *(_DWORD*)(a1 + 76) & v6;
			*(_DWORD*)(a1 + 112) = v9;
			*(_WORD*)(v8 + 2 * v10) = *(_WORD*)(v7 + 2 * v9);
			v11 = *(unsigned __int16*)(*(_QWORD*)(a1 + 96)
				+ 2i64 * (unsigned int)(*(_DWORD*)(a1 + 76) & *(_DWORD*)(a1 + 148)));
			*(_WORD*)(*(_QWORD*)(a1 + 104) + 2i64 * *(unsigned int*)(a1 + 112)) = *(_WORD*)(a1 + 148);
			if (v11)
			{
				if (*(_DWORD*)(a1 + 148) - v11 <= *(_DWORD*)(a1 + 68) - 262)
					*(_DWORD*)(a1 + 136) = sub_1401AA580(a1, v11);
			}
		}
		if (*(_DWORD*)(a1 + 136) < 3u)
		{
			v28 = *(unsigned __int8*)(*(unsigned int*)(a1 + 148) + *(_QWORD*)(a1 + 80));
			*(_WORD*)(*(_QWORD*)(a1 + 5880) + 2i64 * *(unsigned int*)(a1 + 5876)) = 0;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 5876))++ + *(_QWORD*)(a1 + 5864)) = v28;
			++* (_WORD*)(a1 + 4 * v28 + 188);
			v17 = *(_DWORD*)(a1 + 5876) == *(_DWORD*)(a1 + 5872) - 1;
			--* (_DWORD*)(a1 + 156);
		}
		else
		{
			v12 = *(_WORD*)(a1 + 148) - *(_WORD*)(a1 + 152);
			v13 = *(_BYTE*)(a1 + 136);
			*(_WORD*)(*(_QWORD*)(a1 + 5880) + 2i64 * *(unsigned int*)(a1 + 5876)) = v12;
			v13 -= 3;
			v14 = v12 - 1;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 5876))++ + *(_QWORD*)(a1 + 5864)) = v13;
			++* (_WORD*)(a1 + 4i64 * byte_140A47F70[v13] + 1216);
			if (v14 >= 0x100u)
				v15 = byte_140A47D70[((unsigned __int64)v14 >> 7) + 256];
			else
				v15 = byte_140A47D70[v14];
			++* (_WORD*)(a1 + 4i64 * v15 + 2480);
			v16 = *(_DWORD*)(a1 + 136);
			v17 = *(_DWORD*)(a1 + 5876) == *(_DWORD*)(a1 + 5872) - 1;
			*(_DWORD*)(a1 + 156) -= v16;
			if (v16 > *(_DWORD*)(a1 + 168) || *(_DWORD*)(a1 + 156) < 3u)
			{
				*(_DWORD*)(a1 + 148) += v16;
				v24 = *(unsigned int*)(a1 + 148);
				v25 = *(_QWORD*)(a1 + 80);
				v26 = *(_DWORD*)(a1 + 128);
				*(_DWORD*)(a1 + 136) = 0;
				v27 = *(unsigned __int8*)(v24 + v25);
				*(_DWORD*)(a1 + 112) = v27;
				*(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 124) & (*(unsigned __int8*)((unsigned int)(v24 + 1) + v25) ^ (v27 << v26));
				goto LABEL_22;
			}
			*(_DWORD*)(a1 + 136) = v16 - 1;
			do
			{
				v18 = ++ * (_DWORD*)(a1 + 148);
				v19 = *(_QWORD*)(a1 + 104);
				v20 = *(_QWORD*)(a1 + 96);
				v21 = *(_DWORD*)(a1 + 124) & ((*(_DWORD*)(a1 + 112) << *(_DWORD*)(a1 + 128)) ^ (unsigned int)*(unsigned __int8*)(v18 + 2 + *(_QWORD*)(a1 + 80)));
				v22 = *(_DWORD*)(a1 + 76) & v18;
				*(_DWORD*)(a1 + 112) = v21;
				*(_WORD*)(v20 + 2 * v22) = *(_WORD*)(v19 + 2 * v21);
				*(_WORD*)(*(_QWORD*)(a1 + 104) + 2i64 * *(unsigned int*)(a1 + 112)) = *(_WORD*)(a1 + 148);
				v23 = (*(_DWORD*)(a1 + 136))-- == 1;
			} while (!v23);
		}
		++* (_DWORD*)(a1 + 148);
	LABEL_22:
		if (v17)
		{
			v29 = *(_DWORD*)(a1 + 132);
			if (v29 < 0)
				v30 = 0i64;
			else
				v30 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v29);
			sub_1401CCB30(a1, v30, *(_DWORD*)(a1 + 148) - v29, 0);
			v31 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
			v32 = *(_QWORD*)(v31 + 40);
			sub_1401CD200(v32);
			v33 = *(_DWORD*)(v32 + 40);
			if (v33 > *(_DWORD*)(v31 + 24))
				v33 = *(_DWORD*)(v31 + 24);
			if (v33)
			{
				sub_1407DB590(*(int**)(v31 + 16), *(int**)(v32 + 32), v33);
				*(_QWORD*)(v31 + 16) += v33;
				*(_QWORD*)(v32 + 32) += v33;
				*(_DWORD*)(v31 + 28) += v33;
				*(_DWORD*)(v31 + 24) -= v33;
				v23 = *(_DWORD*)(v32 + 40) == v33;
				*(_DWORD*)(v32 + 40) -= v33;
				if (v23)
					*(_QWORD*)(v32 + 32) = *(_QWORD*)(v32 + 16);
			}
			if (!*(_DWORD*)(*(_QWORD*)a1 + 24i64))
				return 0i64;
		}
	}
	v35 = *(_DWORD*)(a1 + 148);
	v36 = 2;
	if (v35 < 2)
		v36 = *(_DWORD*)(a1 + 148);
	*(_DWORD*)(a1 + 5900) = v36;
	if (a2 == 4)
	{
		v37 = *(_DWORD*)(a1 + 132);
		if (v37 < 0)
			v38 = 0i64;
		else
			v38 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v37);
		sub_1401CCB30(a1, v38, v35 - v37, 1);
		v39 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
		sub_1401A9A10(v39);
		LOBYTE(v4) = *(_DWORD*)(*(_QWORD*)a1 + 24i64) != 0;
		return (unsigned int)((_DWORD)v4 + 2);
	}
	else
	{
		if (*(_DWORD*)(a1 + 5876))
		{
			v40 = *(_DWORD*)(a1 + 132);
			if (v40 >= 0)
				v4 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v40);
			sub_1401CCB30(a1, v4, v35 - v40, 0);
			v41 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
			sub_1401A9A10(v41);
			if (!*(_DWORD*)(*(_QWORD*)a1 + 24i64))
				return 0i64;
		}
		return 1i64;
	}
}
// 140A47D70: using guessed type unsigned __int8 byte_140A47D70[512];
// 140A47F70: using guessed type unsigned __int8 byte_140A47F70[256];

