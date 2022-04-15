//----- (00000001400437C0) ----------------------------------------------------
__int64 sub_1400437C0()
{
	__int64 v0; // rcx
	__int64 result; // rax
	unsigned __int64 v2; // rsi
	__int64 v3; // r14
	__int64 v4; // r13
	unsigned int v5; // r15d
	__int64 v6; // r12
	int* v7; // rbp
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v11; // rbx
	signed __int64 v12; // rbx
	char* v13; // rax
	unsigned __int64 v14; // rdx
	unsigned __int64 v15; // r8
	signed __int64 v16; // r9
	__int64 v17; // rcx
	__int64 v18; // rbx
	char v19[16]; // [rsp+20h] [rbp-38h] BYREF
	char v20; // [rsp+60h] [rbp+8h] BYREF

	v0 = qword_140C63620;
	result = qword_140C65898;
	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C65898 + 29504);
	v4 = qword_140C63620 + 104;
	if (*(_QWORD*)(qword_140C63620 + 120))
	{
		sub_140044CA0(qword_140C63620 + 104, *(_QWORD**)(*(_QWORD*)(qword_140C63620 + 112) + 8i64));
		v0 = qword_140C63620;
		*(_QWORD*)(*(_QWORD*)(v4 + 8) + 16i64) = *(_QWORD*)(v4 + 8);
		*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) = 0i64;
		result = *(_QWORD*)(v4 + 8);
		*(_QWORD*)(result + 24) = result;
		*(_QWORD*)(v4 + 16) = 0i64;
	}
	v5 = 0;
	if (*(_DWORD*)(v3 + 2520))
	{
		v6 = 0i64;
		do
		{
			v7 = 0i64;
			v8 = *(_QWORD*)(v6 + *(_QWORD*)(v3 + 2512));
			v9 = 0i64;
			while (aHycrestadventu[++v9] != 0)
				;
			v11 = (2 * v9) >> 1;
			if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v7 = sub_14018B280(2 * (v11 + 1), 0);
			v12 = 2 * v11;
			sub_1407DB590(v7, (int*)L"HycrestAdventure", v12);
			if ((int*)((char*)v7 + v12))
				*(_WORD*)((char*)v7 + v12) = 0;
			v13 = *(char**)(v8 + 24);
			v14 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v14;
				while (*(_WORD*)&v13[2 * v14]);
			}
			if (v12 >> 1 == v14)
			{
				v15 = 0i64;
				if (v14)
				{
					v16 = (char*)v7 - v13;
					do
					{
						if (*(_WORD*)&v13[v16] != *(_WORD*)v13)
							break;
						++v15;
						v13 += 2;
					} while (v15 < v14);
				}
			}
			if (!*(_BYTE*)(v8 + 264)
				&& ((unsigned int)sub_140421470((__int64)&v20, v8) == 1
					|| (unsigned int)sub_140421470((__int64)&v20, v8) && sub_140136B00(v8, *(_DWORD*)(v3 + 2568))))
			{
				v17 = *(_QWORD*)(v8 + 424);
				if ((*(_QWORD*)(v8 + 432) - v17) >> 5)
				{
					v18 = 0i64;
					do
					{
						sub_140044D10(v4, (__int64)v19, v18 + v17);
						v17 = *(_QWORD*)(v8 + 424);
						++v2;
						v18 += 32i64;
					} while (v2 < (*(_QWORD*)(v8 + 432) - v17) >> 5);
				}
				v2 = 0i64;
			}
			if (v7)
				sub_14018B900((__int64)v7, 0);
			++v5;
			v6 += 8i64;
		} while (v5 < *(_DWORD*)(v3 + 2520));
		result = qword_140C63620;
		*(_BYTE*)(qword_140C63620 + 96) = 0;
	}
	else
	{
		*(_BYTE*)(v0 + 96) = 0;
	}
	return result;
}
// 1409FEAE0: using guessed type wchar_t aHycrestadventu[17];
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1400437C0: using guessed type char var_38[16];

