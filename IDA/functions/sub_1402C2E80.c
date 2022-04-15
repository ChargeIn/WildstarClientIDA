//----- (00000001402C2E80) ----------------------------------------------------
__int64 __fastcall sub_1402C2E80(int* a1, unsigned __int64 a2, int* a3, unsigned __int64 a4, int a5, char a6)
{
	int* v7; // r10
	__int64 result; // rax
	int v9; // ebx
	unsigned __int64 v10; // r8
	int v11; // r9d
	int v12; // ecx
	int v13; // edx
	unsigned int v14; // eax
	int v15; // ebx
	unsigned __int64 v16; // r9
	unsigned int v17; // eax
	int v18; // r11d
	int v19; // ecx
	int v20; // edx
	unsigned int v21; // eax
	int v22; // r11d
	unsigned __int64 v23; // r8
	int v24; // edx
	int v25; // r9d
	unsigned int v26; // ecx
	int v27; // ebx
	unsigned __int64 v28; // r9
	int v29; // ecx
	int v30; // edx
	int v31; // r11d
	unsigned int v32; // ecx
	__int64* v33; // r9
	unsigned __int64 v34; // [rsp+38h] [rbp+10h] BYREF
	unsigned __int64 v35; // [rsp+48h] [rbp+20h] BYREF

	v35 = a4;
	v34 = a2;
	v7 = a1;
	result = a5 - 23;
	switch (a5)
	{
	case 23:
	case 24:
	case 25:
	case 89:
		if ((a6 & 2) == 0)
			goto LABEL_37;
		if (a1 == a3)
		{
			if (a2)
			{
				v9 = a6 & 1;
				v10 = ((a2 - 1) >> 2) + 1;
				do
				{
					v11 = *v7 & 0xFFC00;
					v12 = ((unsigned int)*v7 >> 20) & 0x3FF;
					v13 = (*v7 & 0x3FF) << 20;
					if (v9)
						v14 = -1073741824;
					else
						v14 = *v7 & 0xC0000000;
					++v7;
					result = v12 | v13 | v11 | v14;
					*(v7 - 1) = result;
					--v10;
				} while (v10);
			}
		}
		else
		{
			result = (__int64)&v35;
			if (a4 >= a2)
				result = (__int64)&v34;
			if (*(_QWORD*)result)
			{
				v15 = a6 & 1;
				v16 = ((unsigned __int64)(*(_QWORD*)result - 1i64) >> 2) + 1;
				do
				{
					v17 = *a3++;
					v18 = v17 & 0xFFC00;
					v19 = (v17 >> 20) & 0x3FF;
					v20 = (v17 & 0x3FF) << 20;
					if (v15)
						v21 = -1073741824;
					else
						v21 = v17 & 0xC0000000;
					++v7;
					result = v19 | v20 | v18 | v21;
					*(v7 - 1) = result;
					--v16;
				} while (v16);
			}
		}
		break;
	case 27:
	case 28:
	case 29:
	case 87:
	case 88:
	case 90:
	case 91:
	case 92:
	case 93:
		if (a1 == a3)
		{
			if (a2)
			{
				v22 = a6 & 1;
				v23 = ((a2 - 1) >> 2) + 1;
				do
				{
					v24 = *v7 & 0xFF00;
					v25 = (unsigned __int8)BYTE2(*v7);
					result = (unsigned __int8)*v7 << 16;
					if (v22)
						v26 = -16777216;
					else
						v26 = *v7 & 0xFF000000;
					*v7++ = v25 | result | v24 | v26;
					--v23;
				} while (v23);
			}
		}
		else
		{
			result = (__int64)&v35;
			if (a4 >= a2)
				result = (__int64)&v34;
			if (*(_QWORD*)result)
			{
				v27 = a6 & 1;
				v28 = ((unsigned __int64)(*(_QWORD*)result - 1i64) >> 2) + 1;
				do
				{
					v29 = *a3++;
					v30 = v29 & 0xFF00;
					v31 = BYTE2(v29);
					result = (unsigned __int8)v29 << 16;
					if (v27)
						v32 = -16777216;
					else
						v32 = v29 & 0xFF000000;
					*v7++ = v31 | result | v30 | v32;
					--v28;
				} while (v28);
			}
		}
		break;
	default:
	LABEL_37:
		if (a1 != a3)
		{
			v33 = (__int64*)&v35;
			if (a4 >= a2)
				v33 = (__int64*)&v34;
			result = sub_1407E15B8(a1, a2, a3, *v33);
		}
		break;
	}
	return result;
}

