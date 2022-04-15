#include "../winhttp.h"

//----- (00000001401AB0A0) ----------------------------------------------------
__int64 __fastcall sub_1401AB0A0(__int64 a1, int a2)
{
	unsigned __int8* v2; // rdi
	int v5; // ebp
	unsigned int v6; // eax
	unsigned int v7; // r8d
	unsigned int v8; // r9d
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // r9
	unsigned int v13; // ecx
	int v14; // eax
	unsigned int v15; // eax
	unsigned int v16; // eax
	__int16 v17; // r8
	unsigned int v18; // r11d
	unsigned __int16 v19; // r8
	__int64 v20; // rax
	int v21; // ecx
	int v22; // ecx
	BOOL v23; // esi
	unsigned int v24; // r10d
	__int64 v25; // rdx
	__int64 v26; // rcx
	__int64 v27; // r9
	__int64 v28; // r8
	int v30; // r8d
	int v31; // eax
	unsigned __int8* v32; // rdx
	__int64 v33; // rcx
	__int64 v35; // rdx
	int v36; // eax
	unsigned __int8* v37; // rdx
	__int64 v38; // rcx
	__int64 v39; // rdx
	unsigned int v40; // eax
	int v41; // ecx
	unsigned __int8* v42; // rdx
	__int64 v43; // rcx
	int v44; // ecx
	__int64 v45; // rcx

	v2 = 0i64;
	v5 = 2;
	while (1)
	{
		v6 = *(_DWORD*)(a1 + 156);
		if (v6 < 0x106)
		{
			sub_1401AA730(a1);
			v6 = *(_DWORD*)(a1 + 156);
			if (v6 < 0x106 && !a2)
				return 0i64;
			if (!v6)
				break;
		}
		v7 = 0;
		if (v6 >= 3)
		{
			v8 = *(_DWORD*)(a1 + 148);
			v9 = *(_QWORD*)(a1 + 104);
			v10 = *(_QWORD*)(a1 + 96);
			v11 = *(_DWORD*)(a1 + 124) & ((*(_DWORD*)(a1 + 112) << *(_DWORD*)(a1 + 128)) ^ (unsigned int)*(unsigned __int8*)(v8 + 2 + *(_QWORD*)(a1 + 80)));
			v12 = *(_DWORD*)(a1 + 76) & v8;
			*(_DWORD*)(a1 + 112) = v11;
			*(_WORD*)(v10 + 2 * v12) = *(_WORD*)(v9 + 2 * v11);
			v7 = *(unsigned __int16*)(*(_QWORD*)(a1 + 96)
				+ 2i64 * (unsigned int)(*(_DWORD*)(a1 + 76) & *(_DWORD*)(a1 + 148)));
			*(_WORD*)(*(_QWORD*)(a1 + 104) + 2i64 * *(unsigned int*)(a1 + 112)) = *(_WORD*)(a1 + 148);
		}
		v13 = *(_DWORD*)(a1 + 136);
		v14 = *(_DWORD*)(a1 + 152);
		*(_DWORD*)(a1 + 136) = 2;
		*(_DWORD*)(a1 + 160) = v13;
		*(_DWORD*)(a1 + 140) = v14;
		if (v7)
		{
			if (v13 < *(_DWORD*)(a1 + 168) && *(_DWORD*)(a1 + 148) - v7 <= *(_DWORD*)(a1 + 68) - 262)
			{
				v15 = sub_1401AA580(a1, v7);
				*(_DWORD*)(a1 + 136) = v15;
				if (v15 <= 5
					&& (*(_DWORD*)(a1 + 176) == 1
						|| v15 == 3 && (unsigned int)(*(_DWORD*)(a1 + 148) - *(_DWORD*)(a1 + 152)) > 0x1000))
				{
					*(_DWORD*)(a1 + 136) = 2;
				}
			}
		}
		v16 = *(_DWORD*)(a1 + 160);
		if (v16 < 3 || *(_DWORD*)(a1 + 136) > v16)
		{
			if (*(_DWORD*)(a1 + 144))
			{
				v35 = *(unsigned __int8*)((unsigned int)(*(_DWORD*)(a1 + 148) - 1) + *(_QWORD*)(a1 + 80));
				*(_WORD*)(*(_QWORD*)(a1 + 5880) + 2i64 * *(unsigned int*)(a1 + 5876)) = 0;
				*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 5876))++ + *(_QWORD*)(a1 + 5864)) = v35;
				++* (_WORD*)(a1 + 4 * v35 + 188);
				if (*(_DWORD*)(a1 + 5876) == *(_DWORD*)(a1 + 5872) - 1)
				{
					v36 = *(_DWORD*)(a1 + 132);
					if (v36 < 0)
						v37 = 0i64;
					else
						v37 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v36);
					sub_1401CCB30(a1, v37, *(_DWORD*)(a1 + 148) - v36, 0);
					v38 = *(_QWORD*)a1;
					*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
					sub_1401A9A10(v38);
				}
				++* (_DWORD*)(a1 + 148);
				--* (_DWORD*)(a1 + 156);
				goto LABEL_30;
			}
			++* (_DWORD*)(a1 + 148);
			--* (_DWORD*)(a1 + 156);
			*(_DWORD*)(a1 + 144) = 1;
		}
		else
		{
			v17 = *(_WORD*)(a1 + 148) - *(_WORD*)(a1 + 140) - 1;
			v18 = *(_DWORD*)(a1 + 148) - 3 + *(_DWORD*)(a1 + 156);
			*(_WORD*)(*(_QWORD*)(a1 + 5880) + 2i64 * *(unsigned int*)(a1 + 5876)) = v17;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 5876))++ + *(_QWORD*)(a1 + 5864)) = v16 - 3;
			v19 = v17 - 1;
			v20 = byte_140A47F70[(unsigned __int8)(v16 - 3)];
			++* (_WORD*)(a1 + 4 * v20 + 1216);
			if (v19 >= 0x100u)
				v21 = byte_140A47D70[((unsigned __int64)v19 >> 7) + 256];
			else
				v21 = byte_140A47D70[v19];
			++* (_WORD*)(a1 + 4i64 * v21 + 2480);
			v22 = *(_DWORD*)(a1 + 160);
			v23 = *(_DWORD*)(a1 + 5876) == *(_DWORD*)(a1 + 5872) - 1;
			*(_DWORD*)(a1 + 156) += 1 - v22;
			*(_DWORD*)(a1 + 160) = v22 - 2;
			do
			{
				v24 = ++ * (_DWORD*)(a1 + 148);
				if (v24 <= v18)
				{
					v25 = *(_QWORD*)(a1 + 104);
					v26 = *(_QWORD*)(a1 + 96);
					v27 = *(_DWORD*)(a1 + 124) & ((*(_DWORD*)(a1 + 112) << *(_DWORD*)(a1 + 128)) ^ (unsigned int)*(unsigned __int8*)(v24 + 2 + *(_QWORD*)(a1 + 80)));
					v28 = v24 & *(_DWORD*)(a1 + 76);
					*(_DWORD*)(a1 + 112) = v27;
					*(_WORD*)(v26 + 2 * v28) = *(_WORD*)(v25 + 2 * v27);
					*(_WORD*)(*(_QWORD*)(a1 + 104) + 2i64 * *(unsigned int*)(a1 + 112)) = *(_WORD*)(a1 + 148);
				}
			} while ((*(_DWORD*)(a1 + 160))-- != 1);
			v30 = ++ * (_DWORD*)(a1 + 148);
			*(_DWORD*)(a1 + 144) = 0;
			*(_DWORD*)(a1 + 136) = 2;
			if (v23)
			{
				v31 = *(_DWORD*)(a1 + 132);
				if (v31 < 0)
					v32 = 0i64;
				else
					v32 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v31);
				sub_1401CCB30(a1, v32, v30 - v31, 0);
				v33 = *(_QWORD*)a1;
				*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
				sub_1401A9A10(v33);
			LABEL_30:
				if (!*(_DWORD*)(*(_QWORD*)a1 + 24i64))
					return 0i64;
			}
		}
	}
	if (*(_DWORD*)(a1 + 144))
	{
		v39 = *(unsigned __int8*)((unsigned int)(*(_DWORD*)(a1 + 148) - 1) + *(_QWORD*)(a1 + 80));
		*(_WORD*)(*(_QWORD*)(a1 + 5880) + 2i64 * *(unsigned int*)(a1 + 5876)) = 0;
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 5876))++ + *(_QWORD*)(a1 + 5864)) = v39;
		++* (_WORD*)(a1 + 4 * v39 + 188);
		*(_DWORD*)(a1 + 144) = 0;
	}
	v40 = *(_DWORD*)(a1 + 148);
	if (v40 < 2)
		v5 = *(_DWORD*)(a1 + 148);
	*(_DWORD*)(a1 + 5900) = v5;
	if (a2 == 4)
	{
		v41 = *(_DWORD*)(a1 + 132);
		if (v41 < 0)
			v42 = 0i64;
		else
			v42 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v41);
		sub_1401CCB30(a1, v42, v40 - v41, 1);
		v43 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
		sub_1401A9A10(v43);
		LOBYTE(v2) = *(_DWORD*)(*(_QWORD*)a1 + 24i64) != 0;
		return (unsigned int)((_DWORD)v2 + 2);
	}
	else
	{
		if (*(_DWORD*)(a1 + 5876))
		{
			v44 = *(_DWORD*)(a1 + 132);
			if (v44 >= 0)
				v2 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v44);
			sub_1401CCB30(a1, v2, v40 - v44, 0);
			v45 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
			sub_1401A9A10(v45);
			if (!*(_DWORD*)(*(_QWORD*)a1 + 24i64))
				return 0i64;
		}
		return 1i64;
	}
}
// 140A47D70: using guessed type unsigned __int8 byte_140A47D70[512];
// 140A47F70: using guessed type unsigned __int8 byte_140A47F70[256];

