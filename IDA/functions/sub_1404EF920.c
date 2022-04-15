//----- (00000001404EF920) ----------------------------------------------------
__int64 __fastcall sub_1404EF920(__int64 a1, FILETIME a2, unsigned __int16* a3, unsigned __int16* a4)
{
	signed int LastError; // eax
	bool v9; // sf
	int* v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 result; // rax
	struct _FILETIME LocalFileTime; // [rsp+20h] [rbp-78h] BYREF
	FILETIME FileTime; // [rsp+28h] [rbp-70h] BYREF
	char v23[8]; // [rsp+30h] [rbp-68h] BYREF
	int* v24; // [rsp+38h] [rbp-60h]
	int* v25; // [rsp+40h] [rbp-58h]
	int* v26; // [rsp+48h] [rbp-50h]
	struct _SYSTEMTIME SystemTime; // [rsp+50h] [rbp-48h] BYREF

	FileTime = a2;
	if (FileTimeToLocalFileTime(&FileTime, &LocalFileTime) && FileTimeToSystemTime(&LocalFileTime, &SystemTime))
		goto LABEL_6;
	LastError = GetLastError();
	v9 = LastError < 0;
	if (LastError > 0)
		v9 = 1;
	if (!v9)
	{
	LABEL_6:
		v10 = sub_14018B280(16i64, 0);
		v24 = v10;
		v25 = v10;
		v26 = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		if (sub_14018CF50(&SystemTime, (__int64)v23) < 0)
		{
			v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
			v13 = *(_QWORD*)(v12 + 16);
			*(_QWORD*)v13 = *v11;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
			*(_QWORD*)(v12 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a1 + 16), v13, a3, word_1409F0CC4);
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		}
		else
		{
			sub_1400FACC0(a1, a3);
		}
		if (v24)
			sub_14018B900((__int64)v24, 0);
	}
	else
	{
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v16 = *(_QWORD*)(v15 + 16);
		*(_QWORD*)v16 = *v14;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(v15 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v16, a3, word_1409F0CEC);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0580(
		*(_QWORD*)(a1 + 16),
		(*(unsigned __int64*)&a2 * (unsigned __int128)0x624DD2F1A9FBE77ui64) >> 64,
		a4,
		(double)(int)(*(unsigned __int64*)&a2 / 0x3E8));
	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1404EF9EF: variable 'v12' is possibly undefined
// 1404EFA4D: variable 'v15' is possibly undefined
// 1404EFA95: variable 'v18' is possibly undefined
// 1409F0CC4: using guessed type unsigned __int16 word_1409F0CC4[12];
// 1409F0CEC: using guessed type unsigned __int16 word_1409F0CEC[20];
// 1404EF920: using guessed type char var_68[8];

