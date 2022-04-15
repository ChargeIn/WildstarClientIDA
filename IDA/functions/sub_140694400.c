//----- (0000000140694400) ----------------------------------------------------
__int64 __fastcall sub_140694400(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	FILETIME* v4; // rax
	unsigned __int16** v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	FILETIME v13; // [rsp+58h] [rbp+10h] BYREF

	if (qword_140C65C28
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (FILETIME*)sub_140643EA0(qword_140C65C28, ***(_DWORD***)(v3 + 8))) != 0i64)
	{
		v5 = (unsigned __int16**)sub_14048BF80(v4, &v13);
		v6 = (unsigned __int64*)sub_14018F0E0(&v11, *v5)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			sub_140058710((__int64)a1, v6, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)&v13 - 16i64) + 8i64))(*(_QWORD*)&v13 - 16i64);
			return 1i64;
		}
	}
	else
	{
		v9 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409F5D64)[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710((__int64)a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
	}
	return 1i64;
}
// 1409F5D64: using guessed type unsigned __int16 word_1409F5D64[2];
// 140C65C28: using guessed type __int64 qword_140C65C28;

