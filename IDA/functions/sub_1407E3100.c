//----- (00000001407E3100) ----------------------------------------------------
char __fastcall sub_1407E3100(__int64 a1)
{
	_BYTE* v1; // rbx
	__int64 v3; // rbp
	_WORD* v4; // rdi
	__int64 i; // rcx
	char* v6; // rdi
	char* v7; // rcx
	__int64 v8; // rdx
	char result; // al

	v1 = (_BYTE*)(a1 + 24);
	v3 = 257i64;
	sub_1407E4830((int*)(a1 + 24), 0i64, 0x101ui64);
	v4 = (_WORD*)(a1 + 12);
	*(_QWORD*)(a1 + 4) = 0i64;
	*(_QWORD*)(a1 + 544) = 0i64;
	for (i = 6i64; i; --i)
		*v4++ = 0;
	v6 = (char*)&unk_140C0FD80 - a1;
	do
	{
		*v1 = v1[(_QWORD)v6];
		++v1;
		--v3;
	} while (v3);
	v7 = (char*)(a1 + 281);
	v8 = 256i64;
	do
	{
		result = v6[(_QWORD)v7];
		*v7++ = result;
		--v8;
	} while (v8);
	return result;
}

