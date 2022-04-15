//----- (0000000140660130) ----------------------------------------------------
__int64 __fastcall sub_140660130(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rax
	int* v3; // rax
	int* v4; // rdi
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int* v9; // rbx
	int* v10; // rax
	int* v12; // [rsp+20h] [rbp-18h] BYREF
	int* v13; // [rsp+28h] [rbp-10h]

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *v1);
		if (v2)
		{
			v3 = *(int**)(v2 + 16);
			v4 = (int*)&word_140B7B704;
			if (v3)
				v4 = v3;
			v5 = 0i64;
			v6 = 0i64;
			if (*(_WORD*)v4)
			{
				do
					++v5;
				while (*((_WORD*)v4 + v5));
			}
			v7 = (2 * v5) >> 1;
			if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v6 = sub_14018B280(2 * (v7 + 1), 0);
			v8 = 2 * v7;
			sub_1407DB590(v6, v4, v8);
			if ((int*)((char*)v6 + v8))
				*(_WORD*)((char*)v6 + v8) = 0;
			v9 = sub_14018B280(2i64, 0);
			sub_1407DB590(v9, dword_1409F46DC, 0i64);
			if (v9)
				*(_WORD*)v9 = 0;
			if (v6 && *(_WORD*)v6)
			{
				v12 = 0i64;
				v13 = 0i64;
				v10 = (int*)&unk_1409F3BB4;
				if (v9)
					v10 = v9;
				v13 = v10;
				v12 = v6;
				sub_1403F4900(qword_140C65898, 0x416u, (__int64)&v12);
			}
			if (v9)
				sub_14018B900((__int64)v9, 0);
			if (v6)
				sub_14018B900((__int64)v6, 0);
		}
	}
	return 0i64;
}
// 1409F46DC: using guessed type int dword_1409F46DC[42];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

