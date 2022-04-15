//----- (000000014015F0A0) ----------------------------------------------------
void __fastcall sub_14015F0A0(__int64 a1, int a2, int a3, int* a4, int* a5)
{
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rsi
	int* v8; // rdi
	__int64 v9; // rax
	int* v10; // rdx

	if (a2 >= 0 && a2 < *(_DWORD*)(a1 + 1160) && a3 >= 0 && a3 < *(_DWORD*)(a1 + 1144))
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8i64 * a2);
		v6 = 0i64;
		if (a3 >= *(_DWORD*)(v5 + 24))
			v7 = 0i64;
		else
			v7 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 8i64 * a3);
		v8 = (int*)&word_140B7B704;
		v9 = 0i64;
		v10 = (int*)&word_140B7B704;
		if (a4)
			v10 = a4;
		if (*(_WORD*)v10)
		{
			do
				++v9;
			while (*((_WORD*)v10 + v9));
		}
		sub_14001C480(v7 + 48, v10, (int*)((char*)v10 + 2 * v9));
		if (a5)
			v8 = a5;
		if (*(_WORD*)v8)
		{
			do
				++v6;
			while (*((_WORD*)v8 + v6));
		}
		sub_14001C480(v7 + 80, v8, (int*)((char*)v8 + 2 * v6));
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;

