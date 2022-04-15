//----- (0000000140566AD0) ----------------------------------------------------
__m128 __fastcall sub_140566AD0(__int64 a1, __int64 a2, float a3, __int64 a4, float* a5)
{
	float* v5; // rdi
	__int128 v8; // xmm6
	__int64 v9; // rbp
	__int64 v10; // r15
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	int v14; // ebx
	int v15; // ebx
	int v16; // ebx
	int v17; // ebx

	v5 = a5;
	v8 = 0i64;
	v9 = 4i64;
	v10 = a4 - (_QWORD)a5;
	do
	{
		switch (*(_DWORD*)((char*)v5 + v10))
		{
		case 7:
			if (a2)
			{
				v11 = *(_QWORD*)a2;
				v12 = a2;
				goto LABEL_5;
			}
			break;
		case 8:
			if (a1)
			{
				v11 = *(_QWORD*)a1;
				v12 = a1;
			LABEL_5:
				v13 = (*(__int64(__fastcall**)(__int64))(v11 + 72))(v12);
				goto LABEL_6;
			}
			break;
		case 0xA:
			if (a1)
			{
				v13 = sub_1403B5030(a1);
				goto LABEL_6;
			}
			break;
		case 0xE:
			if (a1)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
				goto LABEL_6;
			}
			break;
		case 0xF:
			if (a2)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
				goto LABEL_6;
			}
			break;
		case 0x10:
			if (a1)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
				goto LABEL_6;
			}
			break;
		case 0x11:
			if (a2)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2);
				goto LABEL_6;
			}
			break;
		case 0x12:
			*(float*)&v8 = *(float*)&v8 + (float)(a3 * *v5);
			break;
		case 0x13:
			if (a2)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
				goto LABEL_6;
			}
			break;
		case 0x15:
			if (a2)
			{
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
				v13 = v14 - (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
				goto LABEL_6;
			}
			break;
		case 0x16:
			if (a2)
			{
				v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2);
				v13 = v15 - (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
				goto LABEL_6;
			}
			break;
		case 0x17:
			if (a1)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
				goto LABEL_6;
			}
			break;
		case 0x19:
			if (a1)
			{
				v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
				v13 = v16 - (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
			LABEL_6:
				*(float*)&v8 = *(float*)&v8 + (float)((float)v13 * *v5);
			}
			break;
		case 0x1A:
			if (a1)
			{
				v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
				*(float*)&v8 = *(float*)&v8
					+ (float)((float)(int)(v17 - (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1))
						* *v5);
			}
			break;
		default:
			break;
		}
		++v5;
		--v9;
	} while (v9);
	return (__m128)v8;
}

