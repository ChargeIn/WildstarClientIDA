//----- (00000001401180D0) ----------------------------------------------------
void __fastcall sub_1401180D0(__int64 a1, int* a2, int* a3)
{
	unsigned __int64 v6; // rbx
	int* v7; // rax
	int* v8; // rbp
	int* v9; // rax
	__int64 v10; // r14
	unsigned __int64 v11; // rdi
	int* v12; // r15
	int* v13; // rax
	int* v14; // rbx
	int* v15; // [rsp+58h] [rbp+10h] BYREF

	if (a2 && *(_BYTE*)a2 && a3)
	{
		v6 = 0i64;
		do
			++v6;
		while (*((_BYTE*)a2 + v6));
		v7 = sub_14018B280(v6 + 17, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		v8 = v7 + 4;
		sub_1407DB590(v7 + 4, a2, v6);
		*((_BYTE*)v8 + v6) = 0;
		v15 = v8;
		v9 = sub_140121C50(a1 + 72, &v15);
		v10 = *(_QWORD*)v9;
		v11 = 0i64;
		v12 = v9;
		if (*(_BYTE*)a3)
		{
			do
				++v11;
			while (*((_BYTE*)a3 + v11));
		}
		v13 = sub_14018B280(v11 + 17, 0);
		if (v13)
		{
			*(_QWORD*)v13 = off_140B55060;
			*((_QWORD*)v13 + 1) = v11;
		}
		v14 = v13 + 4;
		sub_1407DB590(v13 + 4, a3, v11);
		*((_BYTE*)v14 + v11) = 0;
		*(_QWORD*)v12 = v14;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		if (v8)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

