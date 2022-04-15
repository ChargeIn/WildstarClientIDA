//----- (000000014018D7D0) ----------------------------------------------------
__int64 __fastcall sub_14018D7D0(WCHAR* a1, __int64 a2, __int64* a3, _QWORD* a4)
{
	DWORD FileAttributesW; // eax
	int* v10; // rax
	__int64 v11; // r8
	_WORD* v12; // r9
	__int64 v13; // rbx
	int v14; // edi
	int* v15; // rax
	__int64 v16; // rdi
	int v17; // ebx
	int v18; // eax

	if (!a3)
		return 2147942487i64;
	FileAttributesW = GetFileAttributesW(a1);
	if (FileAttributesW == -1 || ((FileAttributesW >> 4) & 1) == 0)
	{
		v15 = sub_14018B280(112i64, 0);
		v16 = (__int64)v15;
		if (v15)
		{
			*(_QWORD*)v15 = off_140B5F280;
			*((_QWORD*)v15 + 1) = 0i64;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			*((_QWORD*)v15 + 4) = 0i64;
			*((_QWORD*)v15 + 5) = 0i64;
			*((_QWORD*)v15 + 12) = 0i64;
			*((_QWORD*)v15 + 11) = 0i64;
			v15[26] = 1;
			*((_QWORD*)v15 + 9) = 0i64;
			*((_QWORD*)v15 + 10) = 0i64;
		}
		else
		{
			v16 = 0i64;
		}
		*(_DWORD*)(v16 + 48) = 1;
		v17 = sub_14018D720((int*)a1, 1, a2, (__int64*)(v16 + 40), a4);
		if (v17 < 0
			|| ((*(_BYTE*)(v16 + 48) & 2) == 0 ? (v18 = sub_1401BF610(v16)) : (v18 = sub_1401BF6E0(v16)), v17 = v18, v18 < 0))
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
			return (unsigned int)v17;
		}
		else
		{
			*a3 = v16;
			return 0i64;
		}
	}
	else if (a4)
	{
		return 2147500037i64;
	}
	else
	{
		v10 = sub_14018B280(536i64, 0);
		v13 = (__int64)v10;
		if (v10)
		{
			*(_QWORD*)v10 = off_140B5F220;
			v10[132] = 1;
		}
		else
		{
			v13 = 0i64;
		}
		v14 = sub_1401BCBF0(v13, (__int64)a1, v11, v12);
		if (v14 >= 0)
		{
			*a3 = v13;
			return 0i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			return (unsigned int)v14;
		}
	}
}
// 14018D867: variable 'v11' is possibly undefined
// 14018D867: variable 'v12' is possibly undefined
// 140B5F220: using guessed type __int64 (__fastcall *off_140B5F220[43])();
// 140B5F280: using guessed type __int64 (__fastcall *off_140B5F280[31])();

