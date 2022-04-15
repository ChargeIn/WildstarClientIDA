//----- (00000001400D2C30) ----------------------------------------------------
__int64 __fastcall sub_1400D2C30(__int64 a1, int* a2)
{
	int* v2; // rbp
	__int64 v3; // rsi
	__int64 v4; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	unsigned __int16* v10; // rdx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // r8
	_WORD* v13; // rax
	__int64 result; // rax

	v2 = (int*)&unk_1409D3074;
	if (a2)
		v2 = a2;
	v3 = 0i64;
	v4 = *(_QWORD*)(a1 + 536);
	if (v2)
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 536) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 536) = 0i64;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v10 = *(unsigned __int16**)(a1 + 536);
	v11 = 0i64;
	v12 = *((_QWORD*)v10 - 1);
	if (v12)
	{
		v13 = *(_WORD**)(a1 + 536);
		do
		{
			if (*v13 == 58)
				break;
			++v11;
			++v13;
		} while (v11 < v12);
	}
	for (result = *v10; (_WORD)result; result = *v10)
	{
		++v10;
		v3 = (unsigned __int16)result + 2860486313i64 * v3;
	}
	*(_QWORD*)(a1 + 544) = v3;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

