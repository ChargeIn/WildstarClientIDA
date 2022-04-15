//----- (00000001408EB8A0) ----------------------------------------------------
__int64 __fastcall sub_1408EB8A0(__int64 a1, int a2)
{
	__int64 v2; // r12
	int v4; // eax
	signed int v5; // r14d
	signed int v6; // ebp
	int* v7; // rax
	int* v8; // rbx
	char* v9; // rdi
	__int64 v10; // rcx
	_QWORD* v11; // rax

	v2 = a2;
	*(_DWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 40) = 0i64;
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 4i64);
	v5 = (4 * a2 * (v4 >> 2) + 15) & 0xFFFFFFF0;
	v6 = (4 * a2 * (v4 >> 1) + 15) & 0xFFFFFFF0;
	if (!(v5 + v6))
		return 0xFFFFFFFFi64;
	v7 = (int*)sub_1408819F0(dword_140C10F28, (unsigned int)(v5 + v6));
	v8 = v7;
	if (!v7)
		return 0xFFFFFFFFi64;
	v9 = (char*)v7 + v6;
	sub_1407E4830(v7, 0i64, (unsigned int)(v5 + v6));
	v10 = v2;
	if ((int)v2 > 0)
	{
		v11 = (_QWORD*)(a1 + 88);
		do
		{
			*(v11 - 6) = v8;
			*v11 = v9;
			v8 = (int*)((char*)v8 + v6 / (int)v2);
			v9 += v5 / (int)v2;
			++v11;
			--v10;
		} while (v10);
	}
	*(_QWORD*)(a1 + 144) = 0i64;
	return 0i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

