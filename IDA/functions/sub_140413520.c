//----- (0000000140413520) ----------------------------------------------------
void __fastcall sub_140413520(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int128 v6; // xmm0
	__int64* v7; // rdx
	int* v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int64 v18; // rdx
	unsigned __int64 v19; // rdi
	_DWORD* v20; // rcx
	int v21; // eax
	__int64 v22; // rax
	unsigned int v23; // r10d
	int v24; // eax
	unsigned int v25; // edx
	int v26; // ecx
	int v27; // r8d
	int v28; // r9d
	int v29; // r11d
	int v30; // esi
	int v31; // r14d
	int v32; // r15d
	__int64* v33; // r8
	int v34; // eax
	_QWORD* v35; // rax
	int* v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // r11
	unsigned __int64 v39; // r10
	_WORD* v40; // r9
	__int64 v41; // r11
	__int64 v42[7]; // [rsp+20h] [rbp-E0h] BYREF
	int v43; // [rsp+58h] [rbp-A8h]
	__int64 v44; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v45; // [rsp+1B8h] [rbp+B8h]
	__int64 v46; // [rsp+1C0h] [rbp+C0h]
	__int64 v47; // [rsp+1C8h] [rbp+C8h]

	sub_140412470(a1, *(_QWORD*)(*(_QWORD*)a1 + 64i64), 0, 2);
	v2 = *(_QWORD*)a1;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 72i64);
	if (!v3)
		v3 = *(_QWORD*)(v2 + 64) + 8i64;
	if (*(int*)(a1 + 1176) <= 2 && v3)
	{
		v4 = a1 + 32;
		if ((((unsigned __int8)(a1 + 32) | (unsigned __int8)v3) & 0xF) != 0)
		{
			sub_1407DB590((int*)v4, (int*)v3, 0x138ui64);
		}
		else
		{
			v5 = 2i64;
			do
			{
				v6 = *(_OWORD*)v3;
				v4 += 128i64;
				v3 += 128i64;
				*(_OWORD*)(v4 - 128) = v6;
				*(_OWORD*)(v4 - 112) = *(_OWORD*)(v3 - 112);
				*(_OWORD*)(v4 - 96) = *(_OWORD*)(v3 - 96);
				*(_OWORD*)(v4 - 80) = *(_OWORD*)(v3 - 80);
				*(_OWORD*)(v4 - 64) = *(_OWORD*)(v3 - 64);
				*(_OWORD*)(v4 - 48) = *(_OWORD*)(v3 - 48);
				*(_OWORD*)(v4 - 32) = *(_OWORD*)(v3 - 32);
				*(_OWORD*)(v4 - 16) = *(_OWORD*)(v3 - 16);
				--v5;
			} while (v5);
			*(_OWORD*)v4 = *(_OWORD*)v3;
			*(_OWORD*)(v4 + 16) = *(_OWORD*)(v3 + 16);
			*(_OWORD*)(v4 + 32) = *(_OWORD*)(v3 + 32);
			*(_QWORD*)(v4 + 48) = *(_QWORD*)(v3 + 48);
		}
		*(_DWORD*)(a1 + 1176) = 2;
	}
	sub_1407E4830((int*)v42, 0i64, 0x190ui64);
	sub_1407E4830((int*)v42, 0i64, 0x90ui64);
	v42[0] = 0xC5000000C5i64;
	v42[1] = 0xC5000000C5i64;
	v42[2] = 0xC5000000C5i64;
	v42[3] = 0xC5000000C5i64;
	v42[4] = 0xC5000000C5i64;
	v42[5] = 0xC5000000C5i64;
	v42[6] = 0xC5000000C5i64;
	v43 = 197;
	sub_14041FBA0(v2, (int*)v42);
	if (*(int*)(a1 + 1180) <= 2)
	{
		v7 = v42;
		v8 = (int*)(a1 + 344);
		if ((((unsigned __int8)(a1 + 88) | (unsigned __int8)v42) & 0xF) != 0)
		{
			sub_1407DB590(v8, (int*)v42, 0x190ui64);
		}
		else
		{
			v9 = 3i64;
			do
			{
				v10 = *(_OWORD*)v7;
				v11 = *((_OWORD*)v7 + 1);
				v8 += 32;
				v7 += 16;
				*((_OWORD*)v8 - 8) = v10;
				v12 = *((_OWORD*)v7 - 6);
				*((_OWORD*)v8 - 7) = v11;
				v13 = *((_OWORD*)v7 - 5);
				*((_OWORD*)v8 - 6) = v12;
				v14 = *((_OWORD*)v7 - 4);
				*((_OWORD*)v8 - 5) = v13;
				v15 = *((_OWORD*)v7 - 3);
				*((_OWORD*)v8 - 4) = v14;
				v16 = *((_OWORD*)v7 - 2);
				*((_OWORD*)v8 - 3) = v15;
				v17 = *((_OWORD*)v7 - 1);
				*((_OWORD*)v8 - 2) = v16;
				*((_OWORD*)v8 - 1) = v17;
				--v9;
			} while (v9);
			*(_OWORD*)v8 = *(_OWORD*)v7;
		}
		*(_DWORD*)(a1 + 1180) = 2;
	}
	v18 = *(_QWORD*)a1;
	v19 = 0i64;
	v20 = *(_DWORD**)(*(_QWORD*)a1 + 96i64);
	if (*(int*)(a1 + 1188) <= 2)
	{
		if (v20)
		{
			*(_DWORD*)(a1 + 744) = *v20;
			*(_DWORD*)(a1 + 748) = v20[1];
			*(_DWORD*)(a1 + 752) = v20[2];
			v21 = v20[3];
			*(_DWORD*)(a1 + 1188) = 2;
			*(_DWORD*)(a1 + 756) = v21;
			if (v18)
			{
				v22 = *(_QWORD*)(v18 + 88);
				if (v22)
				{
					if (*(int*)(v22 + 8) <= 0)
					{
						*(_QWORD*)(a1 + 744) = 0i64;
						*(_QWORD*)(a1 + 752) = 0i64;
						*(_DWORD*)(a1 + 1188) = 0;
					}
				}
			}
		}
	}
	v23 = *(_DWORD*)(a1 + 336);
	v24 = 0;
	v25 = 0;
	v44 = 0i64;
	v26 = 0;
	v27 = 0;
	v45 = 0i64;
	v28 = 0;
	v29 = 0;
	v46 = 0i64;
	v30 = 0;
	v31 = 0;
	v47 = 0i64;
	v32 = 0;
	if (v23)
	{
		v33 = &v44;
		do
		{
			if (v25 >= 8)
				v34 = 0;
			else
				v34 = *(_DWORD*)((char*)v33 + 188i64 - (_QWORD)&v44 + *(_QWORD*)a1);
			++v25;
			*(_DWORD*)v33 = v34;
			v33 = (__int64*)((char*)v33 + 4);
		} while (v25 < v23);
		v32 = HIDWORD(v47);
		v31 = v47;
		v30 = HIDWORD(v46);
		v29 = v46;
		v28 = HIDWORD(v45);
		v27 = v45;
		v26 = HIDWORD(v44);
		v24 = v44;
	}
	if (*(int*)(a1 + 1192) <= 2)
	{
		*(_QWORD*)(a1 + 1144) = 0i64;
		*(_QWORD*)(a1 + 1152) = 0i64;
		*(_QWORD*)(a1 + 1160) = 0i64;
		*(_QWORD*)(a1 + 1168) = 0i64;
		*(_DWORD*)(a1 + 1144) = v24;
		*(_DWORD*)(a1 + 1148) = v26;
		*(_DWORD*)(a1 + 1152) = v27;
		*(_DWORD*)(a1 + 1156) = v28;
		*(_DWORD*)(a1 + 1160) = v29;
		*(_DWORD*)(a1 + 1164) = v30;
		*(_DWORD*)(a1 + 1168) = v31;
		*(_DWORD*)(a1 + 1172) = v32;
		*(_DWORD*)(a1 + 1192) = 2;
	}
	v35 = sub_14056AD30(*(_QWORD*)a1, &v44);
	if (*(int*)(a1 + 1196) <= 2)
	{
		v36 = (int*)v35[1];
		v37 = (__int64)(v35[2] - (_QWORD)v36) >> 1;
		if (v37)
		{
			v38 = *(_QWORD*)(a1 + 768);
			v39 = (*(_QWORD*)(a1 + 776) - v38) >> 1;
			if (v39 == v37 && v39)
			{
				v40 = (_WORD*)v35[1];
				v41 = v38 - (_QWORD)v36;
				do
				{
					if (*(_WORD*)((char*)v40 + v41) != *v40)
						break;
					++v19;
					++v40;
				} while (v19 < v39);
			}
			if (v35 != (_QWORD*)(a1 + 760))
				sub_14001C480(a1 + 760, v36, (int*)v35[2]);
			*(_DWORD*)(a1 + 1196) = 2;
		}
	}
	if (v45)
		sub_14018B900(v45, 0);
}
// 14041379D: conditional instruction was optimized away because rax.8!=0

