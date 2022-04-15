//----- (00000001405838B0) ----------------------------------------------------
__int64 __fastcall sub_1405838B0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // r8
	int* v6; // rbp
	__int64 v7; // r13
	__int64 v8; // rdi
	int* v9; // rax
	int* v10; // rsi
	unsigned __int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v14; // [rsp+50h] [rbp+8h]

	v3 = *(_QWORD**)(qword_140C7DE58 + 8);
	v4 = qword_140C7DE58;
	if (!v3)
		goto LABEL_9;
	v5 = *(_QWORD*)(a2 + 8);
	do
	{
		if (v3[4] < v5)
		{
			v3 = (_QWORD*)v3[3];
		}
		else
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)v3[2];
		}
	} while (v3);
	if (v4 == qword_140C7DE58 || (v14 = v4, v5 < *(_QWORD*)(v4 + 32)))
		LABEL_9:
	v14 = qword_140C7DE58;
	if (v14 != qword_140C7DE58)
	{
		v6 = *(int**)(a2 + 16);
		v7 = *(_QWORD*)(v14 + 96);
		if (v6)
		{
			v8 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v8;
				while (*((_WORD*)v6 + v8));
			}
			v9 = sub_14018B280(2 * v8 + 18, 0);
			if (v9)
			{
				*((_QWORD*)v9 + 1) = v8;
				*(_QWORD*)v9 = off_140B55060;
			}
			else
			{
				v9 = 0i64;
			}
			v10 = v9 + 4;
			v11 = 2 * v8;
			sub_1407DB590(v9 + 4, v6, v11);
			*(_WORD*)((char*)v10 + v11) = 0;
			*(_QWORD*)(v14 + 96) = v10;
		}
		else
		{
			*(_QWORD*)(v14 + 96) = 0i64;
		}
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		v12 = qword_140C65898;
		*(_DWORD*)(v14 + 104) = *(_DWORD*)(a2 + 24);
		*(_DWORD*)(v14 + 108) = *(_DWORD*)(a2 + 28);
		*(_DWORD*)(v14 + 112) = *(_DWORD*)(a2 + 32);
		*(_QWORD*)(v14 + 116) = *(_QWORD*)(a2 + 36);
		*(_DWORD*)(v14 + 124) = *(_DWORD*)(a2 + 44);
		sub_140427870(*(_QWORD*)(v12 + 29504), *(_QWORD*)(a2 + 8));
	}
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE58: using guessed type __int64 qword_140C7DE58;

