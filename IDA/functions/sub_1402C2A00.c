//----- (00000001402C2A00) ----------------------------------------------------
void __fastcall sub_1402C2A00(__int64 a1, unsigned __int64 a2, int* a3, unsigned __int64 a4, int a5, char a6)
{
	int v8; // edx
	unsigned __int64 v9; // r10
	__int64* v10; // rax
	unsigned __int64 v11; // r9
	int v12; // eax
	__int16 v13; // dx
	unsigned __int64 v14; // r10
	__int64* v15; // rax
	unsigned __int64 v16; // r9
	__int16 v17; // ax
	unsigned __int64 v18; // r10
	__int64* v19; // rax
	unsigned __int64 v20; // r9
	unsigned __int64 v21; // rdx
	int v22; // eax
	int v23; // r9d
	unsigned __int64 v24; // r10
	__int64* v25; // rax
	unsigned __int64 v26; // r10
	unsigned __int64 v27; // rdx
	int v28; // eax
	unsigned __int64 v29; // r10
	__int64* v30; // rax
	unsigned __int64 v31; // r10
	unsigned __int64 v32; // rdx
	__int16 v33; // ax
	unsigned __int64 v34; // r10
	__int64* v35; // rax
	unsigned __int64 v36; // r10
	unsigned __int64 v37; // rdx
	__int16 v38; // ax
	__int64* v39; // r9
	unsigned __int64 v40; // [rsp+38h] [rbp+10h] BYREF
	unsigned __int64 v41; // [rsp+48h] [rbp+20h] BYREF

	v41 = a4;
	v40 = a2;
	if ((a6 & 1) != 0)
	{
		switch (a5)
		{
		case 1:
		case 2:
		case 3:
		case 4:
			if (a5 == 2)
			{
				v8 = 1065353216;
			}
			else
			{
				v8 = -1;
				if (a5 == 4)
					v8 = 0x7FFFFFFF;
			}
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v9 = ((a2 - 1) >> 4) + 1;
					do
					{
						*(_DWORD*)(a1 + 12) = v8;
						a1 += 16i64;
						--v9;
					} while (v9);
				}
			}
			else
			{
				v10 = (__int64*)&v41;
				if (a4 >= a2)
					v10 = (__int64*)&v40;
				if (*v10)
				{
					v11 = ((unsigned __int64)(*v10 - 1) >> 4) + 1;
					do
					{
						v12 = *a3;
						a1 += 16i64;
						a3 += 4;
						*(_DWORD*)(a1 - 16) = v12;
						*(_DWORD*)(a1 - 12) = *(a3 - 3);
						*(_DWORD*)(a1 - 8) = *(a3 - 2);
						*(_DWORD*)(a1 - 4) = v8;
						--v11;
					} while (v11);
				}
			}
			break;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (a5 == 10)
			{
				v13 = 15360;
			}
			else
			{
				v13 = -1;
				if ((unsigned int)(a5 - 13) <= 1)
					v13 = 0x7FFF;
			}
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v14 = ((a2 - 1) >> 3) + 1;
					do
					{
						*(_WORD*)(a1 + 6) = v13;
						a1 += 8i64;
						--v14;
					} while (v14);
				}
			}
			else
			{
				v15 = (__int64*)&v41;
				if (a4 >= a2)
					v15 = (__int64*)&v40;
				if (*v15)
				{
					v16 = ((unsigned __int64)(*v15 - 1) >> 3) + 1;
					do
					{
						v17 = *(_WORD*)a3;
						a1 += 8i64;
						a3 += 2;
						*(_WORD*)(a1 - 8) = v17;
						*(_WORD*)(a1 - 6) = *((_WORD*)a3 - 3);
						*(_WORD*)(a1 - 4) = *((_WORD*)a3 - 2);
						*(_WORD*)(a1 - 2) = v13;
						--v16;
					} while (v16);
				}
			}
			break;
		case 23:
		case 24:
		case 25:
		case 89:
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v18 = ((a2 - 1) >> 2) + 1;
					do
					{
						*(_DWORD*)a1 |= 0xC0000000;
						a1 += 4i64;
						--v18;
					} while (v18);
				}
			}
			else
			{
				v19 = (__int64*)&v41;
				if (a4 >= a2)
					v19 = (__int64*)&v40;
				v20 = *v19;
				if (*v19)
				{
					v21 = 0i64;
					do
					{
						v22 = a3[v21 / 4];
						v21 += 4i64;
						*(_DWORD*)(v21 + a1 - 4) = v22 | 0xC0000000;
					} while (v21 < v20);
				}
			}
			break;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 87:
		case 90:
		case 91:
			v23 = 2130706432;
			if ((unsigned int)(a5 - 31) > 1)
				v23 = -16777216;
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v24 = ((a2 - 1) >> 2) + 1;
					do
					{
						*(_DWORD*)a1 &= 0xFFFFFFu;
						*(_DWORD*)a1 |= v23;
						a1 += 4i64;
						--v24;
					} while (v24);
				}
			}
			else
			{
				v25 = (__int64*)&v41;
				if (a4 >= a2)
					v25 = (__int64*)&v40;
				v26 = *v25;
				if (*v25)
				{
					v27 = 0i64;
					do
					{
						v28 = a3[v27 / 4];
						v27 += 4i64;
						*(_DWORD*)(v27 + a1 - 4) = v23 | v28 & 0xFFFFFF;
					} while (v27 < v26);
				}
			}
			break;
		case 65:
			sub_1407E4830((int*)a1, 255i64, a2);
			break;
		case 86:
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v29 = ((a2 - 1) >> 1) + 1;
					do
					{
						*(_WORD*)a1 |= 0x8000u;
						a1 += 2i64;
						--v29;
					} while (v29);
				}
			}
			else
			{
				v30 = (__int64*)&v41;
				if (a4 >= a2)
					v30 = (__int64*)&v40;
				v31 = *v30;
				if (*v30)
				{
					v32 = 0i64;
					do
					{
						v33 = *(_WORD*)((char*)a3 + v32);
						v32 += 2i64;
						*(_WORD*)(v32 + a1 - 2) = v33 | 0x8000;
					} while (v32 < v31);
				}
			}
			break;
		case 115:
			if ((int*)a1 == a3)
			{
				if (a2)
				{
					v34 = ((a2 - 1) >> 1) + 1;
					do
					{
						*(_WORD*)a1 |= 0xF000u;
						a1 += 2i64;
						--v34;
					} while (v34);
				}
			}
			else
			{
				v35 = (__int64*)&v41;
				if (a4 >= a2)
					v35 = (__int64*)&v40;
				v36 = *v35;
				if (*v35)
				{
					v37 = 0i64;
					do
					{
						v38 = *(_WORD*)((char*)a3 + v37);
						v37 += 2i64;
						*(_WORD*)(v37 + a1 - 2) = v38 | 0xF000;
					} while (v37 < v36);
				}
			}
			break;
		default:
			goto LABEL_80;
		}
	}
	else
	{
	LABEL_80:
		if ((int*)a1 != a3)
		{
			v39 = (__int64*)&v41;
			if (a4 >= a2)
				v39 = (__int64*)&v40;
			sub_1407E15B8((int*)a1, a2, a3, *v39);
		}
	}
}

