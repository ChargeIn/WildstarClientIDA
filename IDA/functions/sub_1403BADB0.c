//----- (00000001403BADB0) ----------------------------------------------------
void __fastcall sub_1403BADB0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v4; // rdx
	__int64 v6; // rax
	__int64 v7; // r8
	unsigned __int8 v8; // cl
	int i; // r14d
	__int64* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdi
	__int64 v13; // [rsp+58h] [rbp+20h]

	if (a2)
	{
		v4 = *(_QWORD*)(a1 + 2728);
		v6 = *(_QWORD*)(v4 + 8);
		v7 = v4;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v7 == v4 || (v13 = v7, a2 < *(_DWORD*)(v7 + 32)))
			v13 = *(_QWORD*)(a1 + 2728);
		if (v13 != v4)
		{
			if (a3 == 4)
			{
				a3 = 0;
				v8 = *(_BYTE*)(*(_QWORD*)(v13 + 40) + 8i64);
			}
			else
			{
				v8 = a3 + 1;
			}
			for (i = v8; a3 < i; *(_DWORD*)(v12 + 4) = sub_1407A1440(v11, a2, 1u))
			{
				v10 = *(__int64**)(v13 + 40);
				v11 = *v10;
				v12 = *(_QWORD*)(*v10 + 8i64 * a3);
				*(_BYTE*)(v12 + 8) = 1;
				++a3;
			}
		}
	}
}

