//----- (0000000140335360) ----------------------------------------------------
u_long __fastcall sub_140335360(int* a1)
{
	unsigned __int64 v2; // rdi
	int* v3; // rax
	int* v4; // rbx
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rsi
	int* v7; // rbp
	int* v8; // rax
	int* v9; // rdi
	unsigned int v10; // eax
	u_long result; // eax
	u_long v12; // edi

	if (a1)
	{
		v2 = 0i64;
		if (*(_BYTE*)a1)
		{
			do
				++v2;
			while (*((_BYTE*)a1 + v2));
		}
		v3 = sub_14018B280(v2 + 17, 0);
		if (v3)
		{
			*(_QWORD*)v3 = off_140B55060;
			*((_QWORD*)v3 + 1) = v2;
		}
		v4 = v3 + 4;
		sub_1407DB590(v3 + 4, a1, v2);
		*((_BYTE*)v4 + v2) = 0;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = *((_QWORD*)v4 - 1);
	v6 = 0i64;
	if (v5)
	{
		while (*((_BYTE*)v4 + v6) != 58)
		{
			if (++v6 >= v5)
				goto LABEL_16;
		}
		v7 = v4;
		v8 = sub_14018B280(v6 + 17, 0);
		if (v8)
		{
			*(_QWORD*)v8 = off_140B55060;
			*((_QWORD*)v8 + 1) = v6;
		}
		v9 = v8 + 4;
		sub_1407DB590(v8 + 4, v4, v6);
		*((_BYTE*)v9 + v6) = 0;
		v4 = v9;
		if (v7)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	}
LABEL_16:
	v10 = inet_addr((const char*)v4);
	result = ntohl(v10);
	v12 = result;
	if (v4)
	{
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
		return v12;
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

