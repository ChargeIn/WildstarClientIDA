//----- (00000001405C5890) ----------------------------------------------------
int** __fastcall sub_1405C5890(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v8; // ecx
	__int64 v9; // rcx
	int* v10; // rax
	int* v11; // rbx
	__int64 v12; // rax
	int* v13; // rax
	__int64 v14; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (v8 = *(_DWORD*)(a4 + 32), (unsigned __int16)*(_DWORD*)a5 < (unsigned __int16)v8)
		|| *(_BYTE*)(a5 + 2) < *(_BYTE*)(a4 + 34)
		|| (v9 = (v8 & 0xFF000000) << 6, (int)((*(_DWORD*)a5 & 0xFF000000) << 6) < (int)v9))
	{
		v13 = sub_14018B280(56i64, 0);
		v11 = v13;
		if (v13 != (int*)-32i64)
		{
			v13[8] = *(_DWORD*)a5;
			v13[9] = *(_DWORD*)(a5 + 4);
			v13[10] = *(_DWORD*)(a5 + 8);
			v13[11] = *(_DWORD*)(a5 + 12);
			v13[12] = *(_DWORD*)(a5 + 16);
			v13[13] = *(_DWORD*)(a5 + 20);
		}
		*(_QWORD*)(a4 + 16) = v13;
		v14 = *(_QWORD*)(a1 + 8);
		if (a4 == v14)
		{
			*(_QWORD*)(v14 + 8) = v11;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v11;
		}
		else if (a4 == *(_QWORD*)(v14 + 16))
		{
			*(_QWORD*)(v14 + 16) = v11;
		}
	}
	else
	{
		v10 = sub_1405C5CC0(v9, (int*)a5);
		*(_QWORD*)(a4 + 24) = v10;
		v11 = v10;
		v12 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v12 + 24))
			*(_QWORD*)(v12 + 24) = v11;
	}
	*((_QWORD*)v11 + 1) = a4;
	*((_QWORD*)v11 + 2) = 0i64;
	*((_QWORD*)v11 + 3) = 0i64;
	sub_1400081C0((__int64)v11, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v11;
	return a2;
}

