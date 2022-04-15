//----- (0000000140398540) ----------------------------------------------------
void __fastcall sub_140398540(__int64 a1, int* a2)
{
	__int64 v2; // rbp
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rbx
	signed __int64 v7; // rbx
	__int64* v8; // rax
	int* v9; // rdi
	__int64 v10; // rax
	int* v11; // rbx
	unsigned __int64 v12; // rcx
	int* v13; // rcx
	signed __int64 v14; // rdx
	int v15; // edx
	int v16; // eax
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	int* v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+60h] [rbp+8h] BYREF
	__int64 v20; // [rsp+68h] [rbp+10h] BYREF

	if (a2)
	{
		v19 = a1;
		v2 = qword_140C65898;
		if (qword_140C65970)
		{
			v4 = 0i64;
			v5 = 0i64;
			if (*(_WORD*)a2)
			{
				do
					++v4;
				while (*((_WORD*)a2 + v4));
			}
			v6 = (2 * v4) >> 1;
			if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v5 = sub_14018B280(2 * (v6 + 1), 0);
			v7 = 2 * v6;
			sub_1407DB590(v5, a2, v7);
			if ((int*)((char*)v5 + v7))
				*(_WORD*)((char*)v5 + v7) = 0;
			v8 = &v19;
			v20 = 16i64;
			v9 = 0i64;
			v19 = v7 >> 1;
			if ((unsigned __int64)(v7 >> 1) >= 0x10)
				v8 = &v20;
			v10 = *v8;
			v11 = (int*)((char*)v5 + 2 * v10);
			v12 = ((2 * v10) >> 1) + 1;
			if (v12 <= 0x7FFFFFFFFFFFFFFEi64)
				v9 = sub_14018B280(2 * v12, 0);
			v13 = v9;
			if (v5 != v11)
			{
				v14 = (char*)v5 - (char*)v9;
				do
				{
					if (v13)
						*(_WORD*)v13 = *(_WORD*)((char*)v13 + v14);
					v13 = (int*)((char*)v13 + 2);
				} while ((int*)((char*)v13 + v14) != v11);
			}
			if (v13)
				*(_WORD*)v13 = 0;
			if (v5)
				sub_14018B900((__int64)v5, 0);
			v18 = 0i64;
			v17 = 0i64;
			v15 = *(_DWORD*)qword_140C63750;
			v16 = dword_140C4D460;
			v18 = v9;
			if (v15 < dword_140C4D460)
				v16 = v15;
			HIDWORD(v17) = *((_DWORD*)&xmmword_140C4D470 + v16);
			sub_1403F4900(v2, 0x68Cu, (__int64)&v17);
			if (v9)
				sub_14018B900((__int64)v9, 0);
		}
	}
}
// 140C4D460: using guessed type int dword_140C4D460;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

