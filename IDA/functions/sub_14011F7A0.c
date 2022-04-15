//----- (000000014011F7A0) ----------------------------------------------------
__int64 __fastcall sub_14011F7A0(_QWORD* a1)
{
	_DWORD* v1; // rax
	char* v3; // rax
	int* v4; // r14
	__int64 v5; // rdi
	int* v6; // rax
	int* v7; // rbx
	unsigned __int64 v8; // rdi
	int* v9; // rdi
	int* v10; // rax
	unsigned __int16* v11; // r14
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	int* v15; // [rsp+20h] [rbp-38h] BYREF
	int* v16; // [rsp+28h] [rbp-30h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (unsigned int)(v1[2] - 3) > 1)
		return 0i64;
	v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v15, v3);
	v4 = v16;
	if (v16)
	{
		v5 = 0i64;
		if (*(_WORD*)v16)
		{
			do
				++v5;
			while (*((_WORD*)v16 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v4, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		sub_14018B900((__int64)v4, 0);
	}
	else
	{
		v7 = 0i64;
	}
	v9 = (int*)*((_QWORD*)v7 - 1);
	v15 = v7;
	v16 = v9;
	v10 = sub_14018B280(2i64 * (_QWORD)v9 + 18, 0);
	if (v10)
	{
		*(_QWORD*)v10 = off_140B55060;
		*((_QWORD*)v10 + 1) = v9;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = (unsigned __int16*)(v10 + 4);
	sub_1401B2410(&v15, (__int64)(v10 + 4));
	v11[(_QWORD)v9] = 0;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	v12 = (unsigned __int64*)sub_14018F0E0(&v15, v11)[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710((__int64)a1, v12, v13);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v16)
		sub_14018B900((__int64)v16, 0);
	if (v11)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

