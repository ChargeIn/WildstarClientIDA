//----- (00000001401E23C0) ----------------------------------------------------
__int64 __fastcall sub_1401E23C0(_QWORD* a1)
{
	__int64 v1; // r14
	_QWORD* v3; // rdi
	__int64 v4; // rbp
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rbx
	__int64 v12; // rbp
	_QWORD* v13; // rdi
	__int64 v14; // rcx
	void(__fastcall * **v15)(_QWORD); // rcx
	__int64 v16; // rax
	int v17; // edx
	int v18; // r9d
	int v19; // eax
	int v20; // eax
	int v21; // eax
	int v22; // ebp
	char* v23; // r15
	unsigned int v24; // edi
	_DWORD* v25; // rbx
	char* v26; // r14
	__int64 v27; // rdx
	int v28; // r8d
	int v29; // eax
	__int64 v30; // rcx
	__int64 v32; // [rsp+60h] [rbp+8h] BYREF
	__int64 v33; // [rsp+68h] [rbp+10h] BYREF

	v1 = 72i64;
	v3 = a1 + 41;
	v4 = 72i64;
	do
	{
		v5 = (_QWORD*)v3[144];
		if (v5 && ((_QWORD*)*v3 != v5 || a1[36] != a1[38]))
		{
			v6 = v5[6];
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
			v7 = v5[7];
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 936i64))(v7);
			v8 = v5[9];
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 936i64))(v8);
			v9 = v5[10];
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 936i64))(v9);
			v10 = v5[11];
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 936i64))(v10);
		}
		++v3;
		--v4;
	} while (v4);
	v11 = a1 + 185;
	v12 = 72i64;
	v13 = a1 + 185;
	do
	{
		v14 = *(v13 - 144);
		if (v14 && (v14 != *v13 || a1[36] != a1[38]))
			sub_1401E7940(v14);
		++v13;
		--v12;
	} while (v12);
	do
	{
		v15 = (void(__fastcall***)(_QWORD)) * (v11 - 144);
		if ((void(__fastcall***)(_QWORD)) * v11 != v15)
		{
			if (v15)
				(**v15)(v15);
			if (*v11)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
			*v11 = *(v11 - 144);
		}
		++v11;
		--v1;
	} while (v1);
	v32 = 0i64;
	v33 = 0i64;
	v16 = a1[61];
	if (v16)
	{
		v17 = 36;
		v18 = *(_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64);
		switch (v18)
		{
		case 44:
		case 47:
		case 51:
		case 52:
		case 58:
		case 59:
			v19 = 36;
			break;
		case 45:
			v19 = 35;
			break;
		case 46:
			v19 = 4;
			break;
		case 49:
		case 60:
		case 204:
			v19 = 37;
			break;
		case 50:
		case 78:
			v19 = 41;
			break;
		case 79:
			v19 = 165;
			break;
		default:
			v19 = 0;
			break;
		}
		LODWORD(v32) = v19;
		switch (v18)
		{
		case 44:
		case 47:
		case 51:
		case 52:
		case 58:
		case 59:
			break;
		case 45:
			v17 = 34;
			break;
		case 46:
			v17 = 4;
			break;
		case 49:
		case 60:
		case 204:
			v17 = 37;
			break;
		case 50:
		case 78:
			v17 = 41;
			break;
		case 79:
			v17 = 164;
			break;
		default:
			v17 = 0;
			break;
		}
		v20 = 3;
		if (v18 == 348)
			v20 = 204;
		HIDWORD(v32) = v17;
		LODWORD(v33) = v20;
		v21 = 2;
		if (v18 == 348)
			v21 = 203;
		HIDWORD(v33) = v21;
	}
	v22 = 0;
	v23 = (char*)((char*)&v32 - (char*)a1);
	v24 = 0;
	v25 = a1 + 395;
	v26 = (char*)((char*)&v33 - (char*)a1);
	do
	{
		v27 = *(unsigned int*)((char*)v25 + (_QWORD)v23 - 3160);
		v28 = 0;
		switch ((int)v27)
		{
		case 4:
		case 36:
		case 37:
		case 38:
		case 41:
			v28 = 4;
			break;
		case 5:
		case 32:
		case 34:
		case 164:
			v28 = 1;
			break;
		case 6:
		case 33:
		case 35:
		case 165:
			v28 = 2;
			break;
		default:
			break;
		}
		if ((v28 & v22) != 0)
		{
			v27 = 0i64;
			*(_DWORD*)((char*)v25 + (_QWORD)v23 - 3160) = 0;
		}
		else
		{
			v22 |= v28;
		}
		if (*(v25 - 2) != (_DWORD)v27 || *v25 != *(_DWORD*)((char*)v25 + (_QWORD)v26 - 3160))
		{
			v29 = *(_DWORD*)((char*)v25 + (_QWORD)v26 - 3160);
			*(v25 - 2) = v27;
			*v25 = v29;
			v30 = a1[61];
			if (v30)
			{
				if ((v24 & 1) != 0)
					sub_1401E7C40(v30, v27);
				else
					sub_1401E7A30(v30, v27);
			}
		}
		++v24;
		++v25;
	} while (v24 < 2);
	return 0i64;
}

